/// \file
/// Implementation of the class tandem_generator.

#include <ilang/target-sc/tandem_generator.h>

#include <fstream>
#include <ilang/util/fs.h>
#include <ilang/util/log.h>
#include <ilang/ila/ast_hub.h>
#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ilator.h>

namespace ilang {
static const std::string kRTLWrapperType = "TandemController"; 
static const std::string kDirApp = "app";
static const std::string kDirSrc = "src";
static const std::string kDirInclude = "include";

void TandemGenerator::GenerateS2(const std::string& dst, bool opt, bool aux_pc) {
  aux_pc_ = aux_pc;
  i_ = new Ilator(m_);
  GenerateChecker(dst, opt);
  GenerateIlaWrapper(dst);
  GenerateRTLWrapper(dst);
  GenerateIlatedConstructor(os_portable_append_dir(dst, kDirSrc));
  GenerateBuildSupport(dst);
}

void TandemGenerator::GenerateS4(const std::string& dst, bool opt, bool aux_pc) {
  aux_pc_ = aux_pc;
  i_ = new Ilator(m_);
  GenerateConverter(dst, opt);
  GenerateIlaWrapper(dst, true);
  GenerateRTLWrapper(dst, true);
  GenerateIlatedConstructor(os_portable_append_dir(dst, kDirSrc));
  GenerateBuildSupport(dst);
}

void TandemGenerator::GenerateCheckerHeader() {
  fmt::format_to(
    std::back_inserter(ilated_header_), 
    "{declare_pc}"
    "{model}();\n"
    "int tandem_func_ptr;\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("declare_pc", aux_pc_ ? "uint32_t " + m_->name().str() + "_pc;\n" : "")
  );
}

void TandemGenerator::GenerateConverterHeader() {
  fmt::format_to(
    std::back_inserter(ilated_header_), 
    "{declare_pc}"
    "{model}();\n"
    "int tandem_func_ptr;\n"    
    "void swap_av({RTL} *v);\n"
    "void reset_rtav({RTL} *v);\n"
    "void hold_rtav({RTL} *v);\n"
    "void av_converter({RTL} *v);\n",
    fmt::arg("declare_pc", aux_pc_ ? "uint32_t " + m_->name().str() + "_pc;\n" : ""),
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType)
  );
}

void TandemGenerator::GetStateCheck(StrBuff& buff) {
  std::string check_all_impl;
  auto state_map = ref_map_["state mapping"];
  for (uint i = 0; i < m_->state_num(); i++) {
    auto state = m_->state(i);
    try {
      auto v_reg = state_map.at(state->name().str());

      fmt::format_to(
        std::back_inserter(ilated_header_),
        "void check_{state}({RTL}* v);\n",
        fmt::arg("state", state->name().str()),
        fmt::arg("RTL", kRTLWrapperType)
      );

      fmt::format_to(
        buff,
        "void {model}::check_{state}({RTL}* v) {{\n",
        fmt::arg("model", m_->name().str()),
        fmt::arg("state", state->name().str()),
        fmt::arg("RTL", kRTLWrapperType)
      );

      std::string v_reg_str;
      std::string i_state_str;
      if (v_reg.is_string()) {
        v_reg_str = fmt::format(
          "{v_reg}",
          fmt::arg("v_reg",
            boost::replace_all_copy(boost::replace_all_copy(boost::replace_all_copy(v_reg.get<std::string>(), ".", "->"),"v_top", "v->v_top"), "monitor", "v->curr_monitor"))
        );
        i_state_str = fmt::format(
          "{model}_{state}",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str())      
        );
      } else {
        v_reg_str = "v_reg";
        i_state_str = "i_reg";
        auto v_reg_content = fmt::format(
          "{var_type} {v_reg} = ",
          fmt::arg("var_type", i_->GetIlatedType(state)),
          fmt::arg("v_reg", v_reg_str)
        );
        auto i_reg_content = fmt::format(
          "{var_type} {i_reg} = ",
          fmt::arg("var_type", i_->GetIlatedType(state)),
          fmt::arg("i_reg", i_state_str)
        );
        for (const auto & item : v_reg.items()) {
          if (item.value().is_number()) {
            fmt::format_to(
              std::back_inserter(v_reg_content),
              "({cond}) ? {val} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", item.value().get<int>())
            );
          } else if (item.value().is_string()) {
            fmt::format_to(
              std::back_inserter(v_reg_content),
              "({cond}) ? {val} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item.value().get<std::string>(), ".", "->"),"v_top", "v->v_top"))
            );
          } else {
            auto item_vec = item.value().get<std::vector<std::string>>();
            ILA_ASSERT(item_vec.size() == 2);
            fmt::format_to(
              std::back_inserter(i_reg_content),
              "({cond}) ? {val} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item_vec[0], "ila.", m_->name().str() + "_"),"\"", ""))
            );
            fmt::format_to(
              std::back_inserter(v_reg_content),
              "({cond}) ? {val} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item_vec[1], ".", "->"),"v_top", "v->v_top"))
            );
          }
        }
        fmt::format_to(
          std::back_inserter(i_reg_content),
          "{model}_{state};\n",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str())
        );
        fmt::format_to(
          std::back_inserter(v_reg_content),
          "0;\n"
        );
        fmt::format_to(buff, i_reg_content);
        fmt::format_to(buff, v_reg_content);
      }      

      if (state->is_bool()) {
        fmt::format_to(
          buff,
          "if ({i_state} != {v_reg})\n"
          "  throw {model}Exception(\"{state} unequal.\");\n",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str()),
          fmt::arg("i_state", i_state_str),
          fmt::arg("v_reg", v_reg_str)
        );
      } else if (state->is_bv()) {
        if (state->sort()->bit_width() <= 32) {
          fmt::format_to(
            buff,
            "if (((uint32_t) {i_state}) != {v_reg})\n"
            "  throw {model}Exception(\"{state} unequal.\");\n",    
            fmt::arg("model", m_->name().str()),
            fmt::arg("state", state->name().str()),
            fmt::arg("i_state", i_state_str),
            fmt::arg("v_reg", v_reg_str)                    
          );
        } else if (state->sort()->bit_width() < 64) {
          ILA_ERROR << "Tandem doesn't support AV-Check for bw [33,63]";
        }
        else if (state->sort()->bit_width() == 64) {
          fmt::format_to(
            buff,
            "if ({i_state} != {v_reg})\n"
            "  throw {model}Exception(\"{state} unequal.\");\n",
            fmt::arg("model", m_->name().str()),
            fmt::arg("state", state->name().str()),
            fmt::arg("i_state", i_state_str),
            fmt::arg("v_reg", v_reg_str)
          );
        } else {
          size_t bv_w = state->sort()->bit_width();
          size_t saturated = (bv_w % 32 == 0) ? 0 : 1;
          for (int j = 0; j < (bv_w / 32) + saturated; j++) {
            fmt::format_to(
              buff,
              "if (({i_state} >> {r_shift}) % (1ll << 32) != " 
              "{v_reg}[{idx}])\n"
              "  throw {model}Exception(\"{state} unequal.\");\n",
              fmt::arg("model", m_->name().str()),
              fmt::arg("state", state->name().str()),
              fmt::arg("r_shift", j * 32),
              fmt::arg("i_state", i_state_str),
              fmt::arg("v_reg", v_reg_str),
              fmt::arg("idx", j)
            );
          }
        }
      }
      fmt::format_to(buff, "}}\n");
      fmt::format_to(
        std::back_inserter(check_all_impl),
        "  check_{state}(v);\n",
        fmt::arg("state", state->name().str())
      );
    } catch (nlohmann::detail::out_of_range& e) {
      // std::cout << "out of range: " << e.what() << '\n';
      continue;
    }
  }
  fmt::format_to(
    std::back_inserter(ilated_header_),
    "void check_all_state({}* v);\n",
    kRTLWrapperType 
  ); 
  fmt::format_to(buff,
    "void {model}::check_all_state({RTL}* v) {{\n"
    "  {check_all_impl}"
    "}}\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("check_all_impl", check_all_impl)
  );  
}

void TandemGenerator::GetInstrCheck(StrBuff& buff) {
  fmt::format_to(
    std::back_inserter(ilated_header_),
    "typedef void ({model}::*tandem_func_type)({RTL}* v);\n"
    "tandem_func_type tandem_func[{len}];\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("len", m_->instr_num() + 1)
  );

  auto state_map = ref_map_["state mapping"];
  for (uint i = 0; i < m_->instr_num(); i++) {
    auto instr = m_->instr(i);
    fmt::format_to(
      std::back_inserter(ilated_header_),
      "void tandem_instr_{instr}({RTL}* v);\n",
      fmt::arg("instr", instr->name().str()),
      fmt::arg("RTL", kRTLWrapperType)
    );    
    fmt::format_to(
      buff,
      "void {model}::tandem_instr_{instr} ({RTL}* v) {{\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("instr", instr->name().str()),
      fmt::arg("RTL", kRTLWrapperType)
    );

    for (auto updated_state_name : instr->updated_states()) {
      try {
        auto v_name = state_map.at(updated_state_name);
        fmt::format_to(
          buff,
          "check_{state}(v);\n",
          fmt::arg("state", updated_state_name)
        );
      } catch (nlohmann::detail::out_of_range& e) {
      }
    }
    fmt::format_to(buff, "}}\n");
  }
}

void TandemGenerator::GetStateConvert(StrBuff& buff) {

  std::string swap_av;
  auto state_map = ref_map_["state mapping"];
  for (uint i = 0; i < m_->state_num(); i++) {
    auto state = m_->state(i);
    try {
      auto v_reg = state_map.at(state->name().str());
      std::string i_state_str;
      std::string v_reg_str;
      if (v_reg.is_string()) {
        v_reg_str = fmt::format(
          "{v_reg}",
          fmt::arg("v_reg",
            boost::replace_all_copy(boost::replace_all_copy(v_reg.get<std::string>(), ".", "->"),"v_top", "v->v_top"))
        );
        i_state_str = fmt::format(
          "{model}_{state}",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str())      
        );
      } else {
        i_state_str = fmt::format(
          "i_reg_{model}_{state}",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str())
        );
        
        auto i_reg_content = fmt::format(
          "{var_type} {i_reg} = ",
          fmt::arg("var_type", i_->GetIlatedType(state)),
          fmt::arg("i_reg", i_state_str)
        );
        for (const auto & item : v_reg.items()) {
          if (item.value().is_number()) {
            fmt::format_to(
              std::back_inserter(i_reg_content),
              "({cond}) ? {var} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", item.value().get<int>())            
            );
          } else if (item.value().is_string()) {
            v_reg_str = fmt::format(
              "{val}",
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item.value().get<std::string>(), ".", "->"),"v_top", "v->v_top"))
            );
            fmt::format_to(
              std::back_inserter(i_reg_content),
              "({cond}) ? {model}_{state} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("model", m_->name().str()),
              fmt::arg("state", state->name().str())  
            );                
          } else {
            auto item_vec = item.value().get<std::vector<std::string>>();
            ILA_ASSERT(item_vec.size() == 2);            
            v_reg_str = fmt::format(
              "{val}",
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item_vec[1], ".", "->"),"v_top", "v->v_top"))
            );
            fmt::format_to(
              std::back_inserter(i_reg_content),
              "({cond}) ? {val} : ",
              fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", "")),
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(item_vec[0], "ila.", m_->name().str() + "_"),"\"", ""))  
            ); 
          }
        }
        fmt::format_to(
          std::back_inserter(i_reg_content),
          "{model}_{state};\n",
          fmt::arg("model", m_->name().str()),
          fmt::arg("state", state->name().str())
        );  
        fmt::format_to(std::back_inserter(swap_av), i_reg_content);
      }

      if (v_reg_str.find("v_top") == std::string::npos)
        continue;

      if (state->is_bool()) {
        fmt::format_to(
          std::back_inserter(swap_av),
          "{v_reg_str} = {i_state_str};\n",
          fmt::arg("i_state_str", i_state_str),
          fmt::arg("v_reg_str", v_reg_str)
          // fmt::arg("model", m_->name().str()),
          // fmt::arg("state", state->name().str()),
          // fmt::arg("v_reg", boost::replace_all_copy(
                            // boost::replace_all_copy(v_reg.dump(), ".", "->"),
                            // "\"", ""))
        );
      } else if (state->is_bv()) {
        if (state->sort()->bit_width() <= 32) {
          fmt::format_to(
            std::back_inserter(swap_av),
            "{v_reg_str} = (uint32_t) {i_state_str};\n",
            fmt::arg("i_state_str", i_state_str),
            fmt::arg("v_reg_str", v_reg_str)            
            // fmt::arg("model", m_->name().str()),
            // fmt::arg("state", state->name().str()),
            // fmt::arg("v_reg", boost::replace_all_copy(
            //                   boost::replace_all_copy(v_reg.dump(), ".", "->"),
            //                   "\"", ""))
          ); 
        } else if (state->sort()->bit_width() < 64) {
          ILA_ERROR << "Tandem doesn't support AV-Convert for bw [33,63]";
        } else if (state->sort()->bit_width() == 64) {
          fmt::format_to(
            std::back_inserter(swap_av),
            "{v_reg_str} = {i_state_str};\n",
            fmt::arg("i_state_str", i_state_str),
            fmt::arg("v_reg_str", v_reg_str)              
            // fmt::arg("model", m_->name().str()),
            // fmt::arg("state", state->name().str()),
            // fmt::arg("v_reg", boost::replace_all_copy(
            //                   boost::replace_all_copy(v_reg.dump(), ".", "->"),
            //                   "\"", ""))
          );
        } else {
          size_t bv_w = state->sort()->bit_width();
          size_t saturated = (bv_w % 32 == 0) ? 0 : 1;
          for (int j = 0; j < (bv_w / 32) + saturated; j++) {
            fmt::format_to(
              std::back_inserter(swap_av),
              "{v_reg_str}[{idx}] = (uint32_t) ({i_state_str} >> {r_shift}) % (1ll << 32);\n",
              // fmt::arg("model", m_->name().str()),
              // fmt::arg("state", state->name().str()),
              fmt::arg("r_shift", j * 32),
              // fmt::arg("v_reg", boost::replace_all_copy(
              //                   boost::replace_all_copy(v_reg.dump(), ".", "->"),
              //                   "\"", "")),
              fmt::arg("i_state_str", i_state_str),
              fmt::arg("v_reg_str", v_reg_str),
              fmt::arg("idx", j)
            );
          }
        }
      } else {
        auto addr_width = state->sort()->addr_width();
        fmt::format_to(
          std::back_inserter(swap_av),
          "for (int conv_i = 0; conv_i < {mem_size}; conv_i++) {{\n"
          "  {v_reg_str}[conv_i] = {i_state_str}[conv_i];\n"
          "}}\n",
          fmt::arg("mem_size", (1ll << addr_width)),
          fmt::arg("i_state_str", i_state_str),
          fmt::arg("v_reg_str", v_reg_str)            
          // fmt::arg("v_reg", boost::replace_all_copy(
          //                   boost::replace_all_copy(v_reg.dump(), ".", "->"),
          //                   "\"", "")),
          // fmt::arg("model", m_->name().str()),
          // fmt::arg("state", state->name().str())
        );
      }
    } catch (nlohmann::detail::out_of_range& e) {
      // std::cout << "out of range: " << e.what() << '\n';
      continue;
    }  
  }
  
  try {
    state_map = ref_map_["state conversion"];
    for (const auto& item : state_map.items()) {
      if (item.value().is_string()) {
        fmt::format_to(
          std::back_inserter(swap_av),
          "{v_reg}= {i_state};\n",
          fmt::arg("v_reg", boost::replace_all_copy(
                            boost::replace_all_copy(item.value().get<std::string>(), ".", "->"),
                            "v_top", "v->v_top")), 
          fmt::arg("i_state", boost::replace_all_copy(boost::replace_all_copy(item.key(), "ila.", m_->name().str() + "_"),"\"", ""))
        );
      }
      // } else {
      //   auto item_vec = item.value().get<std::vector<nlohmann::json>>();
      //   ILA_ASSERT(item_vec.size() == 6);
      //   auto i_state_str = item.key();
      //   auto v_reg_str = item_vec[0].get<std::string>();
      //   auto bv_len = item_vec[1].get<int>();
      //   auto ih = item_vec[2].get<int>();
      //   auto il = item_vec[3].get<int>();
      //   auto vh = item_vec[4].get<int>();
      //   auto vl = item_vec[5].get<int>();
      //   if (bv_len < 32) {//TODO
      //   } else {

      //   }
      // }
    }
  } catch (nlohmann::detail::out_of_range& e) {
      // std::cout << "out of range: " << e.what() << '\n';
  }  

  fmt::format_to(buff,
    "void {model}::swap_av({RTL}* v) {{\n"
    "  {swap_av}"
    "}}\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("swap_av", swap_av)
  );  
}

// TODO
void TandemGenerator::GetResetRTL(StrBuff& buff) {
  fmt::format_to(
    buff,
    "void {model}::reset_rtav({RTL} *v) {{\n"
    "}}\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType)
  );
}

void TandemGenerator::GetHoldRTAV(StrBuff& buff) {
  fmt::format_to(
    buff,
    "void {model}::hold_rtav({RTL} *v) {{\n"
    "}}\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType)
  );
}

void TandemGenerator::GetAVConverter(StrBuff& buff) {
  fmt::format_to(
    buff,
    "void {model}::av_converter({RTL} *v) {{\n"
    "  swap_av(v);\n"
    "}}\n",
    fmt::arg("model", m_->name().str()),
    fmt::arg("RTL", kRTLWrapperType)
  );
}

void TandemGenerator::GenerateChecker(const std::string& dst, bool opt) {
  StrBuff buff;
  fmt::format_to(
      buff,
      "#include <{model}_ila_top.h>\n\n",
      fmt::arg("model", m_->name().str())
  );
  GenerateCheckerHeader();
  GetStateCheck(buff);
  GetInstrCheck(buff);
  i_->EnableTandemChecker(this);
  i_->GenerateCXX(dst, opt);
  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(os_portable_append_dir(dst, kDirSrc), m_name + "_tandem.cc"), buff);
}

void TandemGenerator::GenerateConverter(const std::string& dst, bool opt) {
  StrBuff buff;
  fmt::format_to(
      buff,
      "#include <{model}_ila_top.h>\n\n",
      fmt::arg("model", m_->name().str())
  );
  GenerateConverterHeader();
  GetStateCheck(buff);
  GetInstrCheck(buff);
  GetStateConvert(buff);
  GetAVConverter(buff);
  i_->EnableTandemConverter(this);
  i_->GenerateCXX(dst, opt);
  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(os_portable_append_dir(dst, kDirSrc), m_name + "_tandem.cc"), buff);
}

void TandemGenerator::GenerateRTLWrapperHeader(const std::string& dst, bool av_convert_en) {
  StrBuff buff;

  auto includes = ref_map_["verilator_include"];
  for (auto it = includes.begin(); it != includes.end(); ++it) {
    fmt::format_to(buff,
        "#include <V{verilated}.h>\n",
        fmt::arg("verilated", it->get<std::string>())
    );
  }

  // s2
  fmt::format_to(buff, "#include <list>\n");

  fmt::format_to(buff,
    "class Ilated;\n"
    "class {RTL};\n",
    fmt::arg("RTL", kRTLWrapperType)
  );

  fmt::format_to(buff,
    "class v_in {{\n"
    "public:\n"
  );
  for (const auto& item : ref_map_["verilog inputs"].items()) {
    if (item.value() == 1) {
      fmt::format_to(buff,
        "bool {var_name};\n",
        fmt::arg("var_name", item.key())
      );
    } else {
      fmt::format_to(buff,
        "uint{bv_w}_t {var_name};\n",
        fmt::arg("var_name", item.key()),
        fmt::arg("bv_w", item.value().get<int>())
      );
    }
  }
  fmt::format_to(buff, "}};\n\n");

  fmt::format_to(buff, 
      "{monitor_decl}",
      fmt::arg("monitor_decl", GetInstrMonitorDecl())
  );  
  
  std::string extra_header = (1) ? GetSceneTwoRTLWrapperHeader() : ""; 
  static const char* kHeaderTemplate = 
      "class {RTL} {{\n"
      "public:\n"
      "V{rtl_top}* v_top;\n"
      "Ilated* i;\n"
      "{RTL}();\n"
      "{RTL}(Ilated* ilated);\n"
      "bool start_condition(v_in t_v);\n"
      "void v_input(v_in t_v);\n"
      "void i_input(v_in t_v);\n"
      "~{RTL}();\n"
      "void next_cycle_av_check();\n"
      "void next_cycle();\n"
      "void next_instr();\n"
      "{av_converter}"
      "{extra_header}"
      "}};\n";   
  fmt::format_to(buff, kHeaderTemplate,
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("rtl_top", ref_map_["VERILOG"].get<std::string>()),
    fmt::arg("av_converter", (av_convert_en) ? "void av_converter();\n" : ""),
    fmt::arg("extra_header", extra_header)
  );

  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(dst, m_name + "_rtl_monitor.h"), buff);
}

std::string TandemGenerator::GetInstrMonitorDecl() {
  std::string monitor_decl = "";
  static const char* kAbsDeclTemplate = 
      "class InstrMonitor {{\n"
      "public:\n"
      "virtual void pass_cycle({RTL}* v) = 0;\n"
      "virtual bool is_finish({RTL}* v) = 0;\n"
      "v_in t_v_;\n"
      "{aux_var};\n"
      "}};\n\n";

  std::string aux_var = ""; 
  if (ref_map_.contains("aux_monitor")) {
    auto pipe_monitor = ref_map_["aux_monitor"]["pipeline"];
    fmt::format_to(
      std::back_inserter(aux_var),
      "bool {name}[{size}];\n",
      fmt::arg("name", pipe_monitor["name"].get<std::string>()),
      fmt::arg("size", pipe_monitor["size"].get<int>())
    );

    auto state_monitor_map = ref_map_["aux_monitor"]["state"];
    for (auto& state_monitor : state_monitor_map.items()) {
      fmt::format_to(
        std::back_inserter(aux_var),
        "{type} {name}[{size}];\n",
        fmt::arg("type", state_monitor.value()["type"].get<std::string>()),
        fmt::arg("name", state_monitor.key()),
        fmt::arg("size", state_monitor.value()["size"].get<int>())
      );
    }
  }
  fmt::format_to(
    std::back_inserter(monitor_decl),
    kAbsDeclTemplate,
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("aux_var", aux_var)
  ); 

  auto instr_map = ref_map_["instructions"].get<std::vector<nlohmann::json>>();
  static const char* kImplDeclTemplate = 
      "class InstrMonitor{instr} : public InstrMonitor {{\n"
      "public:\n"
      "uint32_t cycle_left;\n"
      "InstrMonitor{instr}(v_in t_v);\n"
      "void pass_cycle({RTL}* v);\n"
      "bool is_finish({RTL}* v);\n"
      "}};\n";

  for (auto& item : instr_map) {
    fmt::format_to(
      std::back_inserter(monitor_decl),
      kImplDeclTemplate,
      fmt::arg("instr", item["instruction"].get<std::string>()),
      fmt::arg("RTL", kRTLWrapperType)
    );
  }
  return monitor_decl;
}

std::string TandemGenerator::GetSceneTwoRTLWrapperHeader() {
  std::string scene_two_header;
  fmt::format_to(
    std::back_inserter(scene_two_header),
    "std::list<InstrMonitor*> i_m_list;\n"
    "void register_ilated(Ilated* ilated);\n"
    "InstrMonitor* gen_monitor(v_in& t_v);\n"
    "InstrMonitor* curr_monitor;\n"
  );
  return scene_two_header;
}


void TandemGenerator::GenerateRTLWrapperSource(const std::string& dst, bool av_convert_en) {
  StrBuff buff;
  fmt::format_to(buff,
    "#include <{model}_ila_top.h>\n\n\n",
    fmt::arg("model", m_->name().str())
  );

  auto instr_map = ref_map_["instructions"].get<std::vector<nlohmann::json>>();

  static const char* kMntConstructorTemplate = 
      "InstrMonitor{instr}::InstrMonitor{instr}(v_in t_v) {{\n"
      "t_v_ = t_v;\n"
      "{cycle_cnt}\n"
      "{init_monitor}\n"
      "}}\n\n";

  static const char* kMntElapseTemplate = 
      "void InstrMonitor{instr}::pass_cycle({RTL}* v) {{\n"
      "cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;\n"
      "{update_monitor}"
      "}}\n\n";

  static const char* kIsFinishTemplate = 
      "bool InstrMonitor{instr}::is_finish({RTL}* v) {{\n"
      "{compute_cond}"
      "return {finish_cond};\n"
      "}}\n\n";

  std::string init_monitor = "";
  std::string update_monitor = "";
  if (ref_map_.contains("aux_monitor")) {
    auto pipe_monitor_map = ref_map_["aux_monitor"]["pipeline"];
    auto state_monitor_map = ref_map_["aux_monitor"]["state"];
    auto pipe_monitor_update = pipe_monitor_map["update"].get<std::vector<std::string>>();
    for (uint32_t i = 0; i < pipe_monitor_map["size"]; i++) {
      fmt::format_to(
        std::back_inserter(update_monitor),
        "{name}[{idx}] = {update};\n",
        fmt::arg("name", pipe_monitor_map["name"].get<std::string>()),
        fmt::arg("idx", pipe_monitor_map["size"].get<int>() - 1 - i),
        fmt::arg("update", boost::replace_all_copy(boost::replace_all_copy(pipe_monitor_update[i], ".", "->"), "v_top", "v->v_top"))
      );
      fmt::format_to(
        std::back_inserter(init_monitor),
        "{name}[{idx}] = 0;\n",
        fmt::arg("name", pipe_monitor_map["name"].get<std::string>()),
        fmt::arg("idx", pipe_monitor_map["size"].get<int>() - 1 - i)
      );
    }
    
    for (auto& item : state_monitor_map.items()) {
      auto name = item.key();
      auto state_monitor = item.value();
      auto state_monitor_update = state_monitor["update"].get<std::vector<std::string>>();
      for (uint32_t i = 0; i < state_monitor["size"]; i++) {
      fmt::format_to(
        std::back_inserter(update_monitor),
        "if ({pipe_monitor}[{idx}]) {state_monitor}[{idx}] = {update};\n",
        fmt::arg("pipe_monitor", pipe_monitor_map["name"].get<std::string>()),
        fmt::arg("idx", pipe_monitor_map["size"].get<int>() - 1 - i),
        fmt::arg("state_monitor", name),
        fmt::arg("update", boost::replace_all_copy(boost::replace_all_copy(state_monitor_update[i], ".", "->"), "v_top", "v->v_top"))
      );        
      }
    }
  }

  for (auto& item : instr_map) {
    auto instr_name = item["instruction"].get<std::string>();
    int cycle_init = (item.contains("ready bound")) ? item["ready bound"].get<int>() : -1;
    std::string cycle_cnt = fmt::format("cycle_left = {};", std::to_string(cycle_init));
    fmt::format_to(buff,
      kMntConstructorTemplate,
      fmt::arg("instr", instr_name),
      fmt::arg("cycle_cnt", cycle_cnt),
      fmt::arg("init_monitor", init_monitor)
    );

    fmt::format_to(buff,
      kMntElapseTemplate,
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("instr", instr_name),
      fmt::arg("update_monitor", update_monitor)
    );

    std::string compute_cond = "";
    if (item.contains("finish condition")) {
      fmt::format_to(
        std::back_inserter(compute_cond),
        "bool cond = true;\n"
      );
      if (item["finish condition"].is_string()) {
        auto finish_cond = item["finish condition"].get<std::string>();
        fmt::format_to(
          std::back_inserter(compute_cond),
          "cond = cond && {cond};",
          fmt::arg("cond", boost::replace_all_copy(boost::replace_all_copy(finish_cond, ".", "->"), "v_top", "v->v_top"))
        );
      } else {
        for (const auto& cond : item["finish condition"].items()) {
          std::string val = cond.value().is_number() ? 
            std::to_string(cond.value().get<int>()) : 
            fmt::format("v->v_top->{val}", 
              fmt::arg("val", boost::replace_all_copy(boost::replace_all_copy(cond.value().get<std::string>(), ".", "->"), "v_top", "v->v_top"))
            );
          fmt::format_to(
            std::back_inserter(compute_cond),
            "cond = cond && ({key} == {value});\n",
            fmt::arg("key", boost::replace_all_copy(boost::replace_all_copy(cond.key(), ".", "->"), "v_top", "v->v_top")),
            fmt::arg("value", val)
          );
        }
      }
    }
    fmt::format_to(buff,
      kIsFinishTemplate,
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("instr", instr_name),
      fmt::arg("compute_cond", compute_cond),
      fmt::arg("finish_cond", (item.contains("ready bound")) ? "(cycle_left == 0)" : "cond")
    );
  }

  fmt::format_to(buff,
      "InstrMonitor* {RTL}::gen_monitor(v_in& t_v) {{\n"
      "i->v_input(t_v);\n",
      fmt::arg("RTL", kRTLWrapperType)
  );
  for (auto i = 0; i < m_->input_num(); i++) {
    fmt::format_to(buff,
      "i->i_top->{model}_{input_name} = i->i_top->{model}_{input_name}_in;\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("input_name", m_->input(i)->name().str())
    );
  }
  for (auto i = 0; i < m_->instr_num(); i++) {
    fmt::format_to(buff,
      "if (i->i_top->decode_{model}_{instr}()) {{\n"
      "InstrMonitor* ret = new InstrMonitor{instr}(t_v);\n"
      "return ret;\n"
      "}}\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("instr", m_->instr(i)->name().str())
    );
  }
  fmt::format_to(buff,
      "}}\n\n"
  );

  fmt::format_to(buff, 
      "{RTL}::{RTL}(Ilated* ilated) {{\n"
      "  v_top = new V{rtl_top}(\"v_top\");\n"
      "  i = ilated;\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("rtl_top", ref_map_["VERILOG"].get<std::string>())
  );

  std::string start_cond = "";
  if (ref_map_.contains("start condition")) {
    for (const auto& item : ref_map_["start condition"].items()) {
      if (item.key() == "**OR**") {
        std::string or_cond = "";
        bool first = true;
        for (const auto& item_or : item.value().items()) {
          fmt::format_to(
            std::back_inserter(or_cond),
            "{OR}({key} == {value})",
            fmt::arg("OR", first ? "" : " || "),
            fmt::arg("key", boost::replace_all_copy(boost::replace_all_copy(item_or.key(), ".", "->"), "v_top", "v_top")),
            fmt::arg("value", item_or.value().get<int>())
          );
          first = false;
        }
        start_cond += fmt::format("cond = cond && ({or_cond});\n",
          fmt::arg("or_cond", or_cond)
        );
      } else {
        start_cond += fmt::format(
          "  cond = cond && ({key} == {value});\n",
          fmt::arg("key", boost::replace_all_copy(boost::replace_all_copy(item.key(), ".", "->"), "v_top", "v_top")),
          fmt::arg("value", item.value().get<int>())
        );
      }
    }
  }
  fmt::format_to(buff,
      "bool {RTL}::start_condition(v_in t_v) {{\n"
      "  bool cond = true;\n"
      "{start_condition}"
      "  return cond;\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("start_condition", start_cond)
  );

  std::string input_setup = "";
  if (ref_map_.contains("verilog inputs")) {
    for (const auto& item : ref_map_["verilog inputs"].items()) {
      fmt::format_to(
        std::back_inserter(input_setup),
        "    v_top->{key} = t_v.{key};\n",
        fmt::arg("key", item.key())
      );
    }
  }
  fmt::format_to(buff,
      "void {RTL}::v_input(v_in t_v) {{\n"
      "  if (start_condition(t_v)) {{\n"
      "    InstrMonitor* i_m = gen_monitor(t_v);\n"
      "    i_m_list.push_back(i_m);\n"
      "{input_setup}"
      "  }}\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("input_setup", input_setup)
  );

  fmt::format_to(buff,
      "void {RTL}::i_input(v_in t_v) {{\n"
      "  i->v_input(t_v);\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType)
  );

  fmt::format_to(buff,
      "{RTL}::~{RTL}() {{\n"
      "  delete v_top;\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType)
  );

  static const std::string av_check = 
      "  for (auto i_m : i_m_list)\n"
      "    i_m->pass_cycle(this);\n"
      "  if (i_m_list.size() == 0)\n"
      "    return;\n"
      "  if (i_m_list.front()->is_finish(this)) {\n"
      "    v_in t_v = i_m_list.front()->t_v_;\n"
      "    curr_monitor = i_m_list.front();\n"
      "    i_m_list.pop_front();\n"
      "    i->v_input(t_v);\n"
      "    i->next_instr(this);\n"
      "  }\n";

  fmt::format_to(buff,
    "void {RTL}::next_cycle_av_check() {{\n"
    "  v_top->{clk} = {clk_0};\n"
    "  v_top->eval();\n"
    "  v_top->{clk} = {clk_1};\n"
    "  v_top->eval();\n"
    "  {av_check}"
    "}}\n\n",
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("av_check", av_check),
    fmt::arg("clk", ref_map_["verilog clock"].get<std::string>()),
    fmt::arg("clk_0", (ref_map_["verilog clock edge"].get<bool>())? 0 : 1),
    fmt::arg("clk_1", (ref_map_["verilog clock edge"].get<bool>())? 1 : 0)
  );

  fmt::format_to(buff,
    "void {RTL}::next_cycle() {{\n"
    "  v_top->{clk} = {clk_0};\n"
    "  v_top->eval();\n"
    "  v_top->{clk} = {clk_1};\n"
    "  v_top->eval();\n"
    "}}\n\n",
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("clk", ref_map_["verilog clock"].get<std::string>()),
    fmt::arg("clk_0", (ref_map_["verilog clock edge"].get<bool>())? 0 : 1),
    fmt::arg("clk_1", (ref_map_["verilog clock edge"].get<bool>())? 1 : 0)
  );

  fmt::format_to(buff,
    "void {RTL}::next_instr() {{\n"
    "  i->next_instr();\n"
    "}}\n\n",
    fmt::arg("RTL", kRTLWrapperType)
  );

  if (av_convert_en) {
    fmt::format_to(
      buff,
      "void {RTL}::av_converter() {{\n"
      "  i->convert_to_rtav(this);\n"
      "}}\n",
      fmt::arg("RTL", kRTLWrapperType)
    );
  }

  fmt::format_to(buff,
    "{RTL}::{RTL}() {{\n"
    "  v_top = new V{rtl_top}(\"v_top\");\n"
    "}}\n\n",
    fmt::arg("RTL", kRTLWrapperType),
    fmt::arg("rtl_top", ref_map_["VERILOG"].get<std::string>())
  );

  fmt::format_to(buff,
    "void {RTL}::register_ilated(Ilated* ilated) {{\n"
    "  i = ilated;\n"
    "}}\n\n",
    fmt::arg("RTL", kRTLWrapperType)
  );

  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(dst, m_name + "_rtl_monitor.cc"), buff);
}

void TandemGenerator::GenerateRTLWrapper(const std::string& dst, bool av_convert_en) {
  GenerateRTLWrapperHeader(os_portable_append_dir(dst, kDirInclude), av_convert_en);
  GenerateRTLWrapperSource(os_portable_append_dir(dst, kDirSrc), av_convert_en);
}

void TandemGenerator::GenerateIlaWrapper(const std::string& dst, bool av_convert_en) {
  GenerateIlaWrapperHeader(os_portable_append_dir(dst, kDirInclude), av_convert_en);
  GenerateIlaWrapperSource(os_portable_append_dir(dst, kDirSrc), av_convert_en);
}

void TandemGenerator::GenerateIlaWrapperHeader(const std::string& dst, bool av_convert_en) {
  StrBuff buff;
  fmt::format_to(buff, 
      "#include <{model}.h>\n\n",
      fmt::arg("model", m_->name().str())
  );

  std::string input_memvar = "";
  for (auto i = 0; i < m_->input_num(); i++) {
    auto input = m_->input(i);
    if (input->is_bool()) {
      fmt::format_to(
        std::back_inserter(input_memvar),
        "bool {model}_{input};\n",
        fmt::arg("model", m_->name().str()),
        fmt::arg("input", input->name().str())
      );
    } else {
      fmt::format_to(
        std::back_inserter(input_memvar),
        "uint{bv_w}_t {model}_{input};\n",
        fmt::arg("bv_w", input->sort()->bit_width()),
        fmt::arg("model", m_->name().str()),
        fmt::arg("input", input->name().str())
      );
    }
  }
  fmt::format_to(buff,
      "class i_in {{\n"
      "public:\n"
      "{input_memvar}"
      "}};\n",
      fmt::arg("input_memvar", input_memvar)
  );
  std::string convert_to_rtav = "";
  fmt::format_to(
    std::back_inserter(convert_to_rtav),
    "void convert_to_rtav({RTL}* v);",
    fmt::arg("RTL", kRTLWrapperType)
  );

  fmt::format_to(buff,
      "class v_in;\n"
      "i_in input_v_to_i(v_in& test_v);\n"
      "class {RTL};\n"
      "class Ilated {{\n"
      "public:\n"
      "Ilated();\n"
      "void i_input(i_in t_i);\n"
      "void v_input(v_in t_v);\n"
      "~Ilated();\n"
      "void next_instr({RTL} *v);\n"
      "void next_instr();\n"
      "{convert_to_rtav}\n"
      "{model}* i_top;\n"
      "}};\n",
      fmt::arg("RTL", kRTLWrapperType),
      fmt::arg("convert_to_rtav", av_convert_en ? convert_to_rtav : ""),
      fmt::arg("model", m_->name().str())
  );

  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(dst, m_name + "_ila_top.h"), buff);
}

void TandemGenerator::GenerateIlaWrapperSource(const std::string& dst, bool av_convert_en) {
  StrBuff buff;

  fmt::format_to(buff,
      "#include <{model}_ila_top.h>\n\n",
      fmt::arg("model", m_->name().str())
  );

  // create_input_v_to_i
  std::string v_to_i = "";
  for (const auto& item : ref_map_["interface mapping"].items()) {
    if (item.value().is_string()) {
      if (item.value().get<std::string>().find("**") == std::string::npos) {
        fmt::format_to(
          std::back_inserter(v_to_i),
          "test_i.{model}_{val} = test_v.{key};\n",
          fmt::arg("model", m_->name().str()),
          fmt::arg("val", item.value().get<std::string>()),
          fmt::arg("key", item.key())
        );
      }
    } else if (item.value().is_array()) {
      auto arr = item.value().get<std::vector<nlohmann::json>>();
      if (arr[0].get<std::string>().find("**") == std::string::npos) {
        for (int i = 0; i < (arr.size() - 1); i += 2) {
          fmt::format_to(
            std::back_inserter(v_to_i),
            "if (test_v.{key} == {arr_i_plus_1})\n"
            "  test_i.{model}_{arr_0} = {arr_i_plus_2};\n",
            fmt::arg("model", m_->name().str()),
            fmt::arg("key", item.key()),
            fmt::arg("arr_0", arr[0].get<std::string>()),
            fmt::arg("arr_i_plus_1", arr[i+1].get<std::string>()),
            fmt::arg("arr_i_plus_2", arr[i+2].get<std::string>())
          );
        }
      }
    }
  }
  fmt::format_to(buff,
      "i_in input_v_to_i(v_in& test_v) {{\n"
      "  i_in test_i;\n"
      "{v_to_i}"
      "  return test_i;\n"
      "}}\n\n",
      fmt::arg("v_to_i", v_to_i)
  );

  fmt::format_to(buff,
      "Ilated::Ilated() {{\n"
      "  i_top = new {model}();\n"
      "}}\n\n"
      "Ilated::~Ilated() {{\n"
      "  delete i_top;\n"
      "}}\n\n",
      fmt::arg("model", m_->name().str())
  );

  //create i_input
  std::string assign_i_top = "";
  for (int i = 0; i < m_->input_num(); i++) {
    fmt::format_to(
      std::back_inserter(assign_i_top),
      "  i_top->{model}_{input}_in = t_i.{model}_{input};\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("input", m_->input(i)->name().str())
    );
  }  
  fmt::format_to(buff,
      "void Ilated::i_input(i_in t_i) {{\n"
      "{assign_i_top}"
      "}}\n\n"
      "void Ilated::v_input(v_in t_v) {{\n"
      "  i_in t_i = input_v_to_i(t_v);\n"
      "  i_input(t_i);\n"
      "}}\n\n",
      fmt::arg("assign_i_top", assign_i_top)
  );

  // next_instr
  fmt::format_to(buff,
      "void Ilated::next_instr({RTL} *v) {{\n"
      "  i_top->compute(v);\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType)
  );

  fmt::format_to(buff,
    "void Ilated::next_instr() {{\n"
    "  i_top->compute();\n"
    "}}\n\n"
  );

  if (av_convert_en) {
    fmt::format_to(buff,
      "void Ilated::convert_to_rtav({RTL}* v) {{\n"
      "  i_top->av_converter(v);\n"
      "}}\n\n",
      fmt::arg("RTL", kRTLWrapperType)
    );
  }

  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(dst, m_name + "_ila_top.cc"), buff);
}

void TandemGenerator::GenerateIlatedConstructor(const std::string& dst) {
  StrBuff buff;

  std::string regist_checker = "";
  for (auto i = 0; i < m_->instr_num(); i++) {
    fmt::format_to(
      std::back_inserter(regist_checker),
      "  tandem_func[{idx}] = &{model}::tandem_instr_{instr};\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("instr", m_->instr(i)->name().str()),
      fmt::arg("idx", i)
    );
  }
  fmt::format_to(buff,
      "#include <{model}.h>\n"
      "{model}::{model}() {{\n"
      "{regist_checker}\n"
      "{init_pc}"
      "}}\n\n",
      fmt::arg("model", m_->name().str()),
      fmt::arg("init_pc", aux_pc_ ? m_->name().str() + "_pc = 0;\n" : ""),
      fmt::arg("regist_checker", regist_checker)
  );
  auto m_name = m_->name().str();
  WriteFile(os_portable_append_dir(dst, m_name + ".cc"), buff);
}

void TandemGenerator::GenerateBuildSupport(const std::string& dst) {
  StrBuff buff;
  auto m_name = m_->name().str();
  fmt::format_to(
      buff,
      "# CMakeLists.txt for tandem_{model}\n"
      "cmake_minimum_required(VERSION 3.8)\n"
      "project(tandem_{model} LANGUAGES CXX)\n"
      "set(CMAKE_CXX_FLAGS {cxx_flags})\n"
      "set(CMAKE_BUILD_TYPE Debug)\n"
      "option(ILATOR_VERBOSE \"Enable instruction sequence logging\" OFF)\n"
      "option(JSON_SUPPORT \"Build JSON parser support\" OFF)\n"
      "find_package(verilator)\n\n"
      "AUX_SOURCE_DIRECTORY(${{PROJECT_SOURCE_DIR}}/src/ TANDEM_SRC)\n"
      // "AUX_SOURCE_DIRECTORY(${{PROJECT_SOURCE_DIR}}/src/ilated/ TANDEM_SRC)\n"
      // "AUX_SOURCE_DIRECTORY(${{PROJECT_SOURCE_DIR}}/src/tandem/ TANDEM_SRC)\n"
      "add_library({library_name} ${{TANDEM_SRC}})\n\n"
      "target_include_directories({library_name} PUBLIC ${{PROJECT_SOURCE_DIR}}/include)\n\n"
      "verilate({library_name}\n"
      "  INCLUDE_DIRS {rtl_include_dir}\n"
      "  SOURCES {rtl_top_path}\n"
      "  VERILATOR_ARGS --timescale \"1ns/10ps\"\n -Wno-lint -Wno-style"
      ")\n\n"
      "add_executable({tandem_name} app/main.cc)\n"
      "target_link_libraries({tandem_name} PUBLIC {library_name})\n"
      "target_include_directories({tandem_name} PUBLIC "
      "${{PROJECT_SOURCE_DIR}}/include)\n",
      fmt::arg("model", m_name),
      fmt::arg("cxx_flags", "-O3"),
      fmt::arg("library_name", m_name + "_src"),
      fmt::arg("tandem_name", "tandem-"+m_name+"-exe"),
      fmt::arg("rtl_include_dir", rtl_include_dir_),
      fmt::arg("rtl_top_path", rtl_top_path_)
  );
  WriteFile(os_portable_append_dir(dst, "CMakeLists.txt"), buff);

  buff.clear();
  auto main_path = os_portable_append_dir(os_portable_append_dir(dst, kDirApp), "main.cc");
  if (!os_portable_exist(main_path)) {
    fmt::format_to(
        buff,
        "#include <{model}.h>\n\n"
        "int main(int argc, char* argv[]) {{\n"
        "  return 0; \n"
        "}}\n",
        fmt::arg("model", m_->name().str())
    );
  }
  WriteFile(main_path, buff);
}

std::string TandemGenerator::GetIlatorAugmentedHeader() {
  return ilated_header_;
}

std::string TandemGenerator::GetIlatorKernelFunc() {
  return std::string("void compute(" + kRTLWrapperType + "* v);");
}

void TandemGenerator::SetRefMap(std::string ref_map_path) {
  std::ifstream fin(ref_map_path);
  if (!fin.is_open()) {
    ILA_ERROR << "Cannot read from file:" << ref_map_path << "\n";
    exit(1);
  }
  ref_map_.clear();
  fin >> ref_map_;
  return;
}

std::string TandemGenerator::GetIlatedInclude() {
  std::string ilated_include;
  fmt::format_to(
    std::back_inserter(ilated_include), 
    "#include <{model}_rtl_monitor.h>\n",
    fmt::arg("model", m_->name().str())
  );  
  return ilated_include;
}

std::string TandemGenerator::GetIlatorException() {
  std::string e = 
      "class " + m_->name().str() + "Exception : public std::exception\n"
      "{{\n"
      "  std::string _msg;\n"
      "public:\n"
      "  " + m_->name().str() + "Exception(const std::string& msg) : _msg(msg){{}}\n"
      "  virtual const char* what() const noexcept override\n"
      "  {{\n"
      "    return _msg.c_str();\n"
      "  }}\n"
      "}};\n\n";
  return e;
}

std::string TandemGenerator::GetIlatorDefine() {
  std::string def = "";
  for (uint i = 0; i < m_->instr_num(); i++) {
    def += ("#define " + m_->instr(i)->name().str() + " "
    + std::to_string(i) + "\n");
  }
  return def;
}

}

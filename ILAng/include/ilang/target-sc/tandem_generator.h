/// \file
/// The header file to generate tandem simulation.

#ifndef ILANG_TARGET_SC_TANDEM_GENERATOR_H__
#define ILANG_TARGET_SC_TANDEM_GENERATOR_H__

#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <ilang/ila/ast_hub.h>
#include <ilang/util/log.h>
#include <ilang/ila/instr_lvl_abs.h>

namespace ilang {

class Ilator;

class TandemGenerator {
public:
  TandemGenerator(const InstrLvlAbsPtr& m) : m_(m) {}
  ~TandemGenerator() {}
  void SetRTLInfo(std::string rtl_include_dir, std::string rtl_top_path) {
    rtl_include_dir_ = rtl_include_dir;
    rtl_top_path_ = rtl_top_path;
  }

  void SetRefMap(std::string ref_map);

  void GenerateS2(const std::string& dst, bool opt, bool aux_pc = true);
  void GenerateS4(const std::string& dst, bool opt, bool aux_pc = true);

  std::string GetIlatedInclude();
  // std::string GetIlatedHeader() {return ilated_header_;}
  std::string GetIlatorAugmentedHeader();
  std::string GetIlatorKernelFunc();
  std::string GetIlatorException();
  std::string GetIlatorDefine();

  friend class Ilator;  
private:
  typedef fmt::memory_buffer StrBuff;
  void GenerateCheckerHeader();
  void GenerateConverterHeader();
  void GenerateRTLWrapper(const std::string& dst, bool av_convert_en=false);
  void GenerateRTLWrapperHeader(const std::string& dst, bool av_convert_en);
  void GenerateRTLWrapperSource(const std::string& dst, bool av_convert_en);
  void GenerateIlaWrapper(const std::string& dst, bool av_convert_en=false);
  void GenerateIlaWrapperHeader(const std::string& dst, bool av_convert_en);
  void GenerateIlaWrapperSource(const std::string& dst, bool av_convert_en);  
  void GenerateIlatedConstructor(const std::string& dst);
  void GenerateBuildSupport(const std::string& dst);
  
  std::string GetSceneTwoRTLWrapperHeader();
  std::string GetInstrMonitorDecl();
  void GetStateCheck(StrBuff& buff);
  void GetInstrCheck(StrBuff& buff);
  void GetStateConvert(StrBuff& buff);
  void GetResetRTL(StrBuff& buff);
  void GetHoldRTAV(StrBuff& buff);
  void GetAVConverter(StrBuff& buff);


  void GenerateChecker(const std::string& dst, bool opt);
  void GenerateConverter(const std::string& dst, bool opt);  
  void set_rtl(std::string rtl_include_dir, std::string rtl_top_path) {
    rtl_include_dir_ = rtl_include_dir;
    rtl_top_path_ = rtl_top_path;    
  }
  std::string ilated_header_;
  std::string rtl_include_dir_;
  std::string rtl_top_path_;
  bool aux_pc_;
  InstrLvlAbsPtr m_;
  Ilator* i_;  
  nlohmann::json ref_map_;

};


}

#endif // ILANG_TARGET_SC_TANDEM_GENERATOR_H__
#include <riscv.h>
bool riscv::decode_riscv_AUIPC() {
auto local_var_1_shifted = riscv_inst >> 0;
auto local_var_1_mask = riscv_inst;
local_var_1_mask = (1 << (6 - 0 + 1)) - 1;
local_var_1_mask &= local_var_1_shifted;
uint7_t local_var_1 = boost::numeric_cast<uint7_t>(local_var_1_mask);
uint7_t local_var_2 = 23;
bool local_var_3 = (local_var_1 == local_var_2);
auto& univ_var_54 = local_var_3;
return univ_var_54;
}
void riscv::update_riscv_AUIPC() {
uint32_t local_var_1 = 4;
uint32_t local_var_2 = (riscv_pc + local_var_1);
auto local_var_2_nxt_holder = local_var_2;
uint32_t local_var_3 = 0;
auto local_var_3_nxt_holder = local_var_3;
auto local_var_5_shifted = riscv_inst >> 7;
auto local_var_5_mask = riscv_inst;
local_var_5_mask = (1 << (11 - 7 + 1)) - 1;
local_var_5_mask &= local_var_5_shifted;
uint5_t local_var_5 = boost::numeric_cast<uint5_t>(local_var_5_mask);
uint5_t local_var_6 = 1;
bool local_var_7 = (local_var_5 == local_var_6);
auto local_var_8_shifted = riscv_inst >> 12;
auto local_var_8_mask = riscv_inst;
local_var_8_mask = (1 << (31 - 12 + 1)) - 1;
local_var_8_mask &= local_var_8_shifted;
uint20_t local_var_8 = boost::numeric_cast<uint20_t>(local_var_8_mask);
uint12_t local_var_9 = 0;
univ_var_53 = (boost::numeric_cast<uint32_t>(local_var_8) << 12) + boost::numeric_cast<uint32_t>(local_var_9);
uint32_t local_var_11 = (riscv_pc + univ_var_53);
auto local_var_13 = (local_var_7) ? local_var_11 : riscv_x1;
auto local_var_13_nxt_holder = local_var_13;
uint5_t local_var_14 = 10;
bool local_var_15 = (local_var_5 == local_var_14);
auto local_var_17 = (local_var_15) ? local_var_11 : riscv_x10;
auto local_var_17_nxt_holder = local_var_17;
uint5_t local_var_18 = 11;
bool local_var_19 = (local_var_5 == local_var_18);
auto local_var_21 = (local_var_19) ? local_var_11 : riscv_x11;
auto local_var_21_nxt_holder = local_var_21;
uint5_t local_var_22 = 12;
bool local_var_23 = (local_var_5 == local_var_22);
auto local_var_25 = (local_var_23) ? local_var_11 : riscv_x12;
auto local_var_25_nxt_holder = local_var_25;
uint5_t local_var_26 = 13;
bool local_var_27 = (local_var_5 == local_var_26);
auto local_var_29 = (local_var_27) ? local_var_11 : riscv_x13;
auto local_var_29_nxt_holder = local_var_29;
uint5_t local_var_30 = 14;
bool local_var_31 = (local_var_5 == local_var_30);
auto local_var_33 = (local_var_31) ? local_var_11 : riscv_x14;
auto local_var_33_nxt_holder = local_var_33;
uint5_t local_var_34 = 15;
bool local_var_35 = (local_var_5 == local_var_34);
auto local_var_37 = (local_var_35) ? local_var_11 : riscv_x15;
auto local_var_37_nxt_holder = local_var_37;
uint5_t local_var_38 = 16;
bool local_var_39 = (local_var_5 == local_var_38);
auto local_var_41 = (local_var_39) ? local_var_11 : riscv_x16;
auto local_var_41_nxt_holder = local_var_41;
uint5_t local_var_42 = 17;
bool local_var_43 = (local_var_5 == local_var_42);
auto local_var_45 = (local_var_43) ? local_var_11 : riscv_x17;
auto local_var_45_nxt_holder = local_var_45;
uint5_t local_var_46 = 18;
bool local_var_47 = (local_var_5 == local_var_46);
auto local_var_49 = (local_var_47) ? local_var_11 : riscv_x18;
auto local_var_49_nxt_holder = local_var_49;
uint5_t local_var_50 = 19;
bool local_var_51 = (local_var_5 == local_var_50);
auto local_var_53 = (local_var_51) ? local_var_11 : riscv_x19;
auto local_var_53_nxt_holder = local_var_53;
uint5_t local_var_54 = 2;
bool local_var_55 = (local_var_5 == local_var_54);
auto local_var_57 = (local_var_55) ? local_var_11 : riscv_x2;
auto local_var_57_nxt_holder = local_var_57;
uint5_t local_var_58 = 20;
bool local_var_59 = (local_var_5 == local_var_58);
auto local_var_61 = (local_var_59) ? local_var_11 : riscv_x20;
auto local_var_61_nxt_holder = local_var_61;
uint5_t local_var_62 = 21;
bool local_var_63 = (local_var_5 == local_var_62);
auto local_var_65 = (local_var_63) ? local_var_11 : riscv_x21;
auto local_var_65_nxt_holder = local_var_65;
uint5_t local_var_66 = 22;
bool local_var_67 = (local_var_5 == local_var_66);
auto local_var_69 = (local_var_67) ? local_var_11 : riscv_x22;
auto local_var_69_nxt_holder = local_var_69;
uint5_t local_var_70 = 23;
bool local_var_71 = (local_var_5 == local_var_70);
auto local_var_73 = (local_var_71) ? local_var_11 : riscv_x23;
auto local_var_73_nxt_holder = local_var_73;
uint5_t local_var_74 = 24;
bool local_var_75 = (local_var_5 == local_var_74);
auto local_var_77 = (local_var_75) ? local_var_11 : riscv_x24;
auto local_var_77_nxt_holder = local_var_77;
uint5_t local_var_78 = 25;
bool local_var_79 = (local_var_5 == local_var_78);
auto local_var_81 = (local_var_79) ? local_var_11 : riscv_x25;
auto local_var_81_nxt_holder = local_var_81;
uint5_t local_var_82 = 26;
bool local_var_83 = (local_var_5 == local_var_82);
auto local_var_85 = (local_var_83) ? local_var_11 : riscv_x26;
auto local_var_85_nxt_holder = local_var_85;
uint5_t local_var_86 = 27;
bool local_var_87 = (local_var_5 == local_var_86);
auto local_var_89 = (local_var_87) ? local_var_11 : riscv_x27;
auto local_var_89_nxt_holder = local_var_89;
uint5_t local_var_90 = 28;
bool local_var_91 = (local_var_5 == local_var_90);
auto local_var_93 = (local_var_91) ? local_var_11 : riscv_x28;
auto local_var_93_nxt_holder = local_var_93;
uint5_t local_var_94 = 29;
bool local_var_95 = (local_var_5 == local_var_94);
auto local_var_97 = (local_var_95) ? local_var_11 : riscv_x29;
auto local_var_97_nxt_holder = local_var_97;
uint5_t local_var_98 = 3;
bool local_var_99 = (local_var_5 == local_var_98);
auto local_var_101 = (local_var_99) ? local_var_11 : riscv_x3;
auto local_var_101_nxt_holder = local_var_101;
uint5_t local_var_102 = 30;
bool local_var_103 = (local_var_5 == local_var_102);
auto local_var_105 = (local_var_103) ? local_var_11 : riscv_x30;
auto local_var_105_nxt_holder = local_var_105;
uint5_t local_var_106 = 31;
bool local_var_107 = (local_var_5 == local_var_106);
auto local_var_109 = (local_var_107) ? local_var_11 : riscv_x31;
auto local_var_109_nxt_holder = local_var_109;
uint5_t local_var_110 = 4;
bool local_var_111 = (local_var_5 == local_var_110);
auto local_var_113 = (local_var_111) ? local_var_11 : riscv_x4;
auto local_var_113_nxt_holder = local_var_113;
uint5_t local_var_114 = 5;
bool local_var_115 = (local_var_5 == local_var_114);
auto local_var_117 = (local_var_115) ? local_var_11 : riscv_x5;
auto local_var_117_nxt_holder = local_var_117;
uint5_t local_var_118 = 6;
bool local_var_119 = (local_var_5 == local_var_118);
auto local_var_121 = (local_var_119) ? local_var_11 : riscv_x6;
auto local_var_121_nxt_holder = local_var_121;
uint5_t local_var_122 = 7;
bool local_var_123 = (local_var_5 == local_var_122);
auto local_var_125 = (local_var_123) ? local_var_11 : riscv_x7;
auto local_var_125_nxt_holder = local_var_125;
uint5_t local_var_126 = 8;
bool local_var_127 = (local_var_5 == local_var_126);
auto local_var_129 = (local_var_127) ? local_var_11 : riscv_x8;
auto local_var_129_nxt_holder = local_var_129;
uint5_t local_var_130 = 9;
bool local_var_131 = (local_var_5 == local_var_130);
auto local_var_133 = (local_var_131) ? local_var_11 : riscv_x9;
auto local_var_133_nxt_holder = local_var_133;
riscv_pc = local_var_2_nxt_holder;
riscv_x0 = local_var_3_nxt_holder;
riscv_x1 = local_var_13_nxt_holder;
riscv_x10 = local_var_17_nxt_holder;
riscv_x11 = local_var_21_nxt_holder;
riscv_x12 = local_var_25_nxt_holder;
riscv_x13 = local_var_29_nxt_holder;
riscv_x14 = local_var_33_nxt_holder;
riscv_x15 = local_var_37_nxt_holder;
riscv_x16 = local_var_41_nxt_holder;
riscv_x17 = local_var_45_nxt_holder;
riscv_x18 = local_var_49_nxt_holder;
riscv_x19 = local_var_53_nxt_holder;
riscv_x2 = local_var_57_nxt_holder;
riscv_x20 = local_var_61_nxt_holder;
riscv_x21 = local_var_65_nxt_holder;
riscv_x22 = local_var_69_nxt_holder;
riscv_x23 = local_var_73_nxt_holder;
riscv_x24 = local_var_77_nxt_holder;
riscv_x25 = local_var_81_nxt_holder;
riscv_x26 = local_var_85_nxt_holder;
riscv_x27 = local_var_89_nxt_holder;
riscv_x28 = local_var_93_nxt_holder;
riscv_x29 = local_var_97_nxt_holder;
riscv_x3 = local_var_101_nxt_holder;
riscv_x30 = local_var_105_nxt_holder;
riscv_x31 = local_var_109_nxt_holder;
riscv_x4 = local_var_113_nxt_holder;
riscv_x5 = local_var_117_nxt_holder;
riscv_x6 = local_var_121_nxt_holder;
riscv_x7 = local_var_125_nxt_holder;
riscv_x8 = local_var_129_nxt_holder;
riscv_x9 = local_var_133_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "AUIPC state updates:" << std::endl;
instr_update_log << "    riscv_pc => " << std::hex << "0x" << riscv_pc << std::endl; 
instr_update_log << "    riscv_x0 => " << std::hex << "0x" << riscv_x0 << std::endl; 
instr_update_log << "    riscv_x1 => " << std::hex << "0x" << riscv_x1 << std::endl; 
instr_update_log << "    riscv_x10 => " << std::hex << "0x" << riscv_x10 << std::endl; 
instr_update_log << "    riscv_x11 => " << std::hex << "0x" << riscv_x11 << std::endl; 
instr_update_log << "    riscv_x12 => " << std::hex << "0x" << riscv_x12 << std::endl; 
instr_update_log << "    riscv_x13 => " << std::hex << "0x" << riscv_x13 << std::endl; 
instr_update_log << "    riscv_x14 => " << std::hex << "0x" << riscv_x14 << std::endl; 
instr_update_log << "    riscv_x15 => " << std::hex << "0x" << riscv_x15 << std::endl; 
instr_update_log << "    riscv_x16 => " << std::hex << "0x" << riscv_x16 << std::endl; 
instr_update_log << "    riscv_x17 => " << std::hex << "0x" << riscv_x17 << std::endl; 
instr_update_log << "    riscv_x18 => " << std::hex << "0x" << riscv_x18 << std::endl; 
instr_update_log << "    riscv_x19 => " << std::hex << "0x" << riscv_x19 << std::endl; 
instr_update_log << "    riscv_x2 => " << std::hex << "0x" << riscv_x2 << std::endl; 
instr_update_log << "    riscv_x20 => " << std::hex << "0x" << riscv_x20 << std::endl; 
instr_update_log << "    riscv_x21 => " << std::hex << "0x" << riscv_x21 << std::endl; 
instr_update_log << "    riscv_x22 => " << std::hex << "0x" << riscv_x22 << std::endl; 
instr_update_log << "    riscv_x23 => " << std::hex << "0x" << riscv_x23 << std::endl; 
instr_update_log << "    riscv_x24 => " << std::hex << "0x" << riscv_x24 << std::endl; 
instr_update_log << "    riscv_x25 => " << std::hex << "0x" << riscv_x25 << std::endl; 
instr_update_log << "    riscv_x26 => " << std::hex << "0x" << riscv_x26 << std::endl; 
instr_update_log << "    riscv_x27 => " << std::hex << "0x" << riscv_x27 << std::endl; 
instr_update_log << "    riscv_x28 => " << std::hex << "0x" << riscv_x28 << std::endl; 
instr_update_log << "    riscv_x29 => " << std::hex << "0x" << riscv_x29 << std::endl; 
instr_update_log << "    riscv_x3 => " << std::hex << "0x" << riscv_x3 << std::endl; 
instr_update_log << "    riscv_x30 => " << std::hex << "0x" << riscv_x30 << std::endl; 
instr_update_log << "    riscv_x31 => " << std::hex << "0x" << riscv_x31 << std::endl; 
instr_update_log << "    riscv_x4 => " << std::hex << "0x" << riscv_x4 << std::endl; 
instr_update_log << "    riscv_x5 => " << std::hex << "0x" << riscv_x5 << std::endl; 
instr_update_log << "    riscv_x6 => " << std::hex << "0x" << riscv_x6 << std::endl; 
instr_update_log << "    riscv_x7 => " << std::hex << "0x" << riscv_x7 << std::endl; 
instr_update_log << "    riscv_x8 => " << std::hex << "0x" << riscv_x8 << std::endl; 
instr_update_log << "    riscv_x9 => " << std::hex << "0x" << riscv_x9 << std::endl; 
instr_update_log << std::endl;
#endif
}

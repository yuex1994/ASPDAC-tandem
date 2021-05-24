#include <riscv.h>
bool riscv::decode_riscv_SLTIU() {
auto local_var_1_shifted = riscv_inst >> 0;
auto local_var_1_mask = riscv_inst;
local_var_1_mask = (1 << (6 - 0 + 1)) - 1;
local_var_1_mask &= local_var_1_shifted;
uint7_t local_var_1 = boost::numeric_cast<uint7_t>(local_var_1_mask);
uint7_t local_var_2 = 19;
bool local_var_3 = (local_var_1 == local_var_2);
auto local_var_4_shifted = riscv_inst >> 12;
auto local_var_4_mask = riscv_inst;
local_var_4_mask = (1 << (14 - 12 + 1)) - 1;
local_var_4_mask &= local_var_4_shifted;
uint3_t local_var_4 = boost::numeric_cast<uint3_t>(local_var_4_mask);
uint3_t local_var_5 = 3;
bool local_var_6 = (local_var_4 == local_var_5);
bool local_var_7 = (local_var_3 & local_var_6);
auto& univ_var_45 = local_var_7;
return univ_var_45;
}
void riscv::update_riscv_SLTIU() {
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
auto local_var_8_shifted = riscv_inst >> 15;
auto local_var_8_mask = riscv_inst;
local_var_8_mask = (1 << (19 - 15 + 1)) - 1;
local_var_8_mask &= local_var_8_shifted;
uint5_t local_var_8 = boost::numeric_cast<uint5_t>(local_var_8_mask);
uint5_t local_var_9 = 31;
bool local_var_10 = (local_var_8 == local_var_9);
uint5_t local_var_12 = 30;
bool local_var_13 = (local_var_8 == local_var_12);
uint5_t local_var_15 = 29;
bool local_var_16 = (local_var_8 == local_var_15);
uint5_t local_var_18 = 28;
bool local_var_19 = (local_var_8 == local_var_18);
uint5_t local_var_21 = 27;
bool local_var_22 = (local_var_8 == local_var_21);
uint5_t local_var_24 = 26;
bool local_var_25 = (local_var_8 == local_var_24);
uint5_t local_var_27 = 25;
bool local_var_28 = (local_var_8 == local_var_27);
uint5_t local_var_30 = 24;
bool local_var_31 = (local_var_8 == local_var_30);
uint5_t local_var_33 = 23;
bool local_var_34 = (local_var_8 == local_var_33);
uint5_t local_var_36 = 22;
bool local_var_37 = (local_var_8 == local_var_36);
uint5_t local_var_39 = 21;
bool local_var_40 = (local_var_8 == local_var_39);
uint5_t local_var_42 = 20;
bool local_var_43 = (local_var_8 == local_var_42);
uint5_t local_var_45 = 19;
bool local_var_46 = (local_var_8 == local_var_45);
uint5_t local_var_48 = 18;
bool local_var_49 = (local_var_8 == local_var_48);
uint5_t local_var_51 = 17;
bool local_var_52 = (local_var_8 == local_var_51);
uint5_t local_var_54 = 16;
bool local_var_55 = (local_var_8 == local_var_54);
uint5_t local_var_57 = 15;
bool local_var_58 = (local_var_8 == local_var_57);
uint5_t local_var_60 = 14;
bool local_var_61 = (local_var_8 == local_var_60);
uint5_t local_var_63 = 13;
bool local_var_64 = (local_var_8 == local_var_63);
uint5_t local_var_66 = 12;
bool local_var_67 = (local_var_8 == local_var_66);
uint5_t local_var_69 = 11;
bool local_var_70 = (local_var_8 == local_var_69);
uint5_t local_var_72 = 10;
bool local_var_73 = (local_var_8 == local_var_72);
uint5_t local_var_75 = 9;
bool local_var_76 = (local_var_8 == local_var_75);
uint5_t local_var_78 = 8;
bool local_var_79 = (local_var_8 == local_var_78);
uint5_t local_var_81 = 7;
bool local_var_82 = (local_var_8 == local_var_81);
uint5_t local_var_84 = 6;
bool local_var_85 = (local_var_8 == local_var_84);
uint5_t local_var_87 = 5;
bool local_var_88 = (local_var_8 == local_var_87);
uint5_t local_var_90 = 4;
bool local_var_91 = (local_var_8 == local_var_90);
uint5_t local_var_93 = 3;
bool local_var_94 = (local_var_8 == local_var_93);
uint5_t local_var_96 = 2;
bool local_var_97 = (local_var_8 == local_var_96);
uint5_t local_var_99 = 1;
bool local_var_100 = (local_var_8 == local_var_99);
uint32_t local_var_102 = 0;
auto local_var_103 = (local_var_100) ? riscv_x1 : local_var_102;
auto local_var_104 = (local_var_97) ? riscv_x2 : local_var_103;
auto local_var_105 = (local_var_94) ? riscv_x3 : local_var_104;
auto local_var_106 = (local_var_91) ? riscv_x4 : local_var_105;
auto local_var_107 = (local_var_88) ? riscv_x5 : local_var_106;
auto local_var_108 = (local_var_85) ? riscv_x6 : local_var_107;
auto local_var_109 = (local_var_82) ? riscv_x7 : local_var_108;
auto local_var_110 = (local_var_79) ? riscv_x8 : local_var_109;
auto local_var_111 = (local_var_76) ? riscv_x9 : local_var_110;
auto local_var_112 = (local_var_73) ? riscv_x10 : local_var_111;
auto local_var_113 = (local_var_70) ? riscv_x11 : local_var_112;
auto local_var_114 = (local_var_67) ? riscv_x12 : local_var_113;
auto local_var_115 = (local_var_64) ? riscv_x13 : local_var_114;
auto local_var_116 = (local_var_61) ? riscv_x14 : local_var_115;
auto local_var_117 = (local_var_58) ? riscv_x15 : local_var_116;
auto local_var_118 = (local_var_55) ? riscv_x16 : local_var_117;
auto local_var_119 = (local_var_52) ? riscv_x17 : local_var_118;
auto local_var_120 = (local_var_49) ? riscv_x18 : local_var_119;
auto local_var_121 = (local_var_46) ? riscv_x19 : local_var_120;
auto local_var_122 = (local_var_43) ? riscv_x20 : local_var_121;
auto local_var_123 = (local_var_40) ? riscv_x21 : local_var_122;
auto local_var_124 = (local_var_37) ? riscv_x22 : local_var_123;
auto local_var_125 = (local_var_34) ? riscv_x23 : local_var_124;
auto local_var_126 = (local_var_31) ? riscv_x24 : local_var_125;
auto local_var_127 = (local_var_28) ? riscv_x25 : local_var_126;
auto local_var_128 = (local_var_25) ? riscv_x26 : local_var_127;
auto local_var_129 = (local_var_22) ? riscv_x27 : local_var_128;
auto local_var_130 = (local_var_19) ? riscv_x28 : local_var_129;
auto local_var_131 = (local_var_16) ? riscv_x29 : local_var_130;
auto local_var_132 = (local_var_13) ? riscv_x30 : local_var_131;
auto local_var_133 = (local_var_10) ? riscv_x31 : local_var_132;
auto local_var_134_shifted = riscv_inst >> 20;
auto local_var_134_mask = riscv_inst;
local_var_134_mask = (1 << (31 - 20 + 1)) - 1;
local_var_134_mask &= local_var_134_shifted;
uint12_t local_var_134 = boost::numeric_cast<uint12_t>(local_var_134_mask);
uint32_t local_var_135 = boost::numeric_cast<uint32_t>(((local_var_134 >> 11) == 1) ? (~local_var_134) : local_var_134);
local_var_135 = ((local_var_134 >> 11) == 1) ? (~local_var_135) : local_var_135;
bool local_var_136 = (local_var_133 < local_var_135);
uint32_t local_var_137 = 1;
uint32_t local_var_138 = 0;
auto local_var_139 = (local_var_136) ? local_var_137 : local_var_138;
auto local_var_140 = (local_var_7) ? local_var_139 : riscv_x1;
auto local_var_140_nxt_holder = local_var_140;
uint5_t local_var_141 = 10;
bool local_var_142 = (local_var_5 == local_var_141);
auto local_var_143 = (local_var_142) ? local_var_139 : riscv_x10;
auto local_var_143_nxt_holder = local_var_143;
uint5_t local_var_144 = 11;
bool local_var_145 = (local_var_5 == local_var_144);
auto local_var_146 = (local_var_145) ? local_var_139 : riscv_x11;
auto local_var_146_nxt_holder = local_var_146;
uint5_t local_var_147 = 12;
bool local_var_148 = (local_var_5 == local_var_147);
auto local_var_149 = (local_var_148) ? local_var_139 : riscv_x12;
auto local_var_149_nxt_holder = local_var_149;
uint5_t local_var_150 = 13;
bool local_var_151 = (local_var_5 == local_var_150);
auto local_var_152 = (local_var_151) ? local_var_139 : riscv_x13;
auto local_var_152_nxt_holder = local_var_152;
uint5_t local_var_153 = 14;
bool local_var_154 = (local_var_5 == local_var_153);
auto local_var_155 = (local_var_154) ? local_var_139 : riscv_x14;
auto local_var_155_nxt_holder = local_var_155;
uint5_t local_var_156 = 15;
bool local_var_157 = (local_var_5 == local_var_156);
auto local_var_158 = (local_var_157) ? local_var_139 : riscv_x15;
auto local_var_158_nxt_holder = local_var_158;
uint5_t local_var_159 = 16;
bool local_var_160 = (local_var_5 == local_var_159);
auto local_var_161 = (local_var_160) ? local_var_139 : riscv_x16;
auto local_var_161_nxt_holder = local_var_161;
uint5_t local_var_162 = 17;
bool local_var_163 = (local_var_5 == local_var_162);
auto local_var_164 = (local_var_163) ? local_var_139 : riscv_x17;
auto local_var_164_nxt_holder = local_var_164;
uint5_t local_var_165 = 18;
bool local_var_166 = (local_var_5 == local_var_165);
auto local_var_167 = (local_var_166) ? local_var_139 : riscv_x18;
auto local_var_167_nxt_holder = local_var_167;
uint5_t local_var_168 = 19;
bool local_var_169 = (local_var_5 == local_var_168);
auto local_var_170 = (local_var_169) ? local_var_139 : riscv_x19;
auto local_var_170_nxt_holder = local_var_170;
uint5_t local_var_171 = 2;
bool local_var_172 = (local_var_5 == local_var_171);
auto local_var_173 = (local_var_172) ? local_var_139 : riscv_x2;
auto local_var_173_nxt_holder = local_var_173;
uint5_t local_var_174 = 20;
bool local_var_175 = (local_var_5 == local_var_174);
auto local_var_176 = (local_var_175) ? local_var_139 : riscv_x20;
auto local_var_176_nxt_holder = local_var_176;
uint5_t local_var_177 = 21;
bool local_var_178 = (local_var_5 == local_var_177);
auto local_var_179 = (local_var_178) ? local_var_139 : riscv_x21;
auto local_var_179_nxt_holder = local_var_179;
uint5_t local_var_180 = 22;
bool local_var_181 = (local_var_5 == local_var_180);
auto local_var_182 = (local_var_181) ? local_var_139 : riscv_x22;
auto local_var_182_nxt_holder = local_var_182;
uint5_t local_var_183 = 23;
bool local_var_184 = (local_var_5 == local_var_183);
auto local_var_185 = (local_var_184) ? local_var_139 : riscv_x23;
auto local_var_185_nxt_holder = local_var_185;
uint5_t local_var_186 = 24;
bool local_var_187 = (local_var_5 == local_var_186);
auto local_var_188 = (local_var_187) ? local_var_139 : riscv_x24;
auto local_var_188_nxt_holder = local_var_188;
uint5_t local_var_189 = 25;
bool local_var_190 = (local_var_5 == local_var_189);
auto local_var_191 = (local_var_190) ? local_var_139 : riscv_x25;
auto local_var_191_nxt_holder = local_var_191;
uint5_t local_var_192 = 26;
bool local_var_193 = (local_var_5 == local_var_192);
auto local_var_194 = (local_var_193) ? local_var_139 : riscv_x26;
auto local_var_194_nxt_holder = local_var_194;
uint5_t local_var_195 = 27;
bool local_var_196 = (local_var_5 == local_var_195);
auto local_var_197 = (local_var_196) ? local_var_139 : riscv_x27;
auto local_var_197_nxt_holder = local_var_197;
uint5_t local_var_198 = 28;
bool local_var_199 = (local_var_5 == local_var_198);
auto local_var_200 = (local_var_199) ? local_var_139 : riscv_x28;
auto local_var_200_nxt_holder = local_var_200;
uint5_t local_var_201 = 29;
bool local_var_202 = (local_var_5 == local_var_201);
auto local_var_203 = (local_var_202) ? local_var_139 : riscv_x29;
auto local_var_203_nxt_holder = local_var_203;
uint5_t local_var_204 = 3;
bool local_var_205 = (local_var_5 == local_var_204);
auto local_var_206 = (local_var_205) ? local_var_139 : riscv_x3;
auto local_var_206_nxt_holder = local_var_206;
uint5_t local_var_207 = 30;
bool local_var_208 = (local_var_5 == local_var_207);
auto local_var_209 = (local_var_208) ? local_var_139 : riscv_x30;
auto local_var_209_nxt_holder = local_var_209;
uint5_t local_var_210 = 31;
bool local_var_211 = (local_var_5 == local_var_210);
auto local_var_212 = (local_var_211) ? local_var_139 : riscv_x31;
auto local_var_212_nxt_holder = local_var_212;
uint5_t local_var_213 = 4;
bool local_var_214 = (local_var_5 == local_var_213);
auto local_var_215 = (local_var_214) ? local_var_139 : riscv_x4;
auto local_var_215_nxt_holder = local_var_215;
uint5_t local_var_216 = 5;
bool local_var_217 = (local_var_5 == local_var_216);
auto local_var_218 = (local_var_217) ? local_var_139 : riscv_x5;
auto local_var_218_nxt_holder = local_var_218;
uint5_t local_var_219 = 6;
bool local_var_220 = (local_var_5 == local_var_219);
auto local_var_221 = (local_var_220) ? local_var_139 : riscv_x6;
auto local_var_221_nxt_holder = local_var_221;
uint5_t local_var_222 = 7;
bool local_var_223 = (local_var_5 == local_var_222);
auto local_var_224 = (local_var_223) ? local_var_139 : riscv_x7;
auto local_var_224_nxt_holder = local_var_224;
uint5_t local_var_225 = 8;
bool local_var_226 = (local_var_5 == local_var_225);
auto local_var_227 = (local_var_226) ? local_var_139 : riscv_x8;
auto local_var_227_nxt_holder = local_var_227;
uint5_t local_var_228 = 9;
bool local_var_229 = (local_var_5 == local_var_228);
auto local_var_230 = (local_var_229) ? local_var_139 : riscv_x9;
auto local_var_230_nxt_holder = local_var_230;
riscv_pc = local_var_2_nxt_holder;
riscv_x0 = local_var_3_nxt_holder;
riscv_x1 = local_var_140_nxt_holder;
riscv_x10 = local_var_143_nxt_holder;
riscv_x11 = local_var_146_nxt_holder;
riscv_x12 = local_var_149_nxt_holder;
riscv_x13 = local_var_152_nxt_holder;
riscv_x14 = local_var_155_nxt_holder;
riscv_x15 = local_var_158_nxt_holder;
riscv_x16 = local_var_161_nxt_holder;
riscv_x17 = local_var_164_nxt_holder;
riscv_x18 = local_var_167_nxt_holder;
riscv_x19 = local_var_170_nxt_holder;
riscv_x2 = local_var_173_nxt_holder;
riscv_x20 = local_var_176_nxt_holder;
riscv_x21 = local_var_179_nxt_holder;
riscv_x22 = local_var_182_nxt_holder;
riscv_x23 = local_var_185_nxt_holder;
riscv_x24 = local_var_188_nxt_holder;
riscv_x25 = local_var_191_nxt_holder;
riscv_x26 = local_var_194_nxt_holder;
riscv_x27 = local_var_197_nxt_holder;
riscv_x28 = local_var_200_nxt_holder;
riscv_x29 = local_var_203_nxt_holder;
riscv_x3 = local_var_206_nxt_holder;
riscv_x30 = local_var_209_nxt_holder;
riscv_x31 = local_var_212_nxt_holder;
riscv_x4 = local_var_215_nxt_holder;
riscv_x5 = local_var_218_nxt_holder;
riscv_x6 = local_var_221_nxt_holder;
riscv_x7 = local_var_224_nxt_holder;
riscv_x8 = local_var_227_nxt_holder;
riscv_x9 = local_var_230_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "SLTIU state updates:" << std::endl;
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

#include <riscv.h>
bool riscv::decode_riscv_BGEU() {
auto local_var_1_shifted = riscv_inst >> 0;
auto local_var_1_mask = riscv_inst;
local_var_1_mask = (1 << (6 - 0 + 1)) - 1;
local_var_1_mask &= local_var_1_shifted;
uint7_t local_var_1 = boost::numeric_cast<uint7_t>(local_var_1_mask);
uint7_t local_var_2 = 99;
bool local_var_3 = (local_var_1 == local_var_2);
auto local_var_4_shifted = riscv_inst >> 12;
auto local_var_4_mask = riscv_inst;
local_var_4_mask = (1 << (14 - 12 + 1)) - 1;
local_var_4_mask &= local_var_4_shifted;
uint3_t local_var_4 = boost::numeric_cast<uint3_t>(local_var_4_mask);
uint3_t local_var_5 = 7;
bool local_var_6 = (local_var_4 == local_var_5);
bool local_var_7 = (local_var_3 & local_var_6);
auto& univ_var_10 = local_var_7;
return univ_var_10;
}
void riscv::update_riscv_BGEU() {
auto local_var_1_shifted = riscv_inst >> 15;
auto local_var_1_mask = riscv_inst;
local_var_1_mask = (1 << (19 - 15 + 1)) - 1;
local_var_1_mask &= local_var_1_shifted;
uint5_t local_var_1 = boost::numeric_cast<uint5_t>(local_var_1_mask);
uint5_t local_var_2 = 31;
bool local_var_3 = (local_var_1 == local_var_2);
uint5_t local_var_5 = 30;
bool local_var_6 = (local_var_1 == local_var_5);
uint5_t local_var_8 = 29;
bool local_var_9 = (local_var_1 == local_var_8);
uint5_t local_var_11 = 28;
bool local_var_12 = (local_var_1 == local_var_11);
uint5_t local_var_14 = 27;
bool local_var_15 = (local_var_1 == local_var_14);
uint5_t local_var_17 = 26;
bool local_var_18 = (local_var_1 == local_var_17);
uint5_t local_var_20 = 25;
bool local_var_21 = (local_var_1 == local_var_20);
uint5_t local_var_23 = 24;
bool local_var_24 = (local_var_1 == local_var_23);
uint5_t local_var_26 = 23;
bool local_var_27 = (local_var_1 == local_var_26);
uint5_t local_var_29 = 22;
bool local_var_30 = (local_var_1 == local_var_29);
uint5_t local_var_32 = 21;
bool local_var_33 = (local_var_1 == local_var_32);
uint5_t local_var_35 = 20;
bool local_var_36 = (local_var_1 == local_var_35);
uint5_t local_var_38 = 19;
bool local_var_39 = (local_var_1 == local_var_38);
uint5_t local_var_41 = 18;
bool local_var_42 = (local_var_1 == local_var_41);
uint5_t local_var_44 = 17;
bool local_var_45 = (local_var_1 == local_var_44);
uint5_t local_var_47 = 16;
bool local_var_48 = (local_var_1 == local_var_47);
uint5_t local_var_50 = 15;
bool local_var_51 = (local_var_1 == local_var_50);
uint5_t local_var_53 = 14;
bool local_var_54 = (local_var_1 == local_var_53);
uint5_t local_var_56 = 13;
bool local_var_57 = (local_var_1 == local_var_56);
uint5_t local_var_59 = 12;
bool local_var_60 = (local_var_1 == local_var_59);
uint5_t local_var_62 = 11;
bool local_var_63 = (local_var_1 == local_var_62);
uint5_t local_var_65 = 10;
bool local_var_66 = (local_var_1 == local_var_65);
uint5_t local_var_68 = 9;
bool local_var_69 = (local_var_1 == local_var_68);
uint5_t local_var_71 = 8;
bool local_var_72 = (local_var_1 == local_var_71);
uint5_t local_var_74 = 7;
bool local_var_75 = (local_var_1 == local_var_74);
uint5_t local_var_77 = 6;
bool local_var_78 = (local_var_1 == local_var_77);
uint5_t local_var_80 = 5;
bool local_var_81 = (local_var_1 == local_var_80);
uint5_t local_var_83 = 4;
bool local_var_84 = (local_var_1 == local_var_83);
uint5_t local_var_86 = 3;
bool local_var_87 = (local_var_1 == local_var_86);
uint5_t local_var_89 = 2;
bool local_var_90 = (local_var_1 == local_var_89);
uint5_t local_var_92 = 1;
bool local_var_93 = (local_var_1 == local_var_92);
uint32_t local_var_95 = 0;
auto local_var_96 = (local_var_93) ? riscv_x1 : local_var_95;
auto local_var_97 = (local_var_90) ? riscv_x2 : local_var_96;
auto local_var_98 = (local_var_87) ? riscv_x3 : local_var_97;
auto local_var_99 = (local_var_84) ? riscv_x4 : local_var_98;
auto local_var_100 = (local_var_81) ? riscv_x5 : local_var_99;
auto local_var_101 = (local_var_78) ? riscv_x6 : local_var_100;
auto local_var_102 = (local_var_75) ? riscv_x7 : local_var_101;
auto local_var_103 = (local_var_72) ? riscv_x8 : local_var_102;
auto local_var_104 = (local_var_69) ? riscv_x9 : local_var_103;
auto local_var_105 = (local_var_66) ? riscv_x10 : local_var_104;
auto local_var_106 = (local_var_63) ? riscv_x11 : local_var_105;
auto local_var_107 = (local_var_60) ? riscv_x12 : local_var_106;
auto local_var_108 = (local_var_57) ? riscv_x13 : local_var_107;
auto local_var_109 = (local_var_54) ? riscv_x14 : local_var_108;
auto local_var_110 = (local_var_51) ? riscv_x15 : local_var_109;
auto local_var_111 = (local_var_48) ? riscv_x16 : local_var_110;
auto local_var_112 = (local_var_45) ? riscv_x17 : local_var_111;
auto local_var_113 = (local_var_42) ? riscv_x18 : local_var_112;
auto local_var_114 = (local_var_39) ? riscv_x19 : local_var_113;
auto local_var_115 = (local_var_36) ? riscv_x20 : local_var_114;
auto local_var_116 = (local_var_33) ? riscv_x21 : local_var_115;
auto local_var_117 = (local_var_30) ? riscv_x22 : local_var_116;
auto local_var_118 = (local_var_27) ? riscv_x23 : local_var_117;
auto local_var_119 = (local_var_24) ? riscv_x24 : local_var_118;
auto local_var_120 = (local_var_21) ? riscv_x25 : local_var_119;
auto local_var_121 = (local_var_18) ? riscv_x26 : local_var_120;
auto local_var_122 = (local_var_15) ? riscv_x27 : local_var_121;
auto local_var_123 = (local_var_12) ? riscv_x28 : local_var_122;
auto local_var_124 = (local_var_9) ? riscv_x29 : local_var_123;
auto local_var_125 = (local_var_6) ? riscv_x30 : local_var_124;
auto local_var_126 = (local_var_3) ? riscv_x31 : local_var_125;
auto local_var_127_shifted = riscv_inst >> 20;
auto local_var_127_mask = riscv_inst;
local_var_127_mask = (1 << (24 - 20 + 1)) - 1;
local_var_127_mask &= local_var_127_shifted;
uint5_t local_var_127 = boost::numeric_cast<uint5_t>(local_var_127_mask);
uint5_t local_var_128 = 31;
bool local_var_129 = (local_var_127 == local_var_128);
uint5_t local_var_130 = 30;
bool local_var_131 = (local_var_127 == local_var_130);
uint5_t local_var_132 = 29;
bool local_var_133 = (local_var_127 == local_var_132);
uint5_t local_var_134 = 28;
bool local_var_135 = (local_var_127 == local_var_134);
uint5_t local_var_136 = 27;
bool local_var_137 = (local_var_127 == local_var_136);
uint5_t local_var_138 = 26;
bool local_var_139 = (local_var_127 == local_var_138);
uint5_t local_var_140 = 25;
bool local_var_141 = (local_var_127 == local_var_140);
uint5_t local_var_142 = 24;
bool local_var_143 = (local_var_127 == local_var_142);
uint5_t local_var_144 = 23;
bool local_var_145 = (local_var_127 == local_var_144);
uint5_t local_var_146 = 22;
bool local_var_147 = (local_var_127 == local_var_146);
uint5_t local_var_148 = 21;
bool local_var_149 = (local_var_127 == local_var_148);
uint5_t local_var_150 = 20;
bool local_var_151 = (local_var_127 == local_var_150);
uint5_t local_var_152 = 19;
bool local_var_153 = (local_var_127 == local_var_152);
uint5_t local_var_154 = 18;
bool local_var_155 = (local_var_127 == local_var_154);
uint5_t local_var_156 = 17;
bool local_var_157 = (local_var_127 == local_var_156);
uint5_t local_var_158 = 16;
bool local_var_159 = (local_var_127 == local_var_158);
uint5_t local_var_160 = 15;
bool local_var_161 = (local_var_127 == local_var_160);
uint5_t local_var_162 = 14;
bool local_var_163 = (local_var_127 == local_var_162);
uint5_t local_var_164 = 13;
bool local_var_165 = (local_var_127 == local_var_164);
uint5_t local_var_166 = 12;
bool local_var_167 = (local_var_127 == local_var_166);
uint5_t local_var_168 = 11;
bool local_var_169 = (local_var_127 == local_var_168);
uint5_t local_var_170 = 10;
bool local_var_171 = (local_var_127 == local_var_170);
uint5_t local_var_172 = 9;
bool local_var_173 = (local_var_127 == local_var_172);
uint5_t local_var_174 = 8;
bool local_var_175 = (local_var_127 == local_var_174);
uint5_t local_var_176 = 7;
bool local_var_177 = (local_var_127 == local_var_176);
uint5_t local_var_178 = 6;
bool local_var_179 = (local_var_127 == local_var_178);
uint5_t local_var_180 = 5;
bool local_var_181 = (local_var_127 == local_var_180);
uint5_t local_var_182 = 4;
bool local_var_183 = (local_var_127 == local_var_182);
uint5_t local_var_184 = 3;
bool local_var_185 = (local_var_127 == local_var_184);
uint5_t local_var_186 = 2;
bool local_var_187 = (local_var_127 == local_var_186);
uint5_t local_var_188 = 1;
bool local_var_189 = (local_var_127 == local_var_188);
uint32_t local_var_190 = 0;
auto local_var_191 = (local_var_189) ? riscv_x1 : local_var_190;
auto local_var_192 = (local_var_187) ? riscv_x2 : local_var_191;
auto local_var_193 = (local_var_185) ? riscv_x3 : local_var_192;
auto local_var_194 = (local_var_183) ? riscv_x4 : local_var_193;
auto local_var_195 = (local_var_181) ? riscv_x5 : local_var_194;
auto local_var_196 = (local_var_179) ? riscv_x6 : local_var_195;
auto local_var_197 = (local_var_177) ? riscv_x7 : local_var_196;
auto local_var_198 = (local_var_175) ? riscv_x8 : local_var_197;
auto local_var_199 = (local_var_173) ? riscv_x9 : local_var_198;
auto local_var_200 = (local_var_171) ? riscv_x10 : local_var_199;
auto local_var_201 = (local_var_169) ? riscv_x11 : local_var_200;
auto local_var_202 = (local_var_167) ? riscv_x12 : local_var_201;
auto local_var_203 = (local_var_165) ? riscv_x13 : local_var_202;
auto local_var_204 = (local_var_163) ? riscv_x14 : local_var_203;
auto local_var_205 = (local_var_161) ? riscv_x15 : local_var_204;
auto local_var_206 = (local_var_159) ? riscv_x16 : local_var_205;
auto local_var_207 = (local_var_157) ? riscv_x17 : local_var_206;
auto local_var_208 = (local_var_155) ? riscv_x18 : local_var_207;
auto local_var_209 = (local_var_153) ? riscv_x19 : local_var_208;
auto local_var_210 = (local_var_151) ? riscv_x20 : local_var_209;
auto local_var_211 = (local_var_149) ? riscv_x21 : local_var_210;
auto local_var_212 = (local_var_147) ? riscv_x22 : local_var_211;
auto local_var_213 = (local_var_145) ? riscv_x23 : local_var_212;
auto local_var_214 = (local_var_143) ? riscv_x24 : local_var_213;
auto local_var_215 = (local_var_141) ? riscv_x25 : local_var_214;
auto local_var_216 = (local_var_139) ? riscv_x26 : local_var_215;
auto local_var_217 = (local_var_137) ? riscv_x27 : local_var_216;
auto local_var_218 = (local_var_135) ? riscv_x28 : local_var_217;
auto local_var_219 = (local_var_133) ? riscv_x29 : local_var_218;
auto local_var_220 = (local_var_131) ? riscv_x30 : local_var_219;
auto local_var_221 = (local_var_129) ? riscv_x31 : local_var_220;
bool local_var_222 = (local_var_126 == local_var_221);
bool local_var_223 = (local_var_126 > local_var_221);
bool local_var_224 = (local_var_222 | local_var_223);
auto local_var_226_shifted = riscv_inst >> 31;
auto local_var_226_mask = riscv_inst;
local_var_226_mask = (1 << (31 - 31 + 1)) - 1;
local_var_226_mask &= local_var_226_shifted;
uint1_t local_var_226 = boost::numeric_cast<uint1_t>(local_var_226_mask);
auto local_var_227_shifted = riscv_inst >> 7;
auto local_var_227_mask = riscv_inst;
local_var_227_mask = (1 << (7 - 7 + 1)) - 1;
local_var_227_mask &= local_var_227_shifted;
uint1_t local_var_227 = boost::numeric_cast<uint1_t>(local_var_227_mask);
auto local_var_228_shifted = riscv_inst >> 25;
auto local_var_228_mask = riscv_inst;
local_var_228_mask = (1 << (30 - 25 + 1)) - 1;
local_var_228_mask &= local_var_228_shifted;
uint6_t local_var_228 = boost::numeric_cast<uint6_t>(local_var_228_mask);
auto local_var_229_shifted = riscv_inst >> 8;
auto local_var_229_mask = riscv_inst;
local_var_229_mask = (1 << (11 - 8 + 1)) - 1;
local_var_229_mask &= local_var_229_shifted;
uint4_t local_var_229 = boost::numeric_cast<uint4_t>(local_var_229_mask);
uint1_t local_var_230 = 0;
univ_var_2 = (boost::numeric_cast<uint5_t>(local_var_229) << 1) + boost::numeric_cast<uint5_t>(local_var_230);
univ_var_3 = (boost::numeric_cast<uint11_t>(local_var_228) << 5) + boost::numeric_cast<uint11_t>(univ_var_2);
univ_var_4 = (boost::numeric_cast<uint12_t>(local_var_227) << 11) + boost::numeric_cast<uint12_t>(univ_var_3);
univ_var_5 = (boost::numeric_cast<uint13_t>(local_var_226) << 12) + boost::numeric_cast<uint13_t>(univ_var_4);
uint32_t local_var_235 = boost::numeric_cast<uint32_t>(((univ_var_5 >> 12) == 1) ? (~univ_var_5) : univ_var_5);
local_var_235 = ((univ_var_5 >> 12) == 1) ? (~local_var_235) : local_var_235;
uint32_t local_var_236 = (riscv_pc + local_var_235);
uint32_t local_var_237 = 4;
uint32_t local_var_238 = (riscv_pc + local_var_237);
auto local_var_239 = (local_var_224) ? local_var_236 : local_var_238;
auto local_var_239_nxt_holder = local_var_239;
riscv_pc = local_var_239_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "BGEU state updates:" << std::endl;
instr_update_log << "    riscv_pc => " << std::hex << "0x" << riscv_pc << std::endl; 
instr_update_log << std::endl;
#endif
}

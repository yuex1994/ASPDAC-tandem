#include <flex.h>
bool flex::decode_PE1_ACT_CHILD_PE1_act_child_op_relu() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE1_ACT_CHILD_pe1_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE1_ACT_CHILD_pe1_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 12;
bool local_var_9 = (PE1_ACT_CHILD_pe1_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_265 = local_var_10;
return univ_var_265;
}
void flex::update_PE1_ACT_CHILD_PE1_act_child_op_relu() {
sc_biguint<2> local_var_1 = 3;
bool local_var_2 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_1);
sc_biguint<4> local_var_4 = 0;
sc_biguint<4> local_var_5 = 0;
sc_biguint<4> local_var_6 = (local_var_4 + local_var_5);
auto local_var_7 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_6];
sc_biguint<2> local_var_8 = 2;
bool local_var_9 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_8);
auto local_var_11 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_6];
sc_biguint<2> local_var_12 = 1;
bool local_var_13 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_12);
auto local_var_15 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_6];
sc_biguint<2> local_var_16 = 0;
bool local_var_17 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_16);
auto local_var_19 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_6];
sc_biguint<20> local_var_20 = 0;
auto local_var_21 = (local_var_17) ? local_var_19 : local_var_20;
auto local_var_22 = (local_var_13) ? local_var_15 : local_var_21;
auto local_var_23 = (local_var_9) ? local_var_11 : local_var_22;
auto local_var_24 = (local_var_2) ? local_var_7 : local_var_23;
auto local_var_25 = PEActRelu(local_var_24);
auto local_var_25_nxt_holder = local_var_25;
sc_biguint<2> local_var_26 = 3;
bool local_var_27 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_26);
sc_biguint<4> local_var_28 = 1;
sc_biguint<4> local_var_29 = 0;
sc_biguint<4> local_var_30 = (local_var_28 + local_var_29);
auto local_var_31 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_30];
sc_biguint<2> local_var_32 = 2;
bool local_var_33 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_32);
auto local_var_34 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_30];
sc_biguint<2> local_var_35 = 1;
bool local_var_36 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_35);
auto local_var_37 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_30];
sc_biguint<2> local_var_38 = 0;
bool local_var_39 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_38);
auto local_var_40 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_30];
sc_biguint<20> local_var_41 = 0;
auto local_var_42 = (local_var_39) ? local_var_40 : local_var_41;
auto local_var_43 = (local_var_36) ? local_var_37 : local_var_42;
auto local_var_44 = (local_var_33) ? local_var_34 : local_var_43;
auto local_var_45 = (local_var_27) ? local_var_31 : local_var_44;
auto local_var_46 = PEActRelu(local_var_45);
auto local_var_46_nxt_holder = local_var_46;
sc_biguint<2> local_var_47 = 3;
bool local_var_48 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_47);
sc_biguint<4> local_var_49 = 10;
sc_biguint<4> local_var_50 = 0;
sc_biguint<4> local_var_51 = (local_var_49 + local_var_50);
auto local_var_52 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_51];
sc_biguint<2> local_var_53 = 2;
bool local_var_54 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_53);
auto local_var_55 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_51];
sc_biguint<2> local_var_56 = 1;
bool local_var_57 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_56);
auto local_var_58 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_51];
sc_biguint<2> local_var_59 = 0;
bool local_var_60 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_59);
auto local_var_61 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_51];
sc_biguint<20> local_var_62 = 0;
auto local_var_63 = (local_var_60) ? local_var_61 : local_var_62;
auto local_var_64 = (local_var_57) ? local_var_58 : local_var_63;
auto local_var_65 = (local_var_54) ? local_var_55 : local_var_64;
auto local_var_66 = (local_var_48) ? local_var_52 : local_var_65;
auto local_var_67 = PEActRelu(local_var_66);
auto local_var_67_nxt_holder = local_var_67;
sc_biguint<2> local_var_68 = 3;
bool local_var_69 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_68);
sc_biguint<4> local_var_70 = 11;
sc_biguint<4> local_var_71 = 0;
sc_biguint<4> local_var_72 = (local_var_70 + local_var_71);
auto local_var_73 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_72];
sc_biguint<2> local_var_74 = 2;
bool local_var_75 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_74);
auto local_var_76 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_72];
sc_biguint<2> local_var_77 = 1;
bool local_var_78 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_77);
auto local_var_79 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_72];
sc_biguint<2> local_var_80 = 0;
bool local_var_81 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_80);
auto local_var_82 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_72];
sc_biguint<20> local_var_83 = 0;
auto local_var_84 = (local_var_81) ? local_var_82 : local_var_83;
auto local_var_85 = (local_var_78) ? local_var_79 : local_var_84;
auto local_var_86 = (local_var_75) ? local_var_76 : local_var_85;
auto local_var_87 = (local_var_69) ? local_var_73 : local_var_86;
auto local_var_88 = PEActRelu(local_var_87);
auto local_var_88_nxt_holder = local_var_88;
sc_biguint<2> local_var_89 = 3;
bool local_var_90 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_89);
sc_biguint<4> local_var_91 = 12;
sc_biguint<4> local_var_92 = 0;
sc_biguint<4> local_var_93 = (local_var_91 + local_var_92);
auto local_var_94 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_93];
sc_biguint<2> local_var_95 = 2;
bool local_var_96 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_95);
auto local_var_97 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_93];
sc_biguint<2> local_var_98 = 1;
bool local_var_99 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_98);
auto local_var_100 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_93];
sc_biguint<2> local_var_101 = 0;
bool local_var_102 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_101);
auto local_var_103 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_93];
sc_biguint<20> local_var_104 = 0;
auto local_var_105 = (local_var_102) ? local_var_103 : local_var_104;
auto local_var_106 = (local_var_99) ? local_var_100 : local_var_105;
auto local_var_107 = (local_var_96) ? local_var_97 : local_var_106;
auto local_var_108 = (local_var_90) ? local_var_94 : local_var_107;
auto local_var_109 = PEActRelu(local_var_108);
auto local_var_109_nxt_holder = local_var_109;
sc_biguint<2> local_var_110 = 3;
bool local_var_111 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_110);
sc_biguint<4> local_var_112 = 13;
sc_biguint<4> local_var_113 = 0;
sc_biguint<4> local_var_114 = (local_var_112 + local_var_113);
auto local_var_115 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_114];
sc_biguint<2> local_var_116 = 2;
bool local_var_117 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_116);
auto local_var_118 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_114];
sc_biguint<2> local_var_119 = 1;
bool local_var_120 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_119);
auto local_var_121 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_114];
sc_biguint<2> local_var_122 = 0;
bool local_var_123 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_122);
auto local_var_124 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_114];
sc_biguint<20> local_var_125 = 0;
auto local_var_126 = (local_var_123) ? local_var_124 : local_var_125;
auto local_var_127 = (local_var_120) ? local_var_121 : local_var_126;
auto local_var_128 = (local_var_117) ? local_var_118 : local_var_127;
auto local_var_129 = (local_var_111) ? local_var_115 : local_var_128;
auto local_var_130 = PEActRelu(local_var_129);
auto local_var_130_nxt_holder = local_var_130;
sc_biguint<2> local_var_131 = 3;
bool local_var_132 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_131);
sc_biguint<4> local_var_133 = 14;
sc_biguint<4> local_var_134 = 0;
sc_biguint<4> local_var_135 = (local_var_133 + local_var_134);
auto local_var_136 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_135];
sc_biguint<2> local_var_137 = 2;
bool local_var_138 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_137);
auto local_var_139 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_135];
sc_biguint<2> local_var_140 = 1;
bool local_var_141 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_140);
auto local_var_142 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_135];
sc_biguint<2> local_var_143 = 0;
bool local_var_144 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_143);
auto local_var_145 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_135];
sc_biguint<20> local_var_146 = 0;
auto local_var_147 = (local_var_144) ? local_var_145 : local_var_146;
auto local_var_148 = (local_var_141) ? local_var_142 : local_var_147;
auto local_var_149 = (local_var_138) ? local_var_139 : local_var_148;
auto local_var_150 = (local_var_132) ? local_var_136 : local_var_149;
auto local_var_151 = PEActRelu(local_var_150);
auto local_var_151_nxt_holder = local_var_151;
sc_biguint<2> local_var_152 = 3;
bool local_var_153 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_152);
sc_biguint<4> local_var_154 = 15;
sc_biguint<4> local_var_155 = 0;
sc_biguint<4> local_var_156 = (local_var_154 + local_var_155);
auto local_var_157 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_156];
sc_biguint<2> local_var_158 = 2;
bool local_var_159 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_158);
auto local_var_160 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_156];
sc_biguint<2> local_var_161 = 1;
bool local_var_162 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_161);
auto local_var_163 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_156];
sc_biguint<2> local_var_164 = 0;
bool local_var_165 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_164);
auto local_var_166 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_156];
sc_biguint<20> local_var_167 = 0;
auto local_var_168 = (local_var_165) ? local_var_166 : local_var_167;
auto local_var_169 = (local_var_162) ? local_var_163 : local_var_168;
auto local_var_170 = (local_var_159) ? local_var_160 : local_var_169;
auto local_var_171 = (local_var_153) ? local_var_157 : local_var_170;
auto local_var_172 = PEActRelu(local_var_171);
auto local_var_172_nxt_holder = local_var_172;
sc_biguint<2> local_var_173 = 3;
bool local_var_174 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_173);
sc_biguint<4> local_var_175 = 2;
sc_biguint<4> local_var_176 = 0;
sc_biguint<4> local_var_177 = (local_var_175 + local_var_176);
auto local_var_178 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_177];
sc_biguint<2> local_var_179 = 2;
bool local_var_180 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_179);
auto local_var_181 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_177];
sc_biguint<2> local_var_182 = 1;
bool local_var_183 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_182);
auto local_var_184 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_177];
sc_biguint<2> local_var_185 = 0;
bool local_var_186 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_185);
auto local_var_187 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_177];
sc_biguint<20> local_var_188 = 0;
auto local_var_189 = (local_var_186) ? local_var_187 : local_var_188;
auto local_var_190 = (local_var_183) ? local_var_184 : local_var_189;
auto local_var_191 = (local_var_180) ? local_var_181 : local_var_190;
auto local_var_192 = (local_var_174) ? local_var_178 : local_var_191;
auto local_var_193 = PEActRelu(local_var_192);
auto local_var_193_nxt_holder = local_var_193;
sc_biguint<2> local_var_194 = 3;
bool local_var_195 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_194);
sc_biguint<4> local_var_196 = 3;
sc_biguint<4> local_var_197 = 0;
sc_biguint<4> local_var_198 = (local_var_196 + local_var_197);
auto local_var_199 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_198];
sc_biguint<2> local_var_200 = 2;
bool local_var_201 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_200);
auto local_var_202 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_198];
sc_biguint<2> local_var_203 = 1;
bool local_var_204 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_203);
auto local_var_205 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_198];
sc_biguint<2> local_var_206 = 0;
bool local_var_207 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_206);
auto local_var_208 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_198];
sc_biguint<20> local_var_209 = 0;
auto local_var_210 = (local_var_207) ? local_var_208 : local_var_209;
auto local_var_211 = (local_var_204) ? local_var_205 : local_var_210;
auto local_var_212 = (local_var_201) ? local_var_202 : local_var_211;
auto local_var_213 = (local_var_195) ? local_var_199 : local_var_212;
auto local_var_214 = PEActRelu(local_var_213);
auto local_var_214_nxt_holder = local_var_214;
sc_biguint<2> local_var_215 = 3;
bool local_var_216 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_215);
sc_biguint<4> local_var_217 = 4;
sc_biguint<4> local_var_218 = 0;
sc_biguint<4> local_var_219 = (local_var_217 + local_var_218);
auto local_var_220 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_219];
sc_biguint<2> local_var_221 = 2;
bool local_var_222 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_221);
auto local_var_223 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_219];
sc_biguint<2> local_var_224 = 1;
bool local_var_225 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_224);
auto local_var_226 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_219];
sc_biguint<2> local_var_227 = 0;
bool local_var_228 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_227);
auto local_var_229 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_219];
sc_biguint<20> local_var_230 = 0;
auto local_var_231 = (local_var_228) ? local_var_229 : local_var_230;
auto local_var_232 = (local_var_225) ? local_var_226 : local_var_231;
auto local_var_233 = (local_var_222) ? local_var_223 : local_var_232;
auto local_var_234 = (local_var_216) ? local_var_220 : local_var_233;
auto local_var_235 = PEActRelu(local_var_234);
auto local_var_235_nxt_holder = local_var_235;
sc_biguint<2> local_var_236 = 3;
bool local_var_237 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_236);
sc_biguint<4> local_var_238 = 5;
sc_biguint<4> local_var_239 = 0;
sc_biguint<4> local_var_240 = (local_var_238 + local_var_239);
auto local_var_241 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_240];
sc_biguint<2> local_var_242 = 2;
bool local_var_243 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_242);
auto local_var_244 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_240];
sc_biguint<2> local_var_245 = 1;
bool local_var_246 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_245);
auto local_var_247 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_240];
sc_biguint<2> local_var_248 = 0;
bool local_var_249 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_248);
auto local_var_250 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_240];
sc_biguint<20> local_var_251 = 0;
auto local_var_252 = (local_var_249) ? local_var_250 : local_var_251;
auto local_var_253 = (local_var_246) ? local_var_247 : local_var_252;
auto local_var_254 = (local_var_243) ? local_var_244 : local_var_253;
auto local_var_255 = (local_var_237) ? local_var_241 : local_var_254;
auto local_var_256 = PEActRelu(local_var_255);
auto local_var_256_nxt_holder = local_var_256;
sc_biguint<2> local_var_257 = 3;
bool local_var_258 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_257);
sc_biguint<4> local_var_259 = 6;
sc_biguint<4> local_var_260 = 0;
sc_biguint<4> local_var_261 = (local_var_259 + local_var_260);
auto local_var_262 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_261];
sc_biguint<2> local_var_263 = 2;
bool local_var_264 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_263);
auto local_var_265 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_261];
sc_biguint<2> local_var_266 = 1;
bool local_var_267 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_266);
auto local_var_268 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_261];
sc_biguint<2> local_var_269 = 0;
bool local_var_270 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_269);
auto local_var_271 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_261];
sc_biguint<20> local_var_272 = 0;
auto local_var_273 = (local_var_270) ? local_var_271 : local_var_272;
auto local_var_274 = (local_var_267) ? local_var_268 : local_var_273;
auto local_var_275 = (local_var_264) ? local_var_265 : local_var_274;
auto local_var_276 = (local_var_258) ? local_var_262 : local_var_275;
auto local_var_277 = PEActRelu(local_var_276);
auto local_var_277_nxt_holder = local_var_277;
sc_biguint<2> local_var_278 = 3;
bool local_var_279 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_278);
sc_biguint<4> local_var_280 = 7;
sc_biguint<4> local_var_281 = 0;
sc_biguint<4> local_var_282 = (local_var_280 + local_var_281);
auto local_var_283 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_282];
sc_biguint<2> local_var_284 = 2;
bool local_var_285 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_284);
auto local_var_286 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_282];
sc_biguint<2> local_var_287 = 1;
bool local_var_288 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_287);
auto local_var_289 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_282];
sc_biguint<2> local_var_290 = 0;
bool local_var_291 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_290);
auto local_var_292 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_282];
sc_biguint<20> local_var_293 = 0;
auto local_var_294 = (local_var_291) ? local_var_292 : local_var_293;
auto local_var_295 = (local_var_288) ? local_var_289 : local_var_294;
auto local_var_296 = (local_var_285) ? local_var_286 : local_var_295;
auto local_var_297 = (local_var_279) ? local_var_283 : local_var_296;
auto local_var_298 = PEActRelu(local_var_297);
auto local_var_298_nxt_holder = local_var_298;
sc_biguint<2> local_var_299 = 3;
bool local_var_300 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_299);
sc_biguint<4> local_var_301 = 8;
sc_biguint<4> local_var_302 = 0;
sc_biguint<4> local_var_303 = (local_var_301 + local_var_302);
auto local_var_304 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_303];
sc_biguint<2> local_var_305 = 2;
bool local_var_306 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_305);
auto local_var_307 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_303];
sc_biguint<2> local_var_308 = 1;
bool local_var_309 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_308);
auto local_var_310 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_303];
sc_biguint<2> local_var_311 = 0;
bool local_var_312 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_311);
auto local_var_313 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_303];
sc_biguint<20> local_var_314 = 0;
auto local_var_315 = (local_var_312) ? local_var_313 : local_var_314;
auto local_var_316 = (local_var_309) ? local_var_310 : local_var_315;
auto local_var_317 = (local_var_306) ? local_var_307 : local_var_316;
auto local_var_318 = (local_var_300) ? local_var_304 : local_var_317;
auto local_var_319 = PEActRelu(local_var_318);
auto local_var_319_nxt_holder = local_var_319;
sc_biguint<2> local_var_320 = 3;
bool local_var_321 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_320);
sc_biguint<4> local_var_322 = 9;
sc_biguint<4> local_var_323 = 0;
sc_biguint<4> local_var_324 = (local_var_322 + local_var_323);
auto local_var_325 = PE1_ACT_CHILD_PE1_act_regs_3[local_var_324];
sc_biguint<2> local_var_326 = 2;
bool local_var_327 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_326);
auto local_var_328 = PE1_ACT_CHILD_PE1_act_regs_2[local_var_324];
sc_biguint<2> local_var_329 = 1;
bool local_var_330 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_329);
auto local_var_331 = PE1_ACT_CHILD_PE1_act_regs_1[local_var_324];
sc_biguint<2> local_var_332 = 0;
bool local_var_333 = (PE1_ACT_CHILD_pe1_act_reg_a2 == local_var_332);
auto local_var_334 = PE1_ACT_CHILD_PE1_act_regs_0[local_var_324];
sc_biguint<20> local_var_335 = 0;
auto local_var_336 = (local_var_333) ? local_var_334 : local_var_335;
auto local_var_337 = (local_var_330) ? local_var_331 : local_var_336;
auto local_var_338 = (local_var_327) ? local_var_328 : local_var_337;
auto local_var_339 = (local_var_321) ? local_var_325 : local_var_338;
auto local_var_340 = PEActRelu(local_var_339);
auto local_var_340_nxt_holder = local_var_340;
sc_biguint<3> local_var_341 = 5;
auto local_var_341_nxt_holder = local_var_341;
PE1_ACT_CHILD_PE1_act_reg_temp_0 = local_var_25_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_1 = local_var_46_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_10 = local_var_67_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_11 = local_var_88_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_12 = local_var_109_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_13 = local_var_130_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_14 = local_var_151_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_15 = local_var_172_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_2 = local_var_193_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_3 = local_var_214_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_4 = local_var_235_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_5 = local_var_256_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_6 = local_var_277_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_7 = local_var_298_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_8 = local_var_319_nxt_holder;
PE1_ACT_CHILD_PE1_act_reg_temp_9 = local_var_340_nxt_holder;
PE1_ACT_CHILD_pe1_act_state = local_var_341_nxt_holder;
}
#include <flex.h>
bool flex::decode_PE3_ACT_CHILD_PE3_act_child_op_copy() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (PE3_ACT_CHILD_pe3_act_is_start_reg == local_var_1);
sc_biguint<3> local_var_4 = 1;
bool local_var_5 = (PE3_ACT_CHILD_pe3_act_state == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<4> local_var_8 = 7;
bool local_var_9 = (PE3_ACT_CHILD_pe3_act_op == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_440 = local_var_10;
return univ_var_440;
}
void flex::update_PE3_ACT_CHILD_PE3_act_child_op_copy() {
sc_biguint<2> local_var_1 = 3;
bool local_var_2 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_1);
sc_biguint<4> local_var_4 = 0;
sc_biguint<4> local_var_5 = 0;
sc_biguint<4> local_var_6 = (local_var_4 + local_var_5);
auto local_var_7 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_6];
sc_biguint<2> local_var_8 = 2;
bool local_var_9 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_8);
auto local_var_11 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_6];
sc_biguint<2> local_var_12 = 1;
bool local_var_13 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_12);
auto local_var_15 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_6];
sc_biguint<2> local_var_16 = 0;
bool local_var_17 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_16);
auto local_var_19 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_6];
sc_biguint<20> local_var_20 = 0;
auto local_var_21 = (local_var_17) ? local_var_19 : local_var_20;
auto local_var_22 = (local_var_13) ? local_var_15 : local_var_21;
auto local_var_23 = (local_var_9) ? local_var_11 : local_var_22;
auto local_var_24 = (local_var_2) ? local_var_7 : local_var_23;
auto local_var_24_nxt_holder = local_var_24;
sc_biguint<2> local_var_25 = 3;
bool local_var_26 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_25);
sc_biguint<4> local_var_27 = 1;
sc_biguint<4> local_var_28 = 0;
sc_biguint<4> local_var_29 = (local_var_27 + local_var_28);
auto local_var_30 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_29];
sc_biguint<2> local_var_31 = 2;
bool local_var_32 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_31);
auto local_var_33 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_29];
sc_biguint<2> local_var_34 = 1;
bool local_var_35 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_34);
auto local_var_36 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_29];
sc_biguint<2> local_var_37 = 0;
bool local_var_38 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_37);
auto local_var_39 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_29];
sc_biguint<20> local_var_40 = 0;
auto local_var_41 = (local_var_38) ? local_var_39 : local_var_40;
auto local_var_42 = (local_var_35) ? local_var_36 : local_var_41;
auto local_var_43 = (local_var_32) ? local_var_33 : local_var_42;
auto local_var_44 = (local_var_26) ? local_var_30 : local_var_43;
auto local_var_44_nxt_holder = local_var_44;
sc_biguint<2> local_var_45 = 3;
bool local_var_46 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_45);
sc_biguint<4> local_var_47 = 10;
sc_biguint<4> local_var_48 = 0;
sc_biguint<4> local_var_49 = (local_var_47 + local_var_48);
auto local_var_50 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_49];
sc_biguint<2> local_var_51 = 2;
bool local_var_52 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_51);
auto local_var_53 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_49];
sc_biguint<2> local_var_54 = 1;
bool local_var_55 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_54);
auto local_var_56 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_49];
sc_biguint<2> local_var_57 = 0;
bool local_var_58 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_57);
auto local_var_59 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_49];
sc_biguint<20> local_var_60 = 0;
auto local_var_61 = (local_var_58) ? local_var_59 : local_var_60;
auto local_var_62 = (local_var_55) ? local_var_56 : local_var_61;
auto local_var_63 = (local_var_52) ? local_var_53 : local_var_62;
auto local_var_64 = (local_var_46) ? local_var_50 : local_var_63;
auto local_var_64_nxt_holder = local_var_64;
sc_biguint<2> local_var_65 = 3;
bool local_var_66 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_65);
sc_biguint<4> local_var_67 = 11;
sc_biguint<4> local_var_68 = 0;
sc_biguint<4> local_var_69 = (local_var_67 + local_var_68);
auto local_var_70 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_69];
sc_biguint<2> local_var_71 = 2;
bool local_var_72 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_71);
auto local_var_73 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_69];
sc_biguint<2> local_var_74 = 1;
bool local_var_75 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_74);
auto local_var_76 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_69];
sc_biguint<2> local_var_77 = 0;
bool local_var_78 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_77);
auto local_var_79 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_69];
sc_biguint<20> local_var_80 = 0;
auto local_var_81 = (local_var_78) ? local_var_79 : local_var_80;
auto local_var_82 = (local_var_75) ? local_var_76 : local_var_81;
auto local_var_83 = (local_var_72) ? local_var_73 : local_var_82;
auto local_var_84 = (local_var_66) ? local_var_70 : local_var_83;
auto local_var_84_nxt_holder = local_var_84;
sc_biguint<2> local_var_85 = 3;
bool local_var_86 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_85);
sc_biguint<4> local_var_87 = 12;
sc_biguint<4> local_var_88 = 0;
sc_biguint<4> local_var_89 = (local_var_87 + local_var_88);
auto local_var_90 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_89];
sc_biguint<2> local_var_91 = 2;
bool local_var_92 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_91);
auto local_var_93 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_89];
sc_biguint<2> local_var_94 = 1;
bool local_var_95 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_94);
auto local_var_96 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_89];
sc_biguint<2> local_var_97 = 0;
bool local_var_98 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_97);
auto local_var_99 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_89];
sc_biguint<20> local_var_100 = 0;
auto local_var_101 = (local_var_98) ? local_var_99 : local_var_100;
auto local_var_102 = (local_var_95) ? local_var_96 : local_var_101;
auto local_var_103 = (local_var_92) ? local_var_93 : local_var_102;
auto local_var_104 = (local_var_86) ? local_var_90 : local_var_103;
auto local_var_104_nxt_holder = local_var_104;
sc_biguint<2> local_var_105 = 3;
bool local_var_106 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_105);
sc_biguint<4> local_var_107 = 13;
sc_biguint<4> local_var_108 = 0;
sc_biguint<4> local_var_109 = (local_var_107 + local_var_108);
auto local_var_110 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_109];
sc_biguint<2> local_var_111 = 2;
bool local_var_112 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_111);
auto local_var_113 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_109];
sc_biguint<2> local_var_114 = 1;
bool local_var_115 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_114);
auto local_var_116 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_109];
sc_biguint<2> local_var_117 = 0;
bool local_var_118 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_117);
auto local_var_119 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_109];
sc_biguint<20> local_var_120 = 0;
auto local_var_121 = (local_var_118) ? local_var_119 : local_var_120;
auto local_var_122 = (local_var_115) ? local_var_116 : local_var_121;
auto local_var_123 = (local_var_112) ? local_var_113 : local_var_122;
auto local_var_124 = (local_var_106) ? local_var_110 : local_var_123;
auto local_var_124_nxt_holder = local_var_124;
sc_biguint<2> local_var_125 = 3;
bool local_var_126 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_125);
sc_biguint<4> local_var_127 = 14;
sc_biguint<4> local_var_128 = 0;
sc_biguint<4> local_var_129 = (local_var_127 + local_var_128);
auto local_var_130 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_129];
sc_biguint<2> local_var_131 = 2;
bool local_var_132 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_131);
auto local_var_133 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_129];
sc_biguint<2> local_var_134 = 1;
bool local_var_135 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_134);
auto local_var_136 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_129];
sc_biguint<2> local_var_137 = 0;
bool local_var_138 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_137);
auto local_var_139 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_129];
sc_biguint<20> local_var_140 = 0;
auto local_var_141 = (local_var_138) ? local_var_139 : local_var_140;
auto local_var_142 = (local_var_135) ? local_var_136 : local_var_141;
auto local_var_143 = (local_var_132) ? local_var_133 : local_var_142;
auto local_var_144 = (local_var_126) ? local_var_130 : local_var_143;
auto local_var_144_nxt_holder = local_var_144;
sc_biguint<2> local_var_145 = 3;
bool local_var_146 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_145);
sc_biguint<4> local_var_147 = 15;
sc_biguint<4> local_var_148 = 0;
sc_biguint<4> local_var_149 = (local_var_147 + local_var_148);
auto local_var_150 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_149];
sc_biguint<2> local_var_151 = 2;
bool local_var_152 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_151);
auto local_var_153 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_149];
sc_biguint<2> local_var_154 = 1;
bool local_var_155 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_154);
auto local_var_156 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_149];
sc_biguint<2> local_var_157 = 0;
bool local_var_158 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_157);
auto local_var_159 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_149];
sc_biguint<20> local_var_160 = 0;
auto local_var_161 = (local_var_158) ? local_var_159 : local_var_160;
auto local_var_162 = (local_var_155) ? local_var_156 : local_var_161;
auto local_var_163 = (local_var_152) ? local_var_153 : local_var_162;
auto local_var_164 = (local_var_146) ? local_var_150 : local_var_163;
auto local_var_164_nxt_holder = local_var_164;
sc_biguint<2> local_var_165 = 3;
bool local_var_166 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_165);
sc_biguint<4> local_var_167 = 2;
sc_biguint<4> local_var_168 = 0;
sc_biguint<4> local_var_169 = (local_var_167 + local_var_168);
auto local_var_170 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_169];
sc_biguint<2> local_var_171 = 2;
bool local_var_172 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_171);
auto local_var_173 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_169];
sc_biguint<2> local_var_174 = 1;
bool local_var_175 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_174);
auto local_var_176 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_169];
sc_biguint<2> local_var_177 = 0;
bool local_var_178 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_177);
auto local_var_179 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_169];
sc_biguint<20> local_var_180 = 0;
auto local_var_181 = (local_var_178) ? local_var_179 : local_var_180;
auto local_var_182 = (local_var_175) ? local_var_176 : local_var_181;
auto local_var_183 = (local_var_172) ? local_var_173 : local_var_182;
auto local_var_184 = (local_var_166) ? local_var_170 : local_var_183;
auto local_var_184_nxt_holder = local_var_184;
sc_biguint<2> local_var_185 = 3;
bool local_var_186 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_185);
sc_biguint<4> local_var_187 = 3;
sc_biguint<4> local_var_188 = 0;
sc_biguint<4> local_var_189 = (local_var_187 + local_var_188);
auto local_var_190 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_189];
sc_biguint<2> local_var_191 = 2;
bool local_var_192 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_191);
auto local_var_193 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_189];
sc_biguint<2> local_var_194 = 1;
bool local_var_195 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_194);
auto local_var_196 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_189];
sc_biguint<2> local_var_197 = 0;
bool local_var_198 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_197);
auto local_var_199 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_189];
sc_biguint<20> local_var_200 = 0;
auto local_var_201 = (local_var_198) ? local_var_199 : local_var_200;
auto local_var_202 = (local_var_195) ? local_var_196 : local_var_201;
auto local_var_203 = (local_var_192) ? local_var_193 : local_var_202;
auto local_var_204 = (local_var_186) ? local_var_190 : local_var_203;
auto local_var_204_nxt_holder = local_var_204;
sc_biguint<2> local_var_205 = 3;
bool local_var_206 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_205);
sc_biguint<4> local_var_207 = 4;
sc_biguint<4> local_var_208 = 0;
sc_biguint<4> local_var_209 = (local_var_207 + local_var_208);
auto local_var_210 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_209];
sc_biguint<2> local_var_211 = 2;
bool local_var_212 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_211);
auto local_var_213 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_209];
sc_biguint<2> local_var_214 = 1;
bool local_var_215 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_214);
auto local_var_216 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_209];
sc_biguint<2> local_var_217 = 0;
bool local_var_218 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_217);
auto local_var_219 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_209];
sc_biguint<20> local_var_220 = 0;
auto local_var_221 = (local_var_218) ? local_var_219 : local_var_220;
auto local_var_222 = (local_var_215) ? local_var_216 : local_var_221;
auto local_var_223 = (local_var_212) ? local_var_213 : local_var_222;
auto local_var_224 = (local_var_206) ? local_var_210 : local_var_223;
auto local_var_224_nxt_holder = local_var_224;
sc_biguint<2> local_var_225 = 3;
bool local_var_226 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_225);
sc_biguint<4> local_var_227 = 5;
sc_biguint<4> local_var_228 = 0;
sc_biguint<4> local_var_229 = (local_var_227 + local_var_228);
auto local_var_230 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_229];
sc_biguint<2> local_var_231 = 2;
bool local_var_232 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_231);
auto local_var_233 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_229];
sc_biguint<2> local_var_234 = 1;
bool local_var_235 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_234);
auto local_var_236 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_229];
sc_biguint<2> local_var_237 = 0;
bool local_var_238 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_237);
auto local_var_239 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_229];
sc_biguint<20> local_var_240 = 0;
auto local_var_241 = (local_var_238) ? local_var_239 : local_var_240;
auto local_var_242 = (local_var_235) ? local_var_236 : local_var_241;
auto local_var_243 = (local_var_232) ? local_var_233 : local_var_242;
auto local_var_244 = (local_var_226) ? local_var_230 : local_var_243;
auto local_var_244_nxt_holder = local_var_244;
sc_biguint<2> local_var_245 = 3;
bool local_var_246 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_245);
sc_biguint<4> local_var_247 = 6;
sc_biguint<4> local_var_248 = 0;
sc_biguint<4> local_var_249 = (local_var_247 + local_var_248);
auto local_var_250 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_249];
sc_biguint<2> local_var_251 = 2;
bool local_var_252 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_251);
auto local_var_253 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_249];
sc_biguint<2> local_var_254 = 1;
bool local_var_255 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_254);
auto local_var_256 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_249];
sc_biguint<2> local_var_257 = 0;
bool local_var_258 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_257);
auto local_var_259 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_249];
sc_biguint<20> local_var_260 = 0;
auto local_var_261 = (local_var_258) ? local_var_259 : local_var_260;
auto local_var_262 = (local_var_255) ? local_var_256 : local_var_261;
auto local_var_263 = (local_var_252) ? local_var_253 : local_var_262;
auto local_var_264 = (local_var_246) ? local_var_250 : local_var_263;
auto local_var_264_nxt_holder = local_var_264;
sc_biguint<2> local_var_265 = 3;
bool local_var_266 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_265);
sc_biguint<4> local_var_267 = 7;
sc_biguint<4> local_var_268 = 0;
sc_biguint<4> local_var_269 = (local_var_267 + local_var_268);
auto local_var_270 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_269];
sc_biguint<2> local_var_271 = 2;
bool local_var_272 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_271);
auto local_var_273 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_269];
sc_biguint<2> local_var_274 = 1;
bool local_var_275 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_274);
auto local_var_276 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_269];
sc_biguint<2> local_var_277 = 0;
bool local_var_278 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_277);
auto local_var_279 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_269];
sc_biguint<20> local_var_280 = 0;
auto local_var_281 = (local_var_278) ? local_var_279 : local_var_280;
auto local_var_282 = (local_var_275) ? local_var_276 : local_var_281;
auto local_var_283 = (local_var_272) ? local_var_273 : local_var_282;
auto local_var_284 = (local_var_266) ? local_var_270 : local_var_283;
auto local_var_284_nxt_holder = local_var_284;
sc_biguint<2> local_var_285 = 3;
bool local_var_286 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_285);
sc_biguint<4> local_var_287 = 8;
sc_biguint<4> local_var_288 = 0;
sc_biguint<4> local_var_289 = (local_var_287 + local_var_288);
auto local_var_290 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_289];
sc_biguint<2> local_var_291 = 2;
bool local_var_292 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_291);
auto local_var_293 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_289];
sc_biguint<2> local_var_294 = 1;
bool local_var_295 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_294);
auto local_var_296 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_289];
sc_biguint<2> local_var_297 = 0;
bool local_var_298 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_297);
auto local_var_299 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_289];
sc_biguint<20> local_var_300 = 0;
auto local_var_301 = (local_var_298) ? local_var_299 : local_var_300;
auto local_var_302 = (local_var_295) ? local_var_296 : local_var_301;
auto local_var_303 = (local_var_292) ? local_var_293 : local_var_302;
auto local_var_304 = (local_var_286) ? local_var_290 : local_var_303;
auto local_var_304_nxt_holder = local_var_304;
sc_biguint<2> local_var_305 = 3;
bool local_var_306 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_305);
sc_biguint<4> local_var_307 = 9;
sc_biguint<4> local_var_308 = 0;
sc_biguint<4> local_var_309 = (local_var_307 + local_var_308);
auto local_var_310 = PE3_ACT_CHILD_PE3_act_regs_3[local_var_309];
sc_biguint<2> local_var_311 = 2;
bool local_var_312 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_311);
auto local_var_313 = PE3_ACT_CHILD_PE3_act_regs_2[local_var_309];
sc_biguint<2> local_var_314 = 1;
bool local_var_315 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_314);
auto local_var_316 = PE3_ACT_CHILD_PE3_act_regs_1[local_var_309];
sc_biguint<2> local_var_317 = 0;
bool local_var_318 = (PE3_ACT_CHILD_pe3_act_reg_a1 == local_var_317);
auto local_var_319 = PE3_ACT_CHILD_PE3_act_regs_0[local_var_309];
sc_biguint<20> local_var_320 = 0;
auto local_var_321 = (local_var_318) ? local_var_319 : local_var_320;
auto local_var_322 = (local_var_315) ? local_var_316 : local_var_321;
auto local_var_323 = (local_var_312) ? local_var_313 : local_var_322;
auto local_var_324 = (local_var_306) ? local_var_310 : local_var_323;
auto local_var_324_nxt_holder = local_var_324;
sc_biguint<3> local_var_325 = 5;
auto local_var_325_nxt_holder = local_var_325;
PE3_ACT_CHILD_PE3_act_reg_temp_0 = local_var_24_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_1 = local_var_44_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_10 = local_var_64_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_11 = local_var_84_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_12 = local_var_104_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_13 = local_var_124_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_14 = local_var_144_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_15 = local_var_164_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_2 = local_var_184_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_3 = local_var_204_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_4 = local_var_224_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_5 = local_var_244_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_6 = local_var_264_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_7 = local_var_284_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_8 = local_var_304_nxt_holder;
PE3_ACT_CHILD_PE3_act_reg_temp_9 = local_var_324_nxt_holder;
PE3_ACT_CHILD_pe3_act_state = local_var_325_nxt_holder;
}

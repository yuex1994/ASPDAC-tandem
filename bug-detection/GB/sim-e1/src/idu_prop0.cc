#include <GBHigh.h>
bool GBHigh::decode_Propagate_prop0() {
uint1_t local_var_1 = 0;
bool local_var_2 = (GBHigh_arg_1_TREADY == local_var_1);
bool local_var_4 = (GBHigh_arg_0_TREADY == local_var_1);
bool local_var_5 = (local_var_2 & local_var_4);
uint1_t local_var_7 = 1;
bool local_var_8 = (GBHigh_st_ready == local_var_7);
bool local_var_9 = (local_var_5 & local_var_8);
auto& univ_var_2 = local_var_9;
return univ_var_2;
}
void GBHigh::update_Propagate_prop0() {
auto GBHigh_arg_0_TDATA_nxt_holder = GBHigh_arg_0_TDATA;
uint9_t local_var_2 = 0;
bool local_var_3 = (GBHigh_ram_x == local_var_2);
uint10_t local_var_5 = 0;
bool local_var_6 = (GBHigh_ram_y == local_var_5);
bool local_var_7 = (local_var_3 & local_var_6);
uint1_t local_var_8 = 0;
auto local_var_10 = (local_var_7) ? local_var_8 : GBHigh_arg_0_TVALID;
auto local_var_10_nxt_holder = local_var_10;
uint1_t local_var_11 = 1;
uint10_t local_var_12 = 8;
bool local_var_13 = (GBHigh_ram_y < local_var_12);
uint1_t local_var_14 = 0;
auto local_var_15 = (local_var_13) ? local_var_11 : local_var_14;
auto local_var_16 = (local_var_7) ? local_var_11 : local_var_15;
auto local_var_16_nxt_holder = local_var_16;
auto GBHigh_cur_pic_nxt_holder = GBHigh_cur_pic;
auto Propagate_proc_in_nxt_holder = Propagate_proc_in;
std::map<uint9_t, uint8_t> local_var_19;
ite_3(local_var_19);
std::map<uint9_t, uint8_t> local_var_20;
ite_5(local_var_20);
std::map<uint9_t, uint8_t> local_var_21;
ite_7(local_var_21);
std::map<uint9_t, uint8_t> local_var_22;
ite_9(local_var_22);
std::map<uint9_t, uint8_t> local_var_23;
ite_11(local_var_23);
std::map<uint9_t, uint8_t> local_var_24;
ite_13(local_var_24);
std::map<uint9_t, uint8_t> local_var_25;
ite_15(local_var_25);
std::map<uint9_t, uint8_t> local_var_26;
ite_17(local_var_26);
uint9_t local_var_27 = 488;
bool local_var_28 = (GBHigh_ram_x == local_var_27);
uint3_t local_var_30 = 7;
bool local_var_31 = (GBHigh_ram_w == local_var_30);
uint3_t local_var_32 = 0;
uint3_t local_var_33 = 1;
uint3_t local_var_34 = (GBHigh_ram_w + local_var_33);
auto local_var_35 = (local_var_31) ? local_var_32 : local_var_34;
auto local_var_36 = (local_var_28) ? local_var_35 : GBHigh_ram_w;
auto local_var_36_nxt_holder = local_var_36;
uint9_t local_var_37 = 1;
bool local_var_38 = (GBHigh_ram_x == local_var_27);
uint9_t local_var_39 = 1;
uint9_t local_var_40 = (GBHigh_ram_x + local_var_39);
auto local_var_41 = (local_var_38) ? local_var_37 : local_var_40;
auto local_var_42 = (local_var_7) ? local_var_37 : local_var_41;
auto local_var_42_nxt_holder = local_var_42;
bool local_var_43 = (GBHigh_ram_x == local_var_27);
uint10_t local_var_44 = 648;
bool local_var_45 = (GBHigh_ram_y == local_var_44);
uint10_t local_var_46 = 0;
uint10_t local_var_47 = 1;
uint10_t local_var_48 = (GBHigh_ram_y + local_var_47);
auto local_var_49 = (local_var_45) ? local_var_46 : local_var_48;
auto local_var_50 = (local_var_43) ? local_var_49 : GBHigh_ram_y;
auto local_var_50_nxt_holder = local_var_50;
auto local_var_51 = (local_var_13) ? local_var_11 : local_var_14;
auto local_var_52 = (local_var_7) ? local_var_11 : local_var_51;
auto local_var_52_nxt_holder = local_var_52;
auto GBHigh_stencil0_nxt_holder = GBHigh_stencil0;
auto GBHigh_stencil1_nxt_holder = GBHigh_stencil1;
auto GBHigh_stencil2_nxt_holder = GBHigh_stencil2;
auto GBHigh_stencil3_nxt_holder = GBHigh_stencil3;
auto GBHigh_stencil4_nxt_holder = GBHigh_stencil4;
auto GBHigh_stencil5_nxt_holder = GBHigh_stencil5;
auto GBHigh_stencil6_nxt_holder = GBHigh_stencil6;
auto GBHigh_stencil7_nxt_holder = GBHigh_stencil7;
uint10_t local_var_61 = 8;
bool local_var_62 = (GBHigh_ram_y < local_var_61);
uint3_t local_var_64 = 0;
bool local_var_65 = (GBHigh_ram_w == local_var_64);
uint9_t local_var_67 = 1;
uint9_t local_var_68 = (GBHigh_ram_x - local_var_67);
auto local_var_69 = GBHigh_ram0[local_var_68];
uint3_t local_var_70 = 1;
bool local_var_71 = (GBHigh_ram_w == local_var_70);
uint9_t local_var_73 = 1;
uint9_t local_var_74 = (GBHigh_ram_x - local_var_73);
auto local_var_75 = GBHigh_ram1[local_var_74];
uint3_t local_var_76 = 2;
bool local_var_77 = (GBHigh_ram_w == local_var_76);
uint9_t local_var_79 = 1;
uint9_t local_var_80 = (GBHigh_ram_x - local_var_79);
auto local_var_81 = GBHigh_ram2[local_var_80];
uint3_t local_var_82 = 3;
bool local_var_83 = (GBHigh_ram_w == local_var_82);
uint9_t local_var_85 = 1;
uint9_t local_var_86 = (GBHigh_ram_x - local_var_85);
auto local_var_87 = GBHigh_ram3[local_var_86];
uint3_t local_var_88 = 4;
bool local_var_89 = (GBHigh_ram_w == local_var_88);
uint9_t local_var_91 = 1;
uint9_t local_var_92 = (GBHigh_ram_x - local_var_91);
auto local_var_93 = GBHigh_ram4[local_var_92];
uint3_t local_var_94 = 5;
bool local_var_95 = (GBHigh_ram_w == local_var_94);
uint9_t local_var_97 = 1;
uint9_t local_var_98 = (GBHigh_ram_x - local_var_97);
auto local_var_99 = GBHigh_ram5[local_var_98];
uint3_t local_var_100 = 6;
bool local_var_101 = (GBHigh_ram_w == local_var_100);
uint9_t local_var_103 = 1;
uint9_t local_var_104 = (GBHigh_ram_x - local_var_103);
auto local_var_105 = GBHigh_ram6[local_var_104];
uint9_t local_var_107 = 1;
uint9_t local_var_108 = (GBHigh_ram_x - local_var_107);
auto local_var_109 = GBHigh_ram7[local_var_108];
auto local_var_110 = (local_var_101) ? local_var_105 : local_var_109;
auto local_var_111 = (local_var_95) ? local_var_99 : local_var_110;
auto local_var_112 = (local_var_89) ? local_var_93 : local_var_111;
auto local_var_113 = (local_var_83) ? local_var_87 : local_var_112;
auto local_var_114 = (local_var_77) ? local_var_81 : local_var_113;
auto local_var_115 = (local_var_71) ? local_var_75 : local_var_114;
auto local_var_116 = (local_var_65) ? local_var_69 : local_var_115;
uint3_t local_var_117 = 0;
bool local_var_118 = (GBHigh_ram_w == local_var_117);
uint9_t local_var_119 = 1;
uint9_t local_var_120 = (GBHigh_ram_x - local_var_119);
auto local_var_121 = GBHigh_ram1[local_var_120];
uint3_t local_var_122 = 1;
bool local_var_123 = (GBHigh_ram_w == local_var_122);
uint9_t local_var_124 = 1;
uint9_t local_var_125 = (GBHigh_ram_x - local_var_124);
auto local_var_126 = GBHigh_ram2[local_var_125];
uint3_t local_var_127 = 2;
bool local_var_128 = (GBHigh_ram_w == local_var_127);
uint9_t local_var_129 = 1;
uint9_t local_var_130 = (GBHigh_ram_x - local_var_129);
auto local_var_131 = GBHigh_ram3[local_var_130];
uint3_t local_var_132 = 3;
bool local_var_133 = (GBHigh_ram_w == local_var_132);
uint9_t local_var_134 = 1;
uint9_t local_var_135 = (GBHigh_ram_x - local_var_134);
auto local_var_136 = GBHigh_ram4[local_var_135];
uint3_t local_var_137 = 4;
bool local_var_138 = (GBHigh_ram_w == local_var_137);
uint9_t local_var_139 = 1;
uint9_t local_var_140 = (GBHigh_ram_x - local_var_139);
auto local_var_141 = GBHigh_ram5[local_var_140];
uint3_t local_var_142 = 5;
bool local_var_143 = (GBHigh_ram_w == local_var_142);
uint9_t local_var_144 = 1;
uint9_t local_var_145 = (GBHigh_ram_x - local_var_144);
auto local_var_146 = GBHigh_ram6[local_var_145];
uint3_t local_var_147 = 6;
bool local_var_148 = (GBHigh_ram_w == local_var_147);
uint9_t local_var_149 = 1;
uint9_t local_var_150 = (GBHigh_ram_x - local_var_149);
auto local_var_151 = GBHigh_ram7[local_var_150];
uint9_t local_var_152 = 1;
uint9_t local_var_153 = (GBHigh_ram_x - local_var_152);
auto local_var_154 = GBHigh_ram0[local_var_153];
auto local_var_155 = (local_var_148) ? local_var_151 : local_var_154;
auto local_var_156 = (local_var_143) ? local_var_146 : local_var_155;
auto local_var_157 = (local_var_138) ? local_var_141 : local_var_156;
auto local_var_158 = (local_var_133) ? local_var_136 : local_var_157;
auto local_var_159 = (local_var_128) ? local_var_131 : local_var_158;
auto local_var_160 = (local_var_123) ? local_var_126 : local_var_159;
auto local_var_161 = (local_var_118) ? local_var_121 : local_var_160;
uint3_t local_var_162 = 0;
bool local_var_163 = (GBHigh_ram_w == local_var_162);
uint9_t local_var_164 = 1;
uint9_t local_var_165 = (GBHigh_ram_x - local_var_164);
auto local_var_166 = GBHigh_ram2[local_var_165];
uint3_t local_var_167 = 1;
bool local_var_168 = (GBHigh_ram_w == local_var_167);
uint9_t local_var_169 = 1;
uint9_t local_var_170 = (GBHigh_ram_x - local_var_169);
auto local_var_171 = GBHigh_ram3[local_var_170];
uint3_t local_var_172 = 2;
bool local_var_173 = (GBHigh_ram_w == local_var_172);
uint9_t local_var_174 = 1;
uint9_t local_var_175 = (GBHigh_ram_x - local_var_174);
auto local_var_176 = GBHigh_ram4[local_var_175];
uint3_t local_var_177 = 3;
bool local_var_178 = (GBHigh_ram_w == local_var_177);
uint9_t local_var_179 = 1;
uint9_t local_var_180 = (GBHigh_ram_x - local_var_179);
auto local_var_181 = GBHigh_ram5[local_var_180];
uint3_t local_var_182 = 4;
bool local_var_183 = (GBHigh_ram_w == local_var_182);
uint9_t local_var_184 = 1;
uint9_t local_var_185 = (GBHigh_ram_x - local_var_184);
auto local_var_186 = GBHigh_ram6[local_var_185];
uint3_t local_var_187 = 5;
bool local_var_188 = (GBHigh_ram_w == local_var_187);
uint9_t local_var_189 = 1;
uint9_t local_var_190 = (GBHigh_ram_x - local_var_189);
auto local_var_191 = GBHigh_ram7[local_var_190];
uint3_t local_var_192 = 6;
bool local_var_193 = (GBHigh_ram_w == local_var_192);
uint9_t local_var_194 = 1;
uint9_t local_var_195 = (GBHigh_ram_x - local_var_194);
auto local_var_196 = GBHigh_ram0[local_var_195];
uint9_t local_var_197 = 1;
uint9_t local_var_198 = (GBHigh_ram_x - local_var_197);
auto local_var_199 = GBHigh_ram1[local_var_198];
auto local_var_200 = (local_var_193) ? local_var_196 : local_var_199;
auto local_var_201 = (local_var_188) ? local_var_191 : local_var_200;
auto local_var_202 = (local_var_183) ? local_var_186 : local_var_201;
auto local_var_203 = (local_var_178) ? local_var_181 : local_var_202;
auto local_var_204 = (local_var_173) ? local_var_176 : local_var_203;
auto local_var_205 = (local_var_168) ? local_var_171 : local_var_204;
auto local_var_206 = (local_var_163) ? local_var_166 : local_var_205;
uint3_t local_var_207 = 0;
bool local_var_208 = (GBHigh_ram_w == local_var_207);
uint9_t local_var_209 = 1;
uint9_t local_var_210 = (GBHigh_ram_x - local_var_209);
auto local_var_211 = GBHigh_ram3[local_var_210];
uint3_t local_var_212 = 1;
bool local_var_213 = (GBHigh_ram_w == local_var_212);
uint9_t local_var_214 = 1;
uint9_t local_var_215 = (GBHigh_ram_x - local_var_214);
auto local_var_216 = GBHigh_ram4[local_var_215];
uint3_t local_var_217 = 2;
bool local_var_218 = (GBHigh_ram_w == local_var_217);
uint9_t local_var_219 = 1;
uint9_t local_var_220 = (GBHigh_ram_x - local_var_219);
auto local_var_221 = GBHigh_ram5[local_var_220];
uint3_t local_var_222 = 3;
bool local_var_223 = (GBHigh_ram_w == local_var_222);
uint9_t local_var_224 = 1;
uint9_t local_var_225 = (GBHigh_ram_x - local_var_224);
auto local_var_226 = GBHigh_ram6[local_var_225];
uint3_t local_var_227 = 4;
bool local_var_228 = (GBHigh_ram_w == local_var_227);
uint9_t local_var_229 = 1;
uint9_t local_var_230 = (GBHigh_ram_x - local_var_229);
auto local_var_231 = GBHigh_ram7[local_var_230];
uint3_t local_var_232 = 5;
bool local_var_233 = (GBHigh_ram_w == local_var_232);
uint9_t local_var_234 = 1;
uint9_t local_var_235 = (GBHigh_ram_x - local_var_234);
auto local_var_236 = GBHigh_ram0[local_var_235];
uint3_t local_var_237 = 6;
bool local_var_238 = (GBHigh_ram_w == local_var_237);
uint9_t local_var_239 = 1;
uint9_t local_var_240 = (GBHigh_ram_x - local_var_239);
auto local_var_241 = GBHigh_ram1[local_var_240];
uint9_t local_var_242 = 1;
uint9_t local_var_243 = (GBHigh_ram_x - local_var_242);
auto local_var_244 = GBHigh_ram2[local_var_243];
auto local_var_245 = (local_var_238) ? local_var_241 : local_var_244;
auto local_var_246 = (local_var_233) ? local_var_236 : local_var_245;
auto local_var_247 = (local_var_228) ? local_var_231 : local_var_246;
auto local_var_248 = (local_var_223) ? local_var_226 : local_var_247;
auto local_var_249 = (local_var_218) ? local_var_221 : local_var_248;
auto local_var_250 = (local_var_213) ? local_var_216 : local_var_249;
auto local_var_251 = (local_var_208) ? local_var_211 : local_var_250;
uint3_t local_var_252 = 0;
bool local_var_253 = (GBHigh_ram_w == local_var_252);
uint9_t local_var_254 = 1;
uint9_t local_var_255 = (GBHigh_ram_x - local_var_254);
auto local_var_256 = GBHigh_ram4[local_var_255];
uint3_t local_var_257 = 1;
bool local_var_258 = (GBHigh_ram_w == local_var_257);
uint9_t local_var_259 = 1;
uint9_t local_var_260 = (GBHigh_ram_x - local_var_259);
auto local_var_261 = GBHigh_ram5[local_var_260];
uint3_t local_var_262 = 2;
bool local_var_263 = (GBHigh_ram_w == local_var_262);
uint9_t local_var_264 = 1;
uint9_t local_var_265 = (GBHigh_ram_x - local_var_264);
auto local_var_266 = GBHigh_ram6[local_var_265];
uint3_t local_var_267 = 3;
bool local_var_268 = (GBHigh_ram_w == local_var_267);
uint9_t local_var_269 = 1;
uint9_t local_var_270 = (GBHigh_ram_x - local_var_269);
auto local_var_271 = GBHigh_ram7[local_var_270];
uint3_t local_var_272 = 4;
bool local_var_273 = (GBHigh_ram_w == local_var_272);
uint9_t local_var_274 = 1;
uint9_t local_var_275 = (GBHigh_ram_x - local_var_274);
auto local_var_276 = GBHigh_ram0[local_var_275];
uint3_t local_var_277 = 5;
bool local_var_278 = (GBHigh_ram_w == local_var_277);
uint9_t local_var_279 = 1;
uint9_t local_var_280 = (GBHigh_ram_x - local_var_279);
auto local_var_281 = GBHigh_ram1[local_var_280];
uint3_t local_var_282 = 6;
bool local_var_283 = (GBHigh_ram_w == local_var_282);
uint9_t local_var_284 = 1;
uint9_t local_var_285 = (GBHigh_ram_x - local_var_284);
auto local_var_286 = GBHigh_ram2[local_var_285];
uint9_t local_var_287 = 1;
uint9_t local_var_288 = (GBHigh_ram_x - local_var_287);
auto local_var_289 = GBHigh_ram3[local_var_288];
auto local_var_290 = (local_var_283) ? local_var_286 : local_var_289;
auto local_var_291 = (local_var_278) ? local_var_281 : local_var_290;
auto local_var_292 = (local_var_273) ? local_var_276 : local_var_291;
auto local_var_293 = (local_var_268) ? local_var_271 : local_var_292;
auto local_var_294 = (local_var_263) ? local_var_266 : local_var_293;
auto local_var_295 = (local_var_258) ? local_var_261 : local_var_294;
auto local_var_296 = (local_var_253) ? local_var_256 : local_var_295;
uint3_t local_var_297 = 0;
bool local_var_298 = (GBHigh_ram_w == local_var_297);
uint9_t local_var_299 = 1;
uint9_t local_var_300 = (GBHigh_ram_x - local_var_299);
auto local_var_301 = GBHigh_ram5[local_var_300];
uint3_t local_var_302 = 1;
bool local_var_303 = (GBHigh_ram_w == local_var_302);
uint9_t local_var_304 = 1;
uint9_t local_var_305 = (GBHigh_ram_x - local_var_304);
auto local_var_306 = GBHigh_ram6[local_var_305];
uint3_t local_var_307 = 2;
bool local_var_308 = (GBHigh_ram_w == local_var_307);
uint9_t local_var_309 = 1;
uint9_t local_var_310 = (GBHigh_ram_x - local_var_309);
auto local_var_311 = GBHigh_ram7[local_var_310];
uint3_t local_var_312 = 3;
bool local_var_313 = (GBHigh_ram_w == local_var_312);
uint9_t local_var_314 = 1;
uint9_t local_var_315 = (GBHigh_ram_x - local_var_314);
auto local_var_316 = GBHigh_ram0[local_var_315];
uint3_t local_var_317 = 4;
bool local_var_318 = (GBHigh_ram_w == local_var_317);
uint9_t local_var_319 = 1;
uint9_t local_var_320 = (GBHigh_ram_x - local_var_319);
auto local_var_321 = GBHigh_ram1[local_var_320];
uint3_t local_var_322 = 5;
bool local_var_323 = (GBHigh_ram_w == local_var_322);
uint9_t local_var_324 = 1;
uint9_t local_var_325 = (GBHigh_ram_x - local_var_324);
auto local_var_326 = GBHigh_ram2[local_var_325];
uint3_t local_var_327 = 6;
bool local_var_328 = (GBHigh_ram_w == local_var_327);
uint9_t local_var_329 = 1;
uint9_t local_var_330 = (GBHigh_ram_x - local_var_329);
auto local_var_331 = GBHigh_ram3[local_var_330];
uint9_t local_var_332 = 1;
uint9_t local_var_333 = (GBHigh_ram_x - local_var_332);
auto local_var_334 = GBHigh_ram4[local_var_333];
auto local_var_335 = (local_var_328) ? local_var_331 : local_var_334;
auto local_var_336 = (local_var_323) ? local_var_326 : local_var_335;
auto local_var_337 = (local_var_318) ? local_var_321 : local_var_336;
auto local_var_338 = (local_var_313) ? local_var_316 : local_var_337;
auto local_var_339 = (local_var_308) ? local_var_311 : local_var_338;
auto local_var_340 = (local_var_303) ? local_var_306 : local_var_339;
auto local_var_341 = (local_var_298) ? local_var_301 : local_var_340;
uint3_t local_var_342 = 0;
bool local_var_343 = (GBHigh_ram_w == local_var_342);
uint9_t local_var_344 = 1;
uint9_t local_var_345 = (GBHigh_ram_x - local_var_344);
auto local_var_346 = GBHigh_ram6[local_var_345];
uint3_t local_var_347 = 1;
bool local_var_348 = (GBHigh_ram_w == local_var_347);
uint9_t local_var_349 = 1;
uint9_t local_var_350 = (GBHigh_ram_x - local_var_349);
auto local_var_351 = GBHigh_ram7[local_var_350];
uint3_t local_var_352 = 2;
bool local_var_353 = (GBHigh_ram_w == local_var_352);
uint9_t local_var_354 = 1;
uint9_t local_var_355 = (GBHigh_ram_x - local_var_354);
auto local_var_356 = GBHigh_ram0[local_var_355];
uint3_t local_var_357 = 3;
bool local_var_358 = (GBHigh_ram_w == local_var_357);
uint9_t local_var_359 = 1;
uint9_t local_var_360 = (GBHigh_ram_x - local_var_359);
auto local_var_361 = GBHigh_ram1[local_var_360];
uint3_t local_var_362 = 4;
bool local_var_363 = (GBHigh_ram_w == local_var_362);
uint9_t local_var_364 = 1;
uint9_t local_var_365 = (GBHigh_ram_x - local_var_364);
auto local_var_366 = GBHigh_ram2[local_var_365];
uint3_t local_var_367 = 5;
bool local_var_368 = (GBHigh_ram_w == local_var_367);
uint9_t local_var_369 = 1;
uint9_t local_var_370 = (GBHigh_ram_x - local_var_369);
auto local_var_371 = GBHigh_ram3[local_var_370];
uint3_t local_var_372 = 6;
bool local_var_373 = (GBHigh_ram_w == local_var_372);
uint9_t local_var_374 = 1;
uint9_t local_var_375 = (GBHigh_ram_x - local_var_374);
auto local_var_376 = GBHigh_ram4[local_var_375];
uint9_t local_var_377 = 1;
uint9_t local_var_378 = (GBHigh_ram_x - local_var_377);
auto local_var_379 = GBHigh_ram5[local_var_378];
auto local_var_380 = (local_var_373) ? local_var_376 : local_var_379;
auto local_var_381 = (local_var_368) ? local_var_371 : local_var_380;
auto local_var_382 = (local_var_363) ? local_var_366 : local_var_381;
auto local_var_383 = (local_var_358) ? local_var_361 : local_var_382;
auto local_var_384 = (local_var_353) ? local_var_356 : local_var_383;
auto local_var_385 = (local_var_348) ? local_var_351 : local_var_384;
auto local_var_386 = (local_var_343) ? local_var_346 : local_var_385;
uint3_t local_var_387 = 0;
bool local_var_388 = (GBHigh_ram_w == local_var_387);
uint9_t local_var_389 = 1;
uint9_t local_var_390 = (GBHigh_ram_x - local_var_389);
auto local_var_391 = GBHigh_ram7[local_var_390];
uint3_t local_var_392 = 1;
bool local_var_393 = (GBHigh_ram_w == local_var_392);
uint9_t local_var_394 = 1;
uint9_t local_var_395 = (GBHigh_ram_x - local_var_394);
auto local_var_396 = GBHigh_ram0[local_var_395];
uint3_t local_var_397 = 2;
bool local_var_398 = (GBHigh_ram_w == local_var_397);
uint9_t local_var_399 = 1;
uint9_t local_var_400 = (GBHigh_ram_x - local_var_399);
auto local_var_401 = GBHigh_ram1[local_var_400];
uint3_t local_var_402 = 3;
bool local_var_403 = (GBHigh_ram_w == local_var_402);
uint9_t local_var_404 = 1;
uint9_t local_var_405 = (GBHigh_ram_x - local_var_404);
auto local_var_406 = GBHigh_ram2[local_var_405];
uint3_t local_var_407 = 4;
bool local_var_408 = (GBHigh_ram_w == local_var_407);
uint9_t local_var_409 = 1;
uint9_t local_var_410 = (GBHigh_ram_x - local_var_409);
auto local_var_411 = GBHigh_ram3[local_var_410];
uint3_t local_var_412 = 5;
bool local_var_413 = (GBHigh_ram_w == local_var_412);
uint9_t local_var_414 = 1;
uint9_t local_var_415 = (GBHigh_ram_x - local_var_414);
auto local_var_416 = GBHigh_ram4[local_var_415];
uint3_t local_var_417 = 6;
bool local_var_418 = (GBHigh_ram_w == local_var_417);
uint9_t local_var_419 = 1;
uint9_t local_var_420 = (GBHigh_ram_x - local_var_419);
auto local_var_421 = GBHigh_ram5[local_var_420];
uint9_t local_var_422 = 1;
uint9_t local_var_423 = (GBHigh_ram_x - local_var_422);
auto local_var_424 = GBHigh_ram6[local_var_423];
auto local_var_425 = (local_var_418) ? local_var_421 : local_var_424;
auto local_var_426 = (local_var_413) ? local_var_416 : local_var_425;
auto local_var_427 = (local_var_408) ? local_var_411 : local_var_426;
auto local_var_428 = (local_var_403) ? local_var_406 : local_var_427;
auto local_var_429 = (local_var_398) ? local_var_401 : local_var_428;
auto local_var_430 = (local_var_393) ? local_var_396 : local_var_429;
auto local_var_431 = (local_var_388) ? local_var_391 : local_var_430;
univ_var_19 = (boost::numeric_cast<uint16_t>(local_var_431) << 8) + boost::numeric_cast<uint16_t>(Propagate_pre_pix);
univ_var_20 = (boost::numeric_cast<uint24_t>(local_var_386) << 16) + boost::numeric_cast<uint24_t>(univ_var_19);
univ_var_21 = (boost::numeric_cast<uint32_t>(local_var_341) << 24) + boost::numeric_cast<uint32_t>(univ_var_20);
univ_var_22 = (boost::numeric_cast<uint40_t>(local_var_296) << 32) + boost::numeric_cast<uint40_t>(univ_var_21);
univ_var_23 = (boost::numeric_cast<uint48_t>(local_var_251) << 40) + boost::numeric_cast<uint48_t>(univ_var_22);
univ_var_24 = (boost::numeric_cast<uint56_t>(local_var_206) << 48) + boost::numeric_cast<uint56_t>(univ_var_23);
univ_var_25 = (boost::numeric_cast<uint64_t>(local_var_161) << 56) + boost::numeric_cast<uint64_t>(univ_var_24);
univ_var_26 = (boost::numeric_cast<uint72_t>(local_var_116) << 64) + boost::numeric_cast<uint72_t>(univ_var_25);
auto local_var_441 = (local_var_62) ? GBHigh_stencil8 : univ_var_26;
auto local_var_441_nxt_holder = local_var_441;
GBHigh_arg_0_TDATA = GBHigh_arg_0_TDATA_nxt_holder;
GBHigh_arg_0_TVALID = local_var_10_nxt_holder;
GBHigh_arg_1_TREADY = local_var_16_nxt_holder;
GBHigh_cur_pic = GBHigh_cur_pic_nxt_holder;
Propagate_pre_pix = GBHigh_cur_pic_nxt_holder;
Propagate_proc_in = Propagate_proc_in_nxt_holder;
for (auto& it : local_var_19) {
  GBHigh_ram0[it.first] = it.second;
}
for (auto& it : local_var_20) {
  GBHigh_ram1[it.first] = it.second;
}
for (auto& it : local_var_21) {
  GBHigh_ram2[it.first] = it.second;
}
for (auto& it : local_var_22) {
  GBHigh_ram3[it.first] = it.second;
}
for (auto& it : local_var_23) {
  GBHigh_ram4[it.first] = it.second;
}
for (auto& it : local_var_24) {
  GBHigh_ram5[it.first] = it.second;
}
for (auto& it : local_var_25) {
  GBHigh_ram6[it.first] = it.second;
}
for (auto& it : local_var_26) {
  GBHigh_ram7[it.first] = it.second;
}
GBHigh_ram_w = local_var_36_nxt_holder;
GBHigh_ram_x = local_var_42_nxt_holder;
GBHigh_ram_y = local_var_50_nxt_holder;
GBHigh_st_ready = local_var_52_nxt_holder;
GBHigh_stencil0 = GBHigh_stencil0_nxt_holder;
GBHigh_stencil1 = GBHigh_stencil1_nxt_holder;
GBHigh_stencil2 = GBHigh_stencil2_nxt_holder;
GBHigh_stencil3 = GBHigh_stencil3_nxt_holder;
GBHigh_stencil4 = GBHigh_stencil4_nxt_holder;
GBHigh_stencil5 = GBHigh_stencil5_nxt_holder;
GBHigh_stencil6 = GBHigh_stencil6_nxt_holder;
GBHigh_stencil7 = GBHigh_stencil7_nxt_holder;
GBHigh_stencil8 = local_var_441_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "prop0 state updates:" << std::endl;
instr_update_log << "    GBHigh_arg_0_TDATA => " << std::hex << "0x" << GBHigh_arg_0_TDATA << std::endl; 
instr_update_log << "    GBHigh_arg_0_TVALID => " << std::hex << "0x" << GBHigh_arg_0_TVALID << std::endl; 
instr_update_log << "    GBHigh_arg_1_TREADY => " << std::hex << "0x" << GBHigh_arg_1_TREADY << std::endl; 
instr_update_log << "    GBHigh_cur_pic => " << std::hex << "0x" << GBHigh_cur_pic << std::endl; 
instr_update_log << "    Propagate_pre_pix => " << std::hex << "0x" << Propagate_pre_pix << std::endl; 
instr_update_log << "    Propagate_proc_in => " << std::hex << "0x" << Propagate_proc_in << std::endl; 
instr_update_log << "    GBHigh_ram0 get updated" << std::endl;
instr_update_log << "    GBHigh_ram1 get updated" << std::endl;
instr_update_log << "    GBHigh_ram2 get updated" << std::endl;
instr_update_log << "    GBHigh_ram3 get updated" << std::endl;
instr_update_log << "    GBHigh_ram4 get updated" << std::endl;
instr_update_log << "    GBHigh_ram5 get updated" << std::endl;
instr_update_log << "    GBHigh_ram6 get updated" << std::endl;
instr_update_log << "    GBHigh_ram7 get updated" << std::endl;
instr_update_log << "    GBHigh_ram_w => " << std::hex << "0x" << GBHigh_ram_w << std::endl; 
instr_update_log << "    GBHigh_ram_x => " << std::hex << "0x" << GBHigh_ram_x << std::endl; 
instr_update_log << "    GBHigh_ram_y => " << std::hex << "0x" << GBHigh_ram_y << std::endl; 
instr_update_log << "    GBHigh_st_ready => " << std::hex << "0x" << GBHigh_st_ready << std::endl; 
instr_update_log << "    GBHigh_stencil0 => " << std::hex << "0x" << GBHigh_stencil0 << std::endl; 
instr_update_log << "    GBHigh_stencil1 => " << std::hex << "0x" << GBHigh_stencil1 << std::endl; 
instr_update_log << "    GBHigh_stencil2 => " << std::hex << "0x" << GBHigh_stencil2 << std::endl; 
instr_update_log << "    GBHigh_stencil3 => " << std::hex << "0x" << GBHigh_stencil3 << std::endl; 
instr_update_log << "    GBHigh_stencil4 => " << std::hex << "0x" << GBHigh_stencil4 << std::endl; 
instr_update_log << "    GBHigh_stencil5 => " << std::hex << "0x" << GBHigh_stencil5 << std::endl; 
instr_update_log << "    GBHigh_stencil6 => " << std::hex << "0x" << GBHigh_stencil6 << std::endl; 
instr_update_log << "    GBHigh_stencil7 => " << std::hex << "0x" << GBHigh_stencil7 << std::endl; 
instr_update_log << "    GBHigh_stencil8 => " << std::hex << "0x" << GBHigh_stencil8 << std::endl; 
instr_update_log << std::endl;
#endif
}

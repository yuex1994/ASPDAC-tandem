/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_inst,
__VLG_I_dummy_read_rf,
__r0_pvholder_init__,
__r1_pvholder_init__,
__r2_pvholder_init__,
__r3_pvholder_init__,
clk,
dummy_reset,
rst,
__ILA_SO_r0,
__ILA_SO_r1,
__ILA_SO_r2,
__ILA_SO_r3,
__VLG_O_dummy_rf_data,
__m10__,
__m11__,
__m13__,
__m14__,
__m16__,
__m17__,
__m19__,
__m1__,
__m20__,
__m22__,
__m23__,
__m2__,
__m4__,
__m5__,
__m7__,
__m8__,
invariant_assume__m25__,
invariant_assume__m26__,
invariant_assume__m27__,
invariant_assume__m28__,
invariant_assume__m29__,
invariant_assume__m30__,
invariant_assume__m31__,
invariant_assume__m32__,
invariant_assume__m33__,
invariant_assume__m34__,
invariant_assume__m35__,
invariant_assume__m36__,
invariant_assume__m37__,
invariant_assume__m38__,
invariant_assume__m39__,
invariant_assume__m40__,
issue_decode__m41__,
issue_valid__m42__,
m1__DOT__ex_wb_rd,
m1__DOT__ex_wb_reg_wen,
m1__DOT__ex_wb_val,
m1__DOT__id_ex_rd,
m1__DOT__id_ex_reg_wen,
m1__DOT__reg_0_w_stage,
m1__DOT__reg_1_w_stage,
m1__DOT__reg_2_w_stage,
m1__DOT__reg_3_w_stage,
m1__DOT__registers_0_,
m1__DOT__registers_1_,
m1__DOT__registers_2_,
m1__DOT__registers_3_,
noreset__m0__,
post_value_holder__m43__,
post_value_holder__m44__,
post_value_holder__m45__,
post_value_holder__m46__,
post_value_holder__m47__,
variable_map_assert__p15__,
variable_map_assert__p18__,
variable_map_assert__p21__,
variable_map_assert__p24__,
variable_map_assume___m12__,
variable_map_assume___m3__,
variable_map_assume___m6__,
variable_map_assume___m9__,
__CYCLE_CNT__,
__START__,
__STARTED__,
__ENDED__,
__2ndENDED__,
__RESETED__,
r0_pvholder,
r1_pvholder,
r2_pvholder,
r3_pvholder,
delay_wb_write,
ref_test,
stage_tracker
);
input      [7:0] __ILA_I_inst;
input      [1:0] __VLG_I_dummy_read_rf;
input      [7:0] __r0_pvholder_init__;
input      [7:0] __r1_pvholder_init__;
input      [7:0] __r2_pvholder_init__;
input      [7:0] __r3_pvholder_init__;
input            clk;
input            dummy_reset;
input            rst;
output      [7:0] __ILA_SO_r0;
output      [7:0] __ILA_SO_r1;
output      [7:0] __ILA_SO_r2;
output      [7:0] __ILA_SO_r3;
output      [7:0] __VLG_O_dummy_rf_data;
output            __m10__;
output            __m11__;
output            __m13__;
output            __m14__;
output            __m16__;
output            __m17__;
output            __m19__;
output            __m1__;
output            __m20__;
output            __m22__;
output            __m23__;
output            __m2__;
output            __m4__;
output            __m5__;
output            __m7__;
output            __m8__;
output            invariant_assume__m25__;
output            invariant_assume__m26__;
output            invariant_assume__m27__;
output            invariant_assume__m28__;
output            invariant_assume__m29__;
output            invariant_assume__m30__;
output            invariant_assume__m31__;
output            invariant_assume__m32__;
output            invariant_assume__m33__;
output            invariant_assume__m34__;
output            invariant_assume__m35__;
output            invariant_assume__m36__;
output            invariant_assume__m37__;
output            invariant_assume__m38__;
output            invariant_assume__m39__;
output            invariant_assume__m40__;
output            issue_decode__m41__;
output            issue_valid__m42__;
output      [1:0] m1__DOT__ex_wb_rd;
output            m1__DOT__ex_wb_reg_wen;
output      [7:0] m1__DOT__ex_wb_val;
output      [1:0] m1__DOT__id_ex_rd;
output            m1__DOT__id_ex_reg_wen;
output      [1:0] m1__DOT__reg_0_w_stage;
output      [1:0] m1__DOT__reg_1_w_stage;
output      [1:0] m1__DOT__reg_2_w_stage;
output      [1:0] m1__DOT__reg_3_w_stage;
output      [7:0] m1__DOT__registers_0_;
output      [7:0] m1__DOT__registers_1_;
output      [7:0] m1__DOT__registers_2_;
output      [7:0] m1__DOT__registers_3_;
output            noreset__m0__;
output            post_value_holder__m43__;
output            post_value_holder__m44__;
output            post_value_holder__m45__;
output            post_value_holder__m46__;
output            post_value_holder__m47__;
output            variable_map_assert__p15__;
output            variable_map_assert__p18__;
output            variable_map_assert__p21__;
output            variable_map_assert__p24__;
output            variable_map_assume___m12__;
output            variable_map_assume___m3__;
output            variable_map_assume___m6__;
output            variable_map_assume___m9__;
output reg      [7:0] __CYCLE_CNT__;
output reg            __START__;
output reg            __STARTED__;
output reg            __ENDED__;
output reg            __2ndENDED__;
output reg            __RESETED__;
output reg      [7:0] r0_pvholder;
output reg      [7:0] r1_pvholder;
output reg      [7:0] r2_pvholder;
output reg      [7:0] r3_pvholder;
output reg      [7:0] delay_wb_write;
output reg      [1:0] ref_test;
output reg      [1:0] stage_tracker;
wire            __2ndIEND__;
(* keep *) wire            __EDCOND__;
(* keep *) wire            __IEND__;
(* keep *) wire      [7:0] __ILA_I_inst;
(* keep *) wire      [7:0] __ILA_SO_r0;
(* keep *) wire      [7:0] __ILA_SO_r1;
(* keep *) wire      [7:0] __ILA_SO_r2;
(* keep *) wire      [7:0] __ILA_SO_r3;
(* keep *) wire            __ILA_simplePipe_decode_of_NOP__;
(* keep *) wire            __ILA_simplePipe_valid__;
(* keep *) wire            __ISSUE__;
(* keep *) wire      [1:0] __VLG_I_dummy_read_rf;
(* keep *) wire      [7:0] __VLG_O_dummy_rf_data;
(* keep *) wire            __m10__;
(* keep *) wire            __m11__;
(* keep *) wire            __m13__;
(* keep *) wire            __m14__;
(* keep *) wire            __m16__;
(* keep *) wire            __m17__;
(* keep *) wire            __m19__;
(* keep *) wire            __m1__;
(* keep *) wire            __m20__;
(* keep *) wire            __m22__;
(* keep *) wire            __m23__;
(* keep *) wire            __m2__;
(* keep *) wire            __m4__;
(* keep *) wire            __m5__;
(* keep *) wire            __m7__;
(* keep *) wire            __m8__;
wire      [7:0] __r0_pvholder_init__;
wire      [7:0] __r1_pvholder_init__;
wire      [7:0] __r2_pvholder_init__;
wire      [7:0] __r3_pvholder_init__;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire            invariant_assume__m25__;
(* keep *) wire            invariant_assume__m26__;
(* keep *) wire            invariant_assume__m27__;
(* keep *) wire            invariant_assume__m28__;
(* keep *) wire            invariant_assume__m29__;
(* keep *) wire            invariant_assume__m30__;
(* keep *) wire            invariant_assume__m31__;
(* keep *) wire            invariant_assume__m32__;
(* keep *) wire            invariant_assume__m33__;
(* keep *) wire            invariant_assume__m34__;
(* keep *) wire            invariant_assume__m35__;
(* keep *) wire            invariant_assume__m36__;
(* keep *) wire            invariant_assume__m37__;
(* keep *) wire            invariant_assume__m38__;
(* keep *) wire            invariant_assume__m39__;
(* keep *) wire            invariant_assume__m40__;
(* keep *) wire            issue_decode__m41__;
(* keep *) wire            issue_valid__m42__;
(* keep *) wire      [1:0] m1__DOT__ex_wb_rd;
(* keep *) wire            m1__DOT__ex_wb_reg_wen;
(* keep *) wire      [7:0] m1__DOT__ex_wb_val;
(* keep *) wire      [1:0] m1__DOT__id_ex_rd;
(* keep *) wire            m1__DOT__id_ex_reg_wen;
(* keep *) wire      [1:0] m1__DOT__reg_0_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_1_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_2_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_3_w_stage;
(* keep *) wire      [7:0] m1__DOT__registers_0_;
(* keep *) wire      [7:0] m1__DOT__registers_1_;
(* keep *) wire      [7:0] m1__DOT__registers_2_;
(* keep *) wire      [7:0] m1__DOT__registers_3_;
(* keep *) wire            noreset__m0__;
(* keep *) wire            post_value_holder__m43__;
(* keep *) wire            post_value_holder__m44__;
(* keep *) wire            post_value_holder__m45__;
(* keep *) wire            post_value_holder__m46__;
(* keep *) wire            post_value_holder__m47__;
wire            rst;
(* keep *) wire            variable_map_assert__p15__;
(* keep *) wire            variable_map_assert__p18__;
(* keep *) wire            variable_map_assert__p21__;
(* keep *) wire            variable_map_assert__p24__;
(* keep *) wire            variable_map_assume___m12__;
(* keep *) wire            variable_map_assume___m3__;
(* keep *) wire            variable_map_assume___m6__;
(* keep *) wire            variable_map_assume___m9__;
assign noreset__m0__ =  (~__RESETED__) || (dummy_reset == 0)  ;
always @(posedge clk) begin
if (rst) __CYCLE_CNT__ <= 0;
else if ( ( __START__ || __STARTED__ ) &&  __CYCLE_CNT__ < 132) __CYCLE_CNT__ <= __CYCLE_CNT__ + 1;
end
always @(posedge clk) begin
if (rst) __START__ <= 0;
else if (__START__ || __STARTED__) __START__ <= 0;
else if (__ISSUE__) __START__ <= 1;
end
always @(posedge clk) begin
if (rst) __STARTED__ <= 0;
else if (__START__) __STARTED__ <= 1;
end
always @(posedge clk) begin
if (rst) __ENDED__ <= 0;
else if (__IEND__) __ENDED__ <= 1;
end
always @(posedge clk) begin
if (rst) __2ndENDED__ <= 1'b0;
else if (__ENDED__ && __EDCOND__ && ~__2ndENDED__)  __2ndENDED__ <= 1'b1; end
assign __2ndIEND__ = __ENDED__ && __EDCOND__ && ~__2ndENDED__ ;
always @(posedge clk) begin
if (rst) __RESETED__ <= 1;
end
assign __m1__ = r0_pvholder == __ILA_SO_r0 ;
assign __m2__ = m1__DOT__registers_0_ == __ILA_SO_r0 ;
assign variable_map_assume___m3__ = (~ __START__ )|| ((~ ((__START__) ) || (__m1__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m2__))) ;
assign __m4__ = r1_pvholder == __ILA_SO_r1 ;
assign __m5__ = m1__DOT__registers_1_ == __ILA_SO_r1 ;
assign variable_map_assume___m6__ = (~ __START__ )|| ((~ ((__START__) ) || (__m4__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m5__))) ;
assign __m7__ = r2_pvholder == __ILA_SO_r2 ;
assign __m8__ = m1__DOT__registers_2_ == __ILA_SO_r2 ;
assign variable_map_assume___m9__ = (~ __START__ )|| ((~ ((__START__) ) || (__m7__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m8__))) ;
assign __m10__ = r3_pvholder == __ILA_SO_r3 ;
assign __m11__ = m1__DOT__registers_3_ == __ILA_SO_r3 ;
assign variable_map_assume___m12__ = (~ __START__ )|| ((~ ((__START__) ) || (__m10__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m11__))) ;
assign __m13__ = r0_pvholder == __ILA_SO_r0 ;
assign __m14__ = m1__DOT__registers_0_ == __ILA_SO_r0 ;
assign variable_map_assert__p15__ = (~ __IEND__) || ((~ ((__START__) ) || (__m13__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m14__))) ;
assign __m16__ = r1_pvholder == __ILA_SO_r1 ;
assign __m17__ = m1__DOT__registers_1_ == __ILA_SO_r1 ;
assign variable_map_assert__p18__ = (~ __IEND__) || ((~ ((__START__) ) || (__m16__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m17__))) ;
assign __m19__ = r2_pvholder == __ILA_SO_r2 ;
assign __m20__ = m1__DOT__registers_2_ == __ILA_SO_r2 ;
assign variable_map_assert__p21__ = (~ __IEND__) || ((~ ((__START__) ) || (__m19__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m20__))) ;
assign __m22__ = r3_pvholder == __ILA_SO_r3 ;
assign __m23__ = m1__DOT__registers_3_ == __ILA_SO_r3 ;
assign variable_map_assert__p24__ = (~ __IEND__) || ((~ ((__START__) ) || (__m22__) )&&( ~ (~(__START__)&&(1'b1) ) || (__m23__))) ;
assign invariant_assume__m25__ = (! (m1__DOT__reg_0_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd0) ) ) ;
assign invariant_assume__m26__ = (! (m1__DOT__reg_1_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd1) ) ) ;
assign invariant_assume__m27__ = (! (m1__DOT__reg_2_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd2) ) ) ;
assign invariant_assume__m28__ = (! (m1__DOT__reg_3_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd3) ) ) ;
assign invariant_assume__m29__ = (! (m1__DOT__reg_0_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd0) ) ) ;
assign invariant_assume__m30__ = (! (m1__DOT__reg_1_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd1) ) ) ;
assign invariant_assume__m31__ = (! (m1__DOT__reg_2_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd2) ) ) ;
assign invariant_assume__m32__ = (! (m1__DOT__reg_3_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd3) ) ) ;
assign invariant_assume__m33__ = (! (m1__DOT__reg_0_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd0) ) ) ;
assign invariant_assume__m34__ = (! (m1__DOT__reg_1_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd1) ) ) ;
assign invariant_assume__m35__ = (! (m1__DOT__reg_2_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd2) ) ) ;
assign invariant_assume__m36__ = (! (m1__DOT__reg_3_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd3) ) ) ;
assign invariant_assume__m37__ = (! (m1__DOT__reg_0_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd0) ) ) ;
assign invariant_assume__m38__ = (! (m1__DOT__reg_1_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd1) ) ) ;
assign invariant_assume__m39__ = (! (m1__DOT__reg_2_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd2) ) ) ;
assign invariant_assume__m40__ = (! (m1__DOT__reg_3_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd3) ) ) ;
assign __EDCOND__ = (`false || (stage_tracker == 2)) && __STARTED__  ;
assign __IEND__ = (`false || (stage_tracker == 2)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign issue_decode__m41__ = (~ __START__) || (__ILA_simplePipe_decode_of_NOP__) ;
assign issue_valid__m42__ = (~ __START__) || (__ILA_simplePipe_valid__) ;
assign __ISSUE__ = 1 ;
assign post_value_holder__m43__ = (~(stage_tracker == 1 && 1 == 0) || ((r0_pvholder) == (m1__DOT__registers_0_))) ;
assign post_value_holder__m44__ = (~(stage_tracker == 1 && 1 == 1) || ((r0_pvholder) == (m1__DOT__registers_0_))) ;
assign post_value_holder__m45__ = (~(stage_tracker == 1) || ((r1_pvholder) == (m1__DOT__registers_1_))) ;
assign post_value_holder__m46__ = (~(stage_tracker == 1) || ((r2_pvholder) == (m1__DOT__registers_2_))) ;
assign post_value_holder__m47__ = (~(stage_tracker == 1) || ((r3_pvholder) == (m1__DOT__registers_3_))) ;
always @(posedge clk) begin
  delay_wb_write <= m1__DOT__ex_wb_val;
end

always @(posedge clk) begin
  if (__START__) ref_test <= 0;
  else if (__STARTED__ && !__ENDED__ && stage_tracker == 1) ref_test <= m1__DOT__registers_0_ + 1;
end

always @(posedge clk) begin
  if (__START__) stage_tracker <= 0;
  else if (__STARTED__ && !__ENDED__) stage_tracker <= stage_tracker + 1;
end


simplePipe__DOT__NOP m0 (
   .__START__(__START__),
   .clk(clk),
   .inst(__ILA_I_inst),
   .rst(rst),
   .__ILA_simplePipe_decode_of_NOP__(__ILA_simplePipe_decode_of_NOP__),
   .__ILA_simplePipe_valid__(__ILA_simplePipe_valid__),
   .r0(__ILA_SO_r0),
   .r1(__ILA_SO_r1),
   .r2(__ILA_SO_r2),
   .r3(__ILA_SO_r3),
   .__COUNTER_start__n3()
);
pipeline_v m1(
    .clk(clk),
    .dummy_read_rf(__VLG_I_dummy_read_rf),
    .dummy_rf_data(__VLG_O_dummy_rf_data),
    .inst(__ILA_I_inst),
    .m1__DOT__ex_wb_rd(m1__DOT__ex_wb_rd),
    .m1__DOT__ex_wb_reg_wen(m1__DOT__ex_wb_reg_wen),
    .m1__DOT__ex_wb_val(m1__DOT__ex_wb_val),
    .m1__DOT__id_ex_rd(m1__DOT__id_ex_rd),
    .m1__DOT__id_ex_reg_wen(m1__DOT__id_ex_reg_wen),
    .m1__DOT__reg_0_w_stage(m1__DOT__reg_0_w_stage),
    .m1__DOT__reg_1_w_stage(m1__DOT__reg_1_w_stage),
    .m1__DOT__reg_2_w_stage(m1__DOT__reg_2_w_stage),
    .m1__DOT__reg_3_w_stage(m1__DOT__reg_3_w_stage),
    .m1__DOT__registers_0_(m1__DOT__registers_0_),
    .m1__DOT__registers_1_(m1__DOT__registers_1_),
    .m1__DOT__registers_2_(m1__DOT__registers_2_),
    .m1__DOT__registers_3_(m1__DOT__registers_3_),
    .rst(dummy_reset)
);
always @(posedge clk) begin
   if(rst) begin
       r0_pvholder <= __r0_pvholder_init__;
       r0_pvholder <= __r0_pvholder_init__;
       r1_pvholder <= __r1_pvholder_init__;
       r2_pvholder <= __r2_pvholder_init__;
       r3_pvholder <= __r3_pvholder_init__;
   end
   else if(1) begin
       r0_pvholder <= r0_pvholder;
       r0_pvholder <= r0_pvholder;
       r1_pvholder <= r1_pvholder;
       r2_pvholder <= r2_pvholder;
       r3_pvholder <= r3_pvholder;
   end
end
endmodule
module simplePipe__DOT__NOP(
__START__,
clk,
inst,
rst,
__ILA_simplePipe_decode_of_NOP__,
__ILA_simplePipe_valid__,
r0,
r1,
r2,
r3,
__COUNTER_start__n3
);
input            __START__;
input            clk;
input      [7:0] inst;
input            rst;
output            __ILA_simplePipe_decode_of_NOP__;
output            __ILA_simplePipe_valid__;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] __COUNTER_start__n3;
wire            __ILA_simplePipe_decode_of_NOP__;
wire            __ILA_simplePipe_valid__;
wire            __START__;
wire      [1:0] bv_2_0_n1;
wire            clk;
wire      [7:0] inst;
wire      [1:0] n0;
wire            n2;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
wire            rst;
assign __ILA_simplePipe_valid__ = 1'b1 ;
assign n0 = inst[7:6] ;
assign bv_2_0_n1 = 2'h0 ;
assign n2 =  ( n0 ) == ( bv_2_0_n1 )  ;
assign __ILA_simplePipe_decode_of_NOP__ = n2 ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       __COUNTER_start__n3 <= 0;
   end
   else if(__START__ && __ILA_simplePipe_valid__) begin
       if ( __ILA_simplePipe_decode_of_NOP__ ) begin 
           __COUNTER_start__n3 <= 1; end
       else if( (__COUNTER_start__n3 >= 1 ) && ( __COUNTER_start__n3 < 255 )) begin
           __COUNTER_start__n3 <= __COUNTER_start__n3 + 1; end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r0 <= r0 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r1 <= r1 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r2 <= r2 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r3 <= r3 ;
       end
   end
end
endmodule
`default_nettype none

// Hongce Zhang @ Princeton
// A simple pipelined processor
// that can only do add/sub/nop/and
// with only 4 registers
// for simplicity, we even make the instruction part
// as input
// 2-bit op, 2-bit rs1, 2-bit rs2, 2-bit rd
// -- ID --|-- EX --|-- WB
//    ^          |      |
//    |          |      |
//    -------------------
// forwarding

`define  OP_NOP 2'b00
`define  OP_ADD 2'b01
`define  OP_SUB 2'b10
`define  OP_AND 2'b11

module pipeline_v(input clk, input rst, input [7:0] inst, input [1:0] dummy_read_rf, output [7:0] dummy_rf_data 
, output wire [1:0] m1__DOT__ex_wb_rd, output wire  m1__DOT__ex_wb_reg_wen, output wire [7:0] m1__DOT__ex_wb_val, output wire [1:0] m1__DOT__id_ex_rd, output wire  m1__DOT__id_ex_reg_wen, output wire [1:0] m1__DOT__reg_0_w_stage, output wire [1:0] m1__DOT__reg_1_w_stage, output wire [1:0] m1__DOT__reg_2_w_stage, output wire [1:0] m1__DOT__reg_3_w_stage, output wire [7:0] m1__DOT__registers_0_, output wire [7:0] m1__DOT__registers_1_, output wire [7:0] m1__DOT__registers_2_, output wire [7:0] m1__DOT__registers_3_);

wire [1:0] op; 
wire [1:0] rs1;
wire [1:0] rs2;
wire [1:0] rd; 
wire id_wen;

// main pipeline
reg [7:0] id_ex_rs1_val;
reg [7:0] id_ex_rs2_val;
reg [1:0] id_ex_op;
(* keep *) reg [1:0] id_ex_rd;
(* keep *) reg       id_ex_reg_wen;

wire[7:0] ex_alu_result;
(* keep *) reg [7:0] ex_wb_val;
(* keep *) reg [1:0] ex_wb_rd;
(* keep *) reg       ex_wb_reg_wen;

(* keep *) reg [7:0] registers[3:0];

// -----------------------------------------------------------
// simple score board : track where are the writes
// -0-0- no where that writes, no fw
// -0-1- fw from WB
// -1-0- fw from EX
// -1-1- fw from EX
(* keep *) reg [1:0] reg_0_w_stage;
(* keep *) reg [1:0] reg_1_w_stage;
(* keep *) reg [1:0] reg_2_w_stage;
(* keep *) reg [1:0] reg_3_w_stage;
wire [1:0] reg_0_w_stage_nxt = {1'b0, reg_0_w_stage[1]};
wire [1:0] reg_1_w_stage_nxt = {1'b0, reg_1_w_stage[1]};// reg_1_w_stage >> 1;
wire [1:0] reg_2_w_stage_nxt = {1'b0, reg_2_w_stage[1]};// reg_2_w_stage >> 1;
wire [1:0] reg_3_w_stage_nxt = {1'b0, reg_3_w_stage[1]};// reg_3_w_stage >> 1;

//-------------------------------------------------------------------
// ID


wire [7:0] id_rs1_val;
wire [7:0] id_rs2_val;

wire [1:0] rs1_stage_info;
wire [1:0] rs2_stage_info;
wire [7:0] rs1_val;
wire [7:0] rs2_val;

//-------------------------------------------------------------------

assign op = inst[7:6];
assign rs1= inst[5:4];
assign rs2= inst[3:2];
assign rd = inst[1:0];
assign id_wen = op == `OP_ADD || op == `OP_SUB || op == `OP_AND;

assign dummy_rf_data =  dummy_read_rf == 0 ? registers[0] : 
                        dummy_read_rf == 1 ? registers[1] : 
                        dummy_read_rf == 2 ? registers[2] : 
                            registers[3];



// -----------------------------------------------------------
// simple score board : track where are the writes
always @(posedge clk) begin
    if (rst) 
        // reset
        reg_0_w_stage <= 2'b0;
    else  begin
        if(id_wen && rd == 0)
            reg_0_w_stage <= reg_0_w_stage_nxt | 2'b10;
        else
            reg_0_w_stage <= reg_0_w_stage_nxt;
    end
end

always @(posedge clk) begin
    if (rst) 
        // reset
        reg_1_w_stage <= 2'b0;
    else  begin
        if(id_wen && rd == 1)
            reg_1_w_stage <= reg_1_w_stage_nxt | 2'b10;
        else
            reg_1_w_stage <= reg_1_w_stage_nxt;
    end
end

always @(posedge clk) begin
    if (rst) 
        // reset
        reg_2_w_stage <= 2'b0;
    else  begin
        if(id_wen && rd == 2)
            reg_2_w_stage <= reg_2_w_stage_nxt | 2'b10;
        else
            reg_2_w_stage <= reg_2_w_stage_nxt;
    end
end

always @(posedge clk) begin
    if (rst) 
        // reset
        reg_3_w_stage <= 2'b0;
    else  begin
        if(id_wen && rd == 3)
            reg_3_w_stage <= reg_3_w_stage_nxt | 2'b10;
        else
            reg_3_w_stage <= reg_3_w_stage_nxt;
    end
end

// -----------------------------------------------------------
// ID
// forwarding

assign rs1_stage_info = rs1 == 2'd0 ? reg_0_w_stage : 
                            rs1 == 2'd1 ? reg_1_w_stage : 
                            rs1 == 2'd2 ? reg_2_w_stage : 
                                       reg_3_w_stage ;

assign rs2_stage_info = rs2 == 2'd0 ? reg_0_w_stage : 
                            rs2 == 2'd1 ? reg_1_w_stage : 
                            rs2 == 2'd2 ? reg_2_w_stage : 
                                       reg_3_w_stage ;


assign rs1_val =        rs1 == 2'd0 ? registers[0] :
                        rs1 == 2'd1 ? registers[1] :
                        rs1 == 2'd2 ? registers[2] :
                            registers[3];
assign rs2_val =    rs2 == 2'd0 ? registers[0] :
                        rs2 == 2'd1 ? registers[1] :
                        rs2 == 2'd2 ? registers[2] :
                            registers[3];

assign id_rs1_val = rs1_stage_info == 2'b00 ? rs1_val :
                    rs1_stage_info == 2'b01 ? ex_wb_val :
                    ex_alu_result ; // 10/11

assign id_rs2_val = rs2_stage_info == 2'b00 ? rs2_val :
                    rs2_stage_info == 2'b01 ? ex_wb_val :
                    ex_alu_result ; // 10/11

always @(posedge clk) begin
    if(rst) begin
        id_ex_reg_wen <= 1'b0;
    end
    else begin
        id_ex_op <= op;
        id_ex_reg_wen <= id_wen;
        id_ex_rd <= rd;
        id_ex_rs1_val <= id_rs1_val;
        id_ex_rs2_val <= id_rs2_val;
    end
end
// EX

assign ex_alu_result =  id_ex_op == `OP_ADD ? id_ex_rs1_val + id_ex_rs2_val :
                        id_ex_op == `OP_SUB ? id_ex_rs1_val - id_ex_rs2_val :
                        id_ex_op == `OP_AND ? id_ex_rs1_val & id_ex_rs2_val :
                        8'bxxxxxxxx;

always @(posedge clk) begin
    if (rst) begin
        // reset
        ex_wb_reg_wen <= 1'b0;
    end
    else begin
        ex_wb_reg_wen <= id_ex_reg_wen;
        ex_wb_val <= ex_alu_result;
        ex_wb_rd <= id_ex_rd;
    end
end

// WB
always @(posedge clk ) begin
    if (rst) begin
        // reset
        registers[0] <= 8'd0;
        registers[1] <= 8'd0;
        registers[2] <= 8'd0;
        registers[3] <= 8'd0;
    end
    else if (ex_wb_reg_wen) begin
        case (ex_wb_rd)
        2'd0: registers[0] <= ex_wb_val;
        2'd1: registers[1] <= ex_wb_val;
        2'd2: registers[2] <= ex_wb_val;
        2'd3: registers[3] <= ex_wb_val;
        default: registers[0] <= ex_wb_val; // nouse
        endcase
    end
end

/*inner_assign_list*/

 assign m1__DOT__registers_3_ = registers[3];
 assign m1__DOT__registers_2_ = registers[2];
 assign m1__DOT__registers_1_ = registers[1];
 assign m1__DOT__registers_0_ = registers[0];
 assign m1__DOT__reg_3_w_stage = reg_3_w_stage;
 assign m1__DOT__reg_2_w_stage = reg_2_w_stage;
 assign m1__DOT__reg_1_w_stage = reg_1_w_stage;
 assign m1__DOT__reg_0_w_stage = reg_0_w_stage;
 assign m1__DOT__id_ex_reg_wen = id_ex_reg_wen;
 assign m1__DOT__id_ex_rd = id_ex_rd;
 assign m1__DOT__ex_wb_val = ex_wb_val;
 assign m1__DOT__ex_wb_reg_wen = ex_wb_reg_wen;
 assign m1__DOT__ex_wb_rd = ex_wb_rd;
endmodule

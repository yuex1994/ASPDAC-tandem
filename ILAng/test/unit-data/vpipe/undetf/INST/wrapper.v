/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__VLG_I_d,
__nondet8_1_0_result_reg_init__,
__nondet8_1_1_result_reg_init__,
__nondet8_2_0_result_reg_init__,
__nondet8_2_1_result_reg_init__,
clk,
dummy_reset,
nondet8_1_0_result_wire,
nondet8_1_1_result_wire,
nondet8_2_0_result_wire,
nondet8_2_1_result_wire,
rst,
__ILA_SO_r0,
__ILA_SO_r1,
__ILA_SO_r2,
__ILA_SO_r3,
__ILA_SO_r4,
__m11__,
__m13__,
__m15__,
__m17__,
__m19__,
__m1__,
__m3__,
__m5__,
__m7__,
__m9__,
func_result__m27__,
func_result__m28__,
func_result__m29__,
func_result__m30__,
funcmap__m23__,
funcmap__m24__,
funcmap__m25__,
funcmap__m26__,
issue_decode__m21__,
issue_valid__m22__,
m1__DOT__r0,
m1__DOT__r1,
m1__DOT__r2,
m1__DOT__r3,
m1__DOT__r4,
m1__DOT__res1,
m1__DOT__res3,
m1__DOT__res4,
m1__DOT__res5,
noreset__m0__,
variable_map_assert__p12__,
variable_map_assert__p14__,
variable_map_assert__p16__,
variable_map_assert__p18__,
variable_map_assert__p20__,
variable_map_assume___m10__,
variable_map_assume___m2__,
variable_map_assume___m4__,
variable_map_assume___m6__,
variable_map_assume___m8__,
__CYCLE_CNT__,
__START__,
__STARTED__,
__ENDED__,
__2ndENDED__,
__RESETED__,
nondet8_1_0_result_reg,
nondet8_1_1_result_reg,
nondet8_2_0_result_reg,
nondet8_2_1_result_reg
);
input      [7:0] __VLG_I_d;
input      [7:0] __nondet8_1_0_result_reg_init__;
input      [7:0] __nondet8_1_1_result_reg_init__;
input      [7:0] __nondet8_2_0_result_reg_init__;
input      [7:0] __nondet8_2_1_result_reg_init__;
input            clk;
input            dummy_reset;
input      [7:0] nondet8_1_0_result_wire;
input      [7:0] nondet8_1_1_result_wire;
input      [7:0] nondet8_2_0_result_wire;
input      [7:0] nondet8_2_1_result_wire;
input            rst;
output      [7:0] __ILA_SO_r0;
output      [7:0] __ILA_SO_r1;
output      [7:0] __ILA_SO_r2;
output      [7:0] __ILA_SO_r3;
output      [7:0] __ILA_SO_r4;
output            __m11__;
output            __m13__;
output            __m15__;
output            __m17__;
output            __m19__;
output            __m1__;
output            __m3__;
output            __m5__;
output            __m7__;
output            __m9__;
output            func_result__m27__;
output            func_result__m28__;
output            func_result__m29__;
output            func_result__m30__;
output            funcmap__m23__;
output            funcmap__m24__;
output            funcmap__m25__;
output            funcmap__m26__;
output            issue_decode__m21__;
output            issue_valid__m22__;
output      [7:0] m1__DOT__r0;
output      [7:0] m1__DOT__r1;
output      [7:0] m1__DOT__r2;
output      [7:0] m1__DOT__r3;
output      [7:0] m1__DOT__r4;
output      [7:0] m1__DOT__res1;
output      [7:0] m1__DOT__res3;
output      [7:0] m1__DOT__res4;
output      [7:0] m1__DOT__res5;
output            noreset__m0__;
output            variable_map_assert__p12__;
output            variable_map_assert__p14__;
output            variable_map_assert__p16__;
output            variable_map_assert__p18__;
output            variable_map_assert__p20__;
output            variable_map_assume___m10__;
output            variable_map_assume___m2__;
output            variable_map_assume___m4__;
output            variable_map_assume___m6__;
output            variable_map_assume___m8__;
output reg      [3:0] __CYCLE_CNT__;
output reg            __START__;
output reg            __STARTED__;
output reg            __ENDED__;
output reg            __2ndENDED__;
output reg            __RESETED__;
output reg      [7:0] nondet8_1_0_result_reg;
output reg      [7:0] nondet8_1_1_result_reg;
output reg      [7:0] nondet8_2_0_result_reg;
output reg      [7:0] nondet8_2_1_result_reg;
wire            __2ndIEND__;
(* keep *) wire            __EDCOND__;
(* keep *) wire            __IEND__;
(* keep *) wire      [7:0] __ILA_SO_r0;
(* keep *) wire      [7:0] __ILA_SO_r1;
(* keep *) wire      [7:0] __ILA_SO_r2;
(* keep *) wire      [7:0] __ILA_SO_r3;
(* keep *) wire      [7:0] __ILA_SO_r4;
(* keep *) wire            __ILA_undetval_decode_of_INST__;
(* keep *) wire            __ILA_undetval_valid__;
(* keep *) wire            __ISSUE__;
(* keep *) wire      [7:0] __VLG_I_d;
(* keep *) wire            __m11__;
(* keep *) wire            __m13__;
(* keep *) wire            __m15__;
(* keep *) wire            __m17__;
(* keep *) wire            __m19__;
(* keep *) wire            __m1__;
(* keep *) wire            __m3__;
(* keep *) wire            __m5__;
(* keep *) wire            __m7__;
(* keep *) wire            __m9__;
wire      [7:0] __nondet8_1_0_result_reg_init__;
wire      [7:0] __nondet8_1_1_result_reg_init__;
wire      [7:0] __nondet8_2_0_result_reg_init__;
wire      [7:0] __nondet8_2_1_result_reg_init__;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire            func_result__m27__;
(* keep *) wire            func_result__m28__;
(* keep *) wire            func_result__m29__;
(* keep *) wire            func_result__m30__;
(* keep *) wire            funcmap__m23__;
(* keep *) wire            funcmap__m24__;
(* keep *) wire            funcmap__m25__;
(* keep *) wire            funcmap__m26__;
(* keep *) wire            issue_decode__m21__;
(* keep *) wire            issue_valid__m22__;
(* keep *) wire      [7:0] m1__DOT__r0;
(* keep *) wire      [7:0] m1__DOT__r1;
(* keep *) wire      [7:0] m1__DOT__r2;
(* keep *) wire      [7:0] m1__DOT__r3;
(* keep *) wire      [7:0] m1__DOT__r4;
(* keep *) wire      [7:0] m1__DOT__res1;
(* keep *) wire      [7:0] m1__DOT__res3;
(* keep *) wire      [7:0] m1__DOT__res4;
(* keep *) wire      [7:0] m1__DOT__res5;
(* keep *) wire      [7:0] nondet8_1_0_result_wire;
(* keep *) wire      [7:0] nondet8_1_1_result_wire;
(* keep *) wire      [7:0] nondet8_2_0_result_wire;
(* keep *) wire      [7:0] nondet8_2_1_result_wire;
(* keep *) wire            noreset__m0__;
wire            rst;
(* keep *) wire            variable_map_assert__p12__;
(* keep *) wire            variable_map_assert__p14__;
(* keep *) wire            variable_map_assert__p16__;
(* keep *) wire            variable_map_assert__p18__;
(* keep *) wire            variable_map_assert__p20__;
(* keep *) wire            variable_map_assume___m10__;
(* keep *) wire            variable_map_assume___m2__;
(* keep *) wire            variable_map_assume___m4__;
(* keep *) wire            variable_map_assume___m6__;
(* keep *) wire            variable_map_assume___m8__;
assign noreset__m0__ =  (~__RESETED__) || (dummy_reset == 0)  ;
always @(posedge clk) begin
if (rst) __CYCLE_CNT__ <= 0;
else if ( ( __START__ || __STARTED__ ) &&  __CYCLE_CNT__ < 6) __CYCLE_CNT__ <= __CYCLE_CNT__ + 1;
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
assign __m1__ = m1__DOT__r0 == __ILA_SO_r0 ;
assign variable_map_assume___m2__ = (~ __START__ )|| (__m1__) ;
assign __m3__ = m1__DOT__r1 == __ILA_SO_r1 ;
assign variable_map_assume___m4__ = (~ __START__ )|| (__m3__) ;
assign __m5__ = m1__DOT__r2 == __ILA_SO_r2 ;
assign variable_map_assume___m6__ = (~ __START__ )|| (__m5__) ;
assign __m7__ = m1__DOT__r3 == __ILA_SO_r3 ;
assign variable_map_assume___m8__ = (~ __START__ )|| (__m7__) ;
assign __m9__ = m1__DOT__r4 == __ILA_SO_r4 ;
assign variable_map_assume___m10__ = (~ __START__ )|| (__m9__) ;
assign __m11__ = m1__DOT__r0 == __ILA_SO_r0 ;
assign variable_map_assert__p12__ = (~ __IEND__) || (__m11__) ;
assign __m13__ = m1__DOT__r1 == __ILA_SO_r1 ;
assign variable_map_assert__p14__ = (~ __IEND__) || (__m13__) ;
assign __m15__ = m1__DOT__r2 == __ILA_SO_r2 ;
assign variable_map_assert__p16__ = (~ __IEND__) || (__m15__) ;
assign __m17__ = m1__DOT__r3 == __ILA_SO_r3 ;
assign variable_map_assert__p18__ = (~ __IEND__) || (__m17__) ;
assign __m19__ = m1__DOT__r4 == __ILA_SO_r4 ;
assign variable_map_assert__p20__ = (~ __IEND__) || (__m19__) ;
assign __EDCOND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__  ;
assign __IEND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign issue_decode__m21__ = (~ __START__) || (__ILA_undetval_decode_of_INST__) ;
assign issue_valid__m22__ = (~ __START__) || (__ILA_undetval_valid__) ;
assign __ISSUE__ = 1 ;
assign funcmap__m23__ = ~(`true) || (~(__START__)||(nondet8_1_0_result_reg==m1__DOT__res1)) ;
assign funcmap__m24__ = ~(`true) || (~(__START__)||(nondet8_1_1_result_reg==m1__DOT__res3)) ;
assign funcmap__m25__ = ~(`true) || (~(__START__)||(nondet8_2_0_result_reg==m1__DOT__res4)) ;
assign funcmap__m26__ = ~(`true) || (~(__START__)||(nondet8_2_1_result_reg==m1__DOT__res5)) ;

assign func_result__m27__ = (~(__START__) || ((nondet8_1_0_result_reg) == (nondet8_1_0_result_wire))) ;
assign func_result__m28__ = (~(__START__) || ((nondet8_1_1_result_reg) == (nondet8_1_1_result_wire))) ;
assign func_result__m29__ = (~(__START__) || ((nondet8_2_0_result_reg) == (nondet8_2_0_result_wire))) ;
assign func_result__m30__ = (~(__START__) || ((nondet8_2_1_result_reg) == (nondet8_2_1_result_wire))) ;
undetval__DOT__INST m0 (
   .nondet_nondet8_1_n1(nondet8_1_0_result_wire),
   .nondet_nondet8_1_n7(nondet8_1_1_result_wire),
   .nondet_nondet8_2_n11(nondet8_2_0_result_wire),
   .nondet_nondet8_2_n15(nondet8_2_1_result_wire),
   .__START__(__START__),
   .clk(clk),
   .rst(rst),
   .__ILA_undetval_decode_of_INST__(__ILA_undetval_decode_of_INST__),
   .__ILA_undetval_valid__(__ILA_undetval_valid__),
   .r0(__ILA_SO_r0),
   .r1(__ILA_SO_r1),
   .r2(__ILA_SO_r2),
   .r3(__ILA_SO_r3),
   .r4(__ILA_SO_r4),
   .__COUNTER_start__n0()
);
undetval m1(
    .clk(clk),
    .d(__VLG_I_d),
    .m1__DOT__r0(m1__DOT__r0),
    .m1__DOT__r1(m1__DOT__r1),
    .m1__DOT__r2(m1__DOT__r2),
    .m1__DOT__r3(m1__DOT__r3),
    .m1__DOT__r4(m1__DOT__r4),
    .m1__DOT__res1(m1__DOT__res1),
    .m1__DOT__res3(m1__DOT__res3),
    .m1__DOT__res4(m1__DOT__res4),
    .m1__DOT__res5(m1__DOT__res5),
    .rst(dummy_reset)
);
always @(posedge clk) begin
   if(rst) begin
       nondet8_1_0_result_reg <= __nondet8_1_0_result_reg_init__;
       nondet8_1_1_result_reg <= __nondet8_1_1_result_reg_init__;
       nondet8_2_0_result_reg <= __nondet8_2_0_result_reg_init__;
       nondet8_2_1_result_reg <= __nondet8_2_1_result_reg_init__;
   end
   else if(1) begin
       nondet8_1_0_result_reg <= nondet8_1_0_result_reg;
       nondet8_1_1_result_reg <= nondet8_1_1_result_reg;
       nondet8_2_0_result_reg <= nondet8_2_0_result_reg;
       nondet8_2_1_result_reg <= nondet8_2_1_result_reg;
   end
end
endmodule
module undetval__DOT__INST(
__START__,
clk,
nondet_nondet8_1_n1,
nondet_nondet8_1_n7,
nondet_nondet8_2_n11,
nondet_nondet8_2_n15,
rst,
__ILA_undetval_decode_of_INST__,
__ILA_undetval_valid__,
r0,
r1,
r2,
r3,
r4,
__COUNTER_start__n0
);
input            __START__;
input            clk;
input      [7:0] nondet_nondet8_1_n1;
input      [7:0] nondet_nondet8_1_n7;
input      [7:0] nondet_nondet8_2_n11;
input      [7:0] nondet_nondet8_2_n15;
input            rst;
output            __ILA_undetval_decode_of_INST__;
output            __ILA_undetval_valid__;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] r4;
output reg      [7:0] __COUNTER_start__n0;
wire            __ILA_undetval_decode_of_INST__;
wire            __ILA_undetval_valid__;
wire            __START__;
wire      [7:0] bv_8_1_n3;
wire      [7:0] bv_8_2_n5;
wire      [7:0] bv_8_3_n9;
wire      [7:0] bv_8_4_n13;
wire      [7:0] bv_8_5_n17;
wire            clk;
wire      [7:0] n10;
wire      [7:0] n12;
wire      [7:0] n14;
wire      [7:0] n16;
wire      [7:0] n18;
wire      [7:0] n2;
wire      [7:0] n4;
wire      [7:0] n6;
wire      [7:0] n8;
wire      [7:0] nondet_nondet8_1_n1;
wire      [7:0] nondet_nondet8_1_n7;
wire      [7:0] nondet_nondet8_2_n11;
wire      [7:0] nondet_nondet8_2_n15;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
(* keep *) wire      [7:0] r4_randinit;
wire            rst;
assign __ILA_undetval_valid__ = 1'b1 ;
assign __ILA_undetval_decode_of_INST__ = 1'b1 ;
assign n2 = nondet_nondet8_1_n1 ;
assign bv_8_1_n3 = 8'h1 ;
assign n4 =  ( n2 ) + ( bv_8_1_n3 )  ;
assign bv_8_2_n5 = 8'h2 ;
assign n6 =  ( n2 ) + ( bv_8_2_n5 )  ;
assign n8 = nondet_nondet8_1_n7 ;
assign bv_8_3_n9 = 8'h3 ;
assign n10 =  ( n8 ) + ( bv_8_3_n9 )  ;
assign n12 = nondet_nondet8_2_n11 ;
assign bv_8_4_n13 = 8'h4 ;
assign n14 =  ( n12 ) + ( bv_8_4_n13 )  ;
assign n16 = nondet_nondet8_2_n15 ;
assign bv_8_5_n17 = 8'h5 ;
assign n18 =  ( n16 ) + ( bv_8_5_n17 )  ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       r4 <= r4_randinit ;
       __COUNTER_start__n0 <= 0;
   end
   else if(__START__ && __ILA_undetval_valid__) begin
       if ( __ILA_undetval_decode_of_INST__ ) begin 
           __COUNTER_start__n0 <= 1; end
       else if( (__COUNTER_start__n0 >= 1 ) && ( __COUNTER_start__n0 < 255 )) begin
           __COUNTER_start__n0 <= __COUNTER_start__n0 + 1; end
       if (__ILA_undetval_decode_of_INST__) begin
           r0 <= n4 ;
       end
       if (__ILA_undetval_decode_of_INST__) begin
           r1 <= n6 ;
       end
       if (__ILA_undetval_decode_of_INST__) begin
           r2 <= n10 ;
       end
       if (__ILA_undetval_decode_of_INST__) begin
           r3 <= n14 ;
       end
       if (__ILA_undetval_decode_of_INST__) begin
           r4 <= n18 ;
       end
   end
end
endmodule
module undetval(input clk, input rst, input [7:0] d, output wire [7:0] m1__DOT__r0, output wire [7:0] m1__DOT__r1, output wire [7:0] m1__DOT__r2, output wire [7:0] m1__DOT__r3, output wire [7:0] m1__DOT__r4, output wire [7:0] m1__DOT__res1, output wire [7:0] m1__DOT__res3, output wire [7:0] m1__DOT__res4, output wire [7:0] m1__DOT__res5);

(* keep *) reg [7:0] r0;
(* keep *) reg [7:0] r1;
(* keep *) reg [7:0] r2;
(* keep *) reg [7:0] r3;
(* keep *) reg [7:0] r4;


(* keep *) wire [7:0] res1;
wire [7:0] res2;
(* keep *) wire [7:0] res3;
(* keep *) wire [7:0] res4;
(* keep *) wire [7:0] res5;

assign res1 = d;
assign res2 = d;
assign res3 = d + 1;
assign res4 = d << 2;
assign res5 = d << 3;


always @(posedge clk) begin 
  r0 <= res1 + 1;
  r1 <= res2 + 2;
  r2 <= res3 + 3;
  r3 <= res4 + 4;
  r4 <= res5 + 5;
end

 assign m1__DOT__res5 = res5;
 assign m1__DOT__res4 = res4;
 assign m1__DOT__res3 = res3;
 assign m1__DOT__res1 = res1;
 assign m1__DOT__r4 = r4;
 assign m1__DOT__r3 = r3;
 assign m1__DOT__r2 = r2;
 assign m1__DOT__r1 = r1;
 assign m1__DOT__r0 = r0;
endmodule

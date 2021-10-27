/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_en,
__VLG_I_ukn,
____unknown__2_0_result_reg_init__,
____unknown__2_1_result_reg_init__,
__unknown__2_0_result_wire,
__unknown__2_1_result_wire,
clk,
dummy_reset,
rst,
__ILA_SO_r0,
__ILA_SO_r1,
__ILA_SO_r2,
__ILA_SO_r3,
__ite_ukn_cond_n2,
__ite_ukn_cond_n8,
__m11__,
__m13__,
__m15__,
__m1__,
__m3__,
__m5__,
__m7__,
__m9__,
func_result__m19__,
func_result__m20__,
issue_decode__m17__,
issue_valid__m18__,
m1__DOT__r0,
m1__DOT__r1,
m1__DOT__r2,
m1__DOT__r3,
noreset__m0__,
variable_map_assert__p10__,
variable_map_assert__p12__,
variable_map_assert__p14__,
variable_map_assert__p16__,
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
__unknown__2_0_result_reg,
__unknown__2_1_result_reg
);
input            __ILA_I_en;
input      [7:0] __VLG_I_ukn;
input      [7:0] ____unknown__2_0_result_reg_init__;
input      [7:0] ____unknown__2_1_result_reg_init__;
input      [7:0] __unknown__2_0_result_wire;
input      [7:0] __unknown__2_1_result_wire;
input            clk;
input            dummy_reset;
input            rst;
output      [7:0] __ILA_SO_r0;
output      [7:0] __ILA_SO_r1;
output      [7:0] __ILA_SO_r2;
output      [7:0] __ILA_SO_r3;
output            __ite_ukn_cond_n2;
output            __ite_ukn_cond_n8;
output            __m11__;
output            __m13__;
output            __m15__;
output            __m1__;
output            __m3__;
output            __m5__;
output            __m7__;
output            __m9__;
output            func_result__m19__;
output            func_result__m20__;
output            issue_decode__m17__;
output            issue_valid__m18__;
output      [7:0] m1__DOT__r0;
output      [7:0] m1__DOT__r1;
output      [7:0] m1__DOT__r2;
output      [7:0] m1__DOT__r3;
output            noreset__m0__;
output            variable_map_assert__p10__;
output            variable_map_assert__p12__;
output            variable_map_assert__p14__;
output            variable_map_assert__p16__;
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
output reg      [7:0] __unknown__2_0_result_reg;
output reg      [7:0] __unknown__2_1_result_reg;
wire            __2ndIEND__;
(* keep *) wire            __EDCOND__;
(* keep *) wire            __IEND__;
(* keep *) wire            __ILA_I_en;
(* keep *) wire      [7:0] __ILA_SO_r0;
(* keep *) wire      [7:0] __ILA_SO_r1;
(* keep *) wire      [7:0] __ILA_SO_r2;
(* keep *) wire      [7:0] __ILA_SO_r3;
(* keep *) wire            __ILA_undetfunc_decode_of_INST__;
(* keep *) wire            __ILA_undetfunc_valid__;
(* keep *) wire            __ISSUE__;
(* keep *) wire      [7:0] __VLG_I_ukn;
wire      [7:0] ____unknown__2_0_result_reg_init__;
wire      [7:0] ____unknown__2_1_result_reg_init__;
(* keep *) wire            __ite_ukn_cond_n2;
(* keep *) wire            __ite_ukn_cond_n8;
(* keep *) wire            __m11__;
(* keep *) wire            __m13__;
(* keep *) wire            __m15__;
(* keep *) wire            __m1__;
(* keep *) wire            __m3__;
(* keep *) wire            __m5__;
(* keep *) wire            __m7__;
(* keep *) wire            __m9__;
(* keep *) wire      [7:0] __unknown__2_0_result_wire;
(* keep *) wire      [7:0] __unknown__2_1_result_wire;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire            func_result__m19__;
(* keep *) wire            func_result__m20__;
(* keep *) wire            issue_decode__m17__;
(* keep *) wire            issue_valid__m18__;
(* keep *) wire      [7:0] m1__DOT__r0;
(* keep *) wire      [7:0] m1__DOT__r1;
(* keep *) wire      [7:0] m1__DOT__r2;
(* keep *) wire      [7:0] m1__DOT__r3;
(* keep *) wire            noreset__m0__;
wire            rst;
(* keep *) wire            variable_map_assert__p10__;
(* keep *) wire            variable_map_assert__p12__;
(* keep *) wire            variable_map_assert__p14__;
(* keep *) wire            variable_map_assert__p16__;
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
assign __m9__ = m1__DOT__r0 == __ILA_SO_r0 ;
assign variable_map_assert__p10__ = (~ __IEND__) || (~ __ite_ukn_cond_n2) ||(__m9__) ;
assign __m11__ = m1__DOT__r1 == __ILA_SO_r1 ;
assign variable_map_assert__p12__ = (~ __IEND__) || (~ __ite_ukn_cond_n8) ||(__m11__) ;
assign __m13__ = m1__DOT__r2 == __ILA_SO_r2 ;
assign variable_map_assert__p14__ = (~ __IEND__) || (__m13__) ;
assign __m15__ = m1__DOT__r3 == __ILA_SO_r3 ;
assign variable_map_assert__p16__ = (~ __IEND__) || (__m15__) ;
assign __EDCOND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__  ;
assign __IEND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign issue_decode__m17__ = (~ __START__) || (__ILA_undetfunc_decode_of_INST__) ;
assign issue_valid__m18__ = (~ __START__) || (__ILA_undetfunc_valid__) ;
assign __ISSUE__ = 1 ;

assign func_result__m19__ = (~(__START__) || ((__unknown__2_0_result_reg) == (__unknown__2_0_result_wire))) ;
assign func_result__m20__ = (~(__START__) || ((__unknown__2_1_result_reg) == (__unknown__2_1_result_wire))) ;
undetfunc__DOT__INST m0 (
   .__ite_ukn_cond_n2(__ite_ukn_cond_n2),
   .__ite_ukn_cond_n8(__ite_ukn_cond_n8),
   .nondet___unknown__2_n5(__unknown__2_0_result_wire),
   .nondet___unknown__2_n10(__unknown__2_1_result_wire),
   .__START__(__START__),
   .clk(clk),
   .en(__ILA_I_en),
   .rst(rst),
   .__ILA_undetfunc_decode_of_INST__(__ILA_undetfunc_decode_of_INST__),
   .__ILA_undetfunc_valid__(__ILA_undetfunc_valid__),
   .r0(__ILA_SO_r0),
   .r1(__ILA_SO_r1),
   .r2(__ILA_SO_r2),
   .r3(__ILA_SO_r3),
   .__COUNTER_start__n0()
);
undetfunc m1(
    .clk(clk),
    .en(__ILA_I_en),
    .m1__DOT__r0(m1__DOT__r0),
    .m1__DOT__r1(m1__DOT__r1),
    .m1__DOT__r2(m1__DOT__r2),
    .m1__DOT__r3(m1__DOT__r3),
    .rst(dummy_reset),
    .ukn(__VLG_I_ukn)
);
always @(posedge clk) begin
   if(rst) begin
       __unknown__2_0_result_reg <= ____unknown__2_0_result_reg_init__;
       __unknown__2_1_result_reg <= ____unknown__2_1_result_reg_init__;
   end
   else if(1) begin
       __unknown__2_0_result_reg <= __unknown__2_0_result_reg;
       __unknown__2_1_result_reg <= __unknown__2_1_result_reg;
   end
end
endmodule
module undetfunc__DOT__INST(
__START__,
clk,
en,
nondet___unknown__2_n10,
nondet___unknown__2_n5,
rst,
__ILA_undetfunc_decode_of_INST__,
__ILA_undetfunc_valid__,
__ite_ukn_cond_n2,
__ite_ukn_cond_n8,
r0,
r1,
r2,
r3,
__COUNTER_start__n0
);
input            __START__;
input            clk;
input            en;
input      [7:0] nondet___unknown__2_n10;
input      [7:0] nondet___unknown__2_n5;
input            rst;
output            __ILA_undetfunc_decode_of_INST__;
output            __ILA_undetfunc_valid__;
output            __ite_ukn_cond_n2;
output            __ite_ukn_cond_n8;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] __COUNTER_start__n0;
wire            __ILA_undetfunc_decode_of_INST__;
wire            __ILA_undetfunc_valid__;
wire            __START__;
wire            __ite_ukn_cond_n2;
wire            __ite_ukn_cond_n8;
wire            bv_1_1_n1;
wire      [7:0] bv_8_1_n3;
wire            clk;
wire            en;
wire      [7:0] n11;
wire      [7:0] n12;
wire            n13;
wire      [7:0] n14;
wire      [7:0] n15;
wire      [7:0] n16;
wire      [7:0] n17;
wire      [7:0] n18;
wire      [7:0] n19;
wire            n2;
wire      [7:0] n4;
wire      [7:0] n6;
wire      [7:0] n7;
wire            n8;
wire      [7:0] n9;
wire      [7:0] nondet___unknown__2_n10;
wire      [7:0] nondet___unknown__2_n5;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
wire            rst;
assign __ILA_undetfunc_valid__ = 1'b1 ;
assign __ILA_undetfunc_decode_of_INST__ = 1'b1 ;
assign bv_1_1_n1 = 1'h1 ;
assign n2 =  ( en ) == ( bv_1_1_n1 )  ;
assign bv_8_1_n3 = 8'h1 ;
assign n4 =  ( r1 ) + ( bv_8_1_n3 )  ;
assign n6 = nondet___unknown__2_n5 ;
assign n7 =  ( n2 ) ? ( n4 ) : ( n6 ) ;
assign __ite_ukn_cond_n2 = __ite_ukn_cond_reg_n2 ;
assign n8 =  ( en ) == ( bv_1_1_n1 )  ;
assign n9 =  ( r0 ) + ( bv_8_1_n3 )  ;
assign n11 = nondet___unknown__2_n10 ;
assign n12 =  ( n8 ) ? ( n9 ) : ( n11 ) ;
assign __ite_ukn_cond_n8 = __ite_ukn_cond_reg_n8 ;
assign n13 =  ( en ) == ( bv_1_1_n1 )  ;
assign n14 =  ( r0 ) + ( r1 )  ;
assign n15 =  ( n14 ) + ( bv_8_1_n3 )  ;
assign n16 =  ( n13 ) ? ( n15 ) : ( r2 ) ;
assign n17 =  ( r0 ) + ( r1 )  ;
assign n18 =  ( n17 ) + ( r2 )  ;
assign n19 =  ( n18 ) + ( r3 )  ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       __COUNTER_start__n0 <= 0;
   end
   else if(__START__ && __ILA_undetfunc_valid__) begin
       if ( __ILA_undetfunc_decode_of_INST__ ) begin 
           __COUNTER_start__n0 <= 1; end
       else if( (__COUNTER_start__n0 >= 1 ) && ( __COUNTER_start__n0 < 255 )) begin
           __COUNTER_start__n0 <= __COUNTER_start__n0 + 1; end
       if (__ILA_undetfunc_decode_of_INST__) begin
           r0 <= n7 ;
       end
       if (__ILA_undetfunc_decode_of_INST__) begin
           __ite_ukn_cond_reg_n2 <= n2 ;
       end
       if (__ILA_undetfunc_decode_of_INST__) begin
           r1 <= n12 ;
       end
       if (__ILA_undetfunc_decode_of_INST__) begin
           __ite_ukn_cond_reg_n8 <= n8 ;
       end
       if (__ILA_undetfunc_decode_of_INST__) begin
           r2 <= n16 ;
       end
       if (__ILA_undetfunc_decode_of_INST__) begin
           r3 <= n19 ;
       end
   end
end
endmodule
module undetfunc(input clk, input rst, input en, input [7:0] ukn, output wire [7:0] m1__DOT__r0, output wire [7:0] m1__DOT__r1, output wire [7:0] m1__DOT__r2, output wire [7:0] m1__DOT__r3);

(* keep *) reg [7:0] r0;
(* keep *) reg [7:0] r1;
(* keep *) reg [7:0] r2;
(* keep *) reg [7:0] r3;


wire [7:0] res1;
wire [7:0] res2;
wire [7:0] res3;
wire [7:0] res4;

assign res1 = en ? r1+1 : 8'hxx;
assign res2 = en ? r0 + 1 : ukn;
assign res3 = r0+r1+1;
assign res4 = r0 + r1 + r2 + r3;


always @(posedge clk) begin 
  r0 <= res1;
  r1 <= res2;

  if(en)
    r2 <= res3;
  
  r3 <= res4;
end

 assign m1__DOT__r3 = r3;
 assign m1__DOT__r2 = r2;
 assign m1__DOT__r1 = r1;
 assign m1__DOT__r0 = r0;
endmodule

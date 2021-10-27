/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_addra,
__ILA_I_addrb,
__ILA_I_start,
clk,
dummy_reset,
rst,
__m1__,
__m3__,
__m5__,
__m7__,
issue_decode__m9__,
issue_valid__m10__,
m1__DOT__mema_0_,
m1__DOT__mema_10_,
m1__DOT__mema_11_,
m1__DOT__mema_12_,
m1__DOT__mema_13_,
m1__DOT__mema_14_,
m1__DOT__mema_15_,
m1__DOT__mema_1_,
m1__DOT__mema_2_,
m1__DOT__mema_3_,
m1__DOT__mema_4_,
m1__DOT__mema_5_,
m1__DOT__mema_6_,
m1__DOT__mema_7_,
m1__DOT__mema_8_,
m1__DOT__mema_9_,
m1__DOT__memb_0_,
m1__DOT__memb_10_,
m1__DOT__memb_11_,
m1__DOT__memb_12_,
m1__DOT__memb_13_,
m1__DOT__memb_14_,
m1__DOT__memb_15_,
m1__DOT__memb_1_,
m1__DOT__memb_2_,
m1__DOT__memb_3_,
m1__DOT__memb_4_,
m1__DOT__memb_5_,
m1__DOT__memb_6_,
m1__DOT__memb_7_,
m1__DOT__memb_8_,
m1__DOT__memb_9_,
noreset__m0__,
variable_map_assert__p6__,
variable_map_assert__p8__,
variable_map_assume___m2__,
variable_map_assume___m4__,
__CYCLE_CNT__,
__START__,
__STARTED__,
__ENDED__,
__2ndENDED__,
__RESETED__
);
input      [3:0] __ILA_I_addra;
input      [3:0] __ILA_I_addrb;
input            __ILA_I_start;
input            clk;
input            dummy_reset;
input            rst;
output            __m1__;
output            __m3__;
output            __m5__;
output            __m7__;
output            issue_decode__m9__;
output            issue_valid__m10__;
output      [7:0] m1__DOT__mema_0_;
output      [7:0] m1__DOT__mema_10_;
output      [7:0] m1__DOT__mema_11_;
output      [7:0] m1__DOT__mema_12_;
output      [7:0] m1__DOT__mema_13_;
output      [7:0] m1__DOT__mema_14_;
output      [7:0] m1__DOT__mema_15_;
output      [7:0] m1__DOT__mema_1_;
output      [7:0] m1__DOT__mema_2_;
output      [7:0] m1__DOT__mema_3_;
output      [7:0] m1__DOT__mema_4_;
output      [7:0] m1__DOT__mema_5_;
output      [7:0] m1__DOT__mema_6_;
output      [7:0] m1__DOT__mema_7_;
output      [7:0] m1__DOT__mema_8_;
output      [7:0] m1__DOT__mema_9_;
output      [7:0] m1__DOT__memb_0_;
output      [7:0] m1__DOT__memb_10_;
output      [7:0] m1__DOT__memb_11_;
output      [7:0] m1__DOT__memb_12_;
output      [7:0] m1__DOT__memb_13_;
output      [7:0] m1__DOT__memb_14_;
output      [7:0] m1__DOT__memb_15_;
output      [7:0] m1__DOT__memb_1_;
output      [7:0] m1__DOT__memb_2_;
output      [7:0] m1__DOT__memb_3_;
output      [7:0] m1__DOT__memb_4_;
output      [7:0] m1__DOT__memb_5_;
output      [7:0] m1__DOT__memb_6_;
output      [7:0] m1__DOT__memb_7_;
output      [7:0] m1__DOT__memb_8_;
output      [7:0] m1__DOT__memb_9_;
output            noreset__m0__;
output            variable_map_assert__p6__;
output            variable_map_assert__p8__;
output            variable_map_assume___m2__;
output            variable_map_assume___m4__;
output reg      [3:0] __CYCLE_CNT__;
output reg            __START__;
output reg            __STARTED__;
output reg            __ENDED__;
output reg            __2ndENDED__;
output reg            __RESETED__;
wire            __2ndIEND__;
(* keep *) wire            __EDCOND__;
(* keep *) wire            __IEND__;
(* keep *) wire      [3:0] __ILA_I_addra;
(* keep *) wire      [3:0] __ILA_I_addrb;
(* keep *) wire            __ILA_I_start;
(* keep *) wire            __ILA_MemorySwap_decode_of_SWAPExpand__;
(* keep *) wire            __ILA_MemorySwap_valid__;
(* keep *) wire      [7:0] __ILA_SO_mema_0;
(* keep *) wire      [7:0] __ILA_SO_mema_1;
(* keep *) wire      [7:0] __ILA_SO_mema_10;
(* keep *) wire      [7:0] __ILA_SO_mema_11;
(* keep *) wire      [7:0] __ILA_SO_mema_12;
(* keep *) wire      [7:0] __ILA_SO_mema_13;
(* keep *) wire      [7:0] __ILA_SO_mema_14;
(* keep *) wire      [7:0] __ILA_SO_mema_15;
(* keep *) wire      [7:0] __ILA_SO_mema_2;
(* keep *) wire      [7:0] __ILA_SO_mema_3;
(* keep *) wire      [7:0] __ILA_SO_mema_4;
(* keep *) wire      [7:0] __ILA_SO_mema_5;
(* keep *) wire      [7:0] __ILA_SO_mema_6;
(* keep *) wire      [7:0] __ILA_SO_mema_7;
(* keep *) wire      [7:0] __ILA_SO_mema_8;
(* keep *) wire      [7:0] __ILA_SO_mema_9;
(* keep *) wire      [7:0] __ILA_SO_memb_0;
(* keep *) wire      [7:0] __ILA_SO_memb_1;
(* keep *) wire      [7:0] __ILA_SO_memb_10;
(* keep *) wire      [7:0] __ILA_SO_memb_11;
(* keep *) wire      [7:0] __ILA_SO_memb_12;
(* keep *) wire      [7:0] __ILA_SO_memb_13;
(* keep *) wire      [7:0] __ILA_SO_memb_14;
(* keep *) wire      [7:0] __ILA_SO_memb_15;
(* keep *) wire      [7:0] __ILA_SO_memb_2;
(* keep *) wire      [7:0] __ILA_SO_memb_3;
(* keep *) wire      [7:0] __ILA_SO_memb_4;
(* keep *) wire      [7:0] __ILA_SO_memb_5;
(* keep *) wire      [7:0] __ILA_SO_memb_6;
(* keep *) wire      [7:0] __ILA_SO_memb_7;
(* keep *) wire      [7:0] __ILA_SO_memb_8;
(* keep *) wire      [7:0] __ILA_SO_memb_9;
(* keep *) wire            __ISSUE__;
(* keep *) wire            __m1__;
(* keep *) wire            __m3__;
(* keep *) wire            __m5__;
(* keep *) wire            __m7__;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire            issue_decode__m9__;
(* keep *) wire            issue_valid__m10__;
(* keep *) wire      [7:0] m1__DOT__mema_0_;
(* keep *) wire      [7:0] m1__DOT__mema_10_;
(* keep *) wire      [7:0] m1__DOT__mema_11_;
(* keep *) wire      [7:0] m1__DOT__mema_12_;
(* keep *) wire      [7:0] m1__DOT__mema_13_;
(* keep *) wire      [7:0] m1__DOT__mema_14_;
(* keep *) wire      [7:0] m1__DOT__mema_15_;
(* keep *) wire      [7:0] m1__DOT__mema_1_;
(* keep *) wire      [7:0] m1__DOT__mema_2_;
(* keep *) wire      [7:0] m1__DOT__mema_3_;
(* keep *) wire      [7:0] m1__DOT__mema_4_;
(* keep *) wire      [7:0] m1__DOT__mema_5_;
(* keep *) wire      [7:0] m1__DOT__mema_6_;
(* keep *) wire      [7:0] m1__DOT__mema_7_;
(* keep *) wire      [7:0] m1__DOT__mema_8_;
(* keep *) wire      [7:0] m1__DOT__mema_9_;
(* keep *) wire      [7:0] m1__DOT__memb_0_;
(* keep *) wire      [7:0] m1__DOT__memb_10_;
(* keep *) wire      [7:0] m1__DOT__memb_11_;
(* keep *) wire      [7:0] m1__DOT__memb_12_;
(* keep *) wire      [7:0] m1__DOT__memb_13_;
(* keep *) wire      [7:0] m1__DOT__memb_14_;
(* keep *) wire      [7:0] m1__DOT__memb_15_;
(* keep *) wire      [7:0] m1__DOT__memb_1_;
(* keep *) wire      [7:0] m1__DOT__memb_2_;
(* keep *) wire      [7:0] m1__DOT__memb_3_;
(* keep *) wire      [7:0] m1__DOT__memb_4_;
(* keep *) wire      [7:0] m1__DOT__memb_5_;
(* keep *) wire      [7:0] m1__DOT__memb_6_;
(* keep *) wire      [7:0] m1__DOT__memb_7_;
(* keep *) wire      [7:0] m1__DOT__memb_8_;
(* keep *) wire      [7:0] m1__DOT__memb_9_;
(* keep *) wire            noreset__m0__;
wire            rst;
(* keep *) wire            variable_map_assert__p6__;
(* keep *) wire            variable_map_assert__p8__;
(* keep *) wire            variable_map_assume___m2__;
(* keep *) wire            variable_map_assume___m4__;
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
assign __m1__ = ( __ILA_SO_mema_0 == m1__DOT__mema_0_)&&( __ILA_SO_mema_1 == m1__DOT__mema_1_)&&( __ILA_SO_mema_2 == m1__DOT__mema_2_)&&( __ILA_SO_mema_3 == m1__DOT__mema_3_)&&( __ILA_SO_mema_4 == m1__DOT__mema_4_)&&( __ILA_SO_mema_5 == m1__DOT__mema_5_)&&( __ILA_SO_mema_6 == m1__DOT__mema_6_)&&( __ILA_SO_mema_7 == m1__DOT__mema_7_)&&( __ILA_SO_mema_8 == m1__DOT__mema_8_)&&( __ILA_SO_mema_9 == m1__DOT__mema_9_)&&( __ILA_SO_mema_10 == m1__DOT__mema_10_)&&( __ILA_SO_mema_11 == m1__DOT__mema_11_)&&( __ILA_SO_mema_12 == m1__DOT__mema_12_)&&( __ILA_SO_mema_13 == m1__DOT__mema_13_)&&( __ILA_SO_mema_14 == m1__DOT__mema_14_)&&( __ILA_SO_mema_15 == m1__DOT__mema_15_) ;
assign variable_map_assume___m2__ = (~ __START__ )|| (__m1__) ;
assign __m3__ = ( __ILA_SO_memb_0 == m1__DOT__memb_0_)&&( __ILA_SO_memb_1 == m1__DOT__memb_1_)&&( __ILA_SO_memb_2 == m1__DOT__memb_2_)&&( __ILA_SO_memb_3 == m1__DOT__memb_3_)&&( __ILA_SO_memb_4 == m1__DOT__memb_4_)&&( __ILA_SO_memb_5 == m1__DOT__memb_5_)&&( __ILA_SO_memb_6 == m1__DOT__memb_6_)&&( __ILA_SO_memb_7 == m1__DOT__memb_7_)&&( __ILA_SO_memb_8 == m1__DOT__memb_8_)&&( __ILA_SO_memb_9 == m1__DOT__memb_9_)&&( __ILA_SO_memb_10 == m1__DOT__memb_10_)&&( __ILA_SO_memb_11 == m1__DOT__memb_11_)&&( __ILA_SO_memb_12 == m1__DOT__memb_12_)&&( __ILA_SO_memb_13 == m1__DOT__memb_13_)&&( __ILA_SO_memb_14 == m1__DOT__memb_14_)&&( __ILA_SO_memb_15 == m1__DOT__memb_15_) ;
assign variable_map_assume___m4__ = (~ __START__ )|| (__m3__) ;
assign __m5__ = ( __ILA_SO_mema_0 == m1__DOT__mema_0_)&&( __ILA_SO_mema_1 == m1__DOT__mema_1_)&&( __ILA_SO_mema_2 == m1__DOT__mema_2_)&&( __ILA_SO_mema_3 == m1__DOT__mema_3_)&&( __ILA_SO_mema_4 == m1__DOT__mema_4_)&&( __ILA_SO_mema_5 == m1__DOT__mema_5_)&&( __ILA_SO_mema_6 == m1__DOT__mema_6_)&&( __ILA_SO_mema_7 == m1__DOT__mema_7_)&&( __ILA_SO_mema_8 == m1__DOT__mema_8_)&&( __ILA_SO_mema_9 == m1__DOT__mema_9_)&&( __ILA_SO_mema_10 == m1__DOT__mema_10_)&&( __ILA_SO_mema_11 == m1__DOT__mema_11_)&&( __ILA_SO_mema_12 == m1__DOT__mema_12_)&&( __ILA_SO_mema_13 == m1__DOT__mema_13_)&&( __ILA_SO_mema_14 == m1__DOT__mema_14_)&&( __ILA_SO_mema_15 == m1__DOT__mema_15_) ;
assign variable_map_assert__p6__ = (~ __IEND__) || (__m5__) ;
assign __m7__ = ( __ILA_SO_memb_0 == m1__DOT__memb_0_)&&( __ILA_SO_memb_1 == m1__DOT__memb_1_)&&( __ILA_SO_memb_2 == m1__DOT__memb_2_)&&( __ILA_SO_memb_3 == m1__DOT__memb_3_)&&( __ILA_SO_memb_4 == m1__DOT__memb_4_)&&( __ILA_SO_memb_5 == m1__DOT__memb_5_)&&( __ILA_SO_memb_6 == m1__DOT__memb_6_)&&( __ILA_SO_memb_7 == m1__DOT__memb_7_)&&( __ILA_SO_memb_8 == m1__DOT__memb_8_)&&( __ILA_SO_memb_9 == m1__DOT__memb_9_)&&( __ILA_SO_memb_10 == m1__DOT__memb_10_)&&( __ILA_SO_memb_11 == m1__DOT__memb_11_)&&( __ILA_SO_memb_12 == m1__DOT__memb_12_)&&( __ILA_SO_memb_13 == m1__DOT__memb_13_)&&( __ILA_SO_memb_14 == m1__DOT__memb_14_)&&( __ILA_SO_memb_15 == m1__DOT__memb_15_) ;
assign variable_map_assert__p8__ = (~ __IEND__) || (__m7__) ;
assign __EDCOND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__  ;
assign __IEND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign issue_decode__m9__ = (~ __START__) || (__ILA_MemorySwap_decode_of_SWAPExpand__) ;
assign issue_valid__m10__ = (~ __START__) || (__ILA_MemorySwap_valid__) ;
assign __ISSUE__ = 1 ;

MemorySwap__DOT__SWAPExpand m0 (
   .__START__(__START__),
   .addra(__ILA_I_addra),
   .addrb(__ILA_I_addrb),
   .clk(clk),
   .rst(rst),
   .start(__ILA_I_start),
   .__ILA_MemorySwap_decode_of_SWAPExpand__(__ILA_MemorySwap_decode_of_SWAPExpand__),
   .__ILA_MemorySwap_valid__(__ILA_MemorySwap_valid__),
   .mema_0(__ILA_SO_mema_0),
   .mema_1(__ILA_SO_mema_1),
   .mema_2(__ILA_SO_mema_2),
   .mema_3(__ILA_SO_mema_3),
   .mema_4(__ILA_SO_mema_4),
   .mema_5(__ILA_SO_mema_5),
   .mema_6(__ILA_SO_mema_6),
   .mema_7(__ILA_SO_mema_7),
   .mema_8(__ILA_SO_mema_8),
   .mema_9(__ILA_SO_mema_9),
   .mema_10(__ILA_SO_mema_10),
   .mema_11(__ILA_SO_mema_11),
   .mema_12(__ILA_SO_mema_12),
   .mema_13(__ILA_SO_mema_13),
   .mema_14(__ILA_SO_mema_14),
   .mema_15(__ILA_SO_mema_15),
   .memb_0(__ILA_SO_memb_0),
   .memb_1(__ILA_SO_memb_1),
   .memb_2(__ILA_SO_memb_2),
   .memb_3(__ILA_SO_memb_3),
   .memb_4(__ILA_SO_memb_4),
   .memb_5(__ILA_SO_memb_5),
   .memb_6(__ILA_SO_memb_6),
   .memb_7(__ILA_SO_memb_7),
   .memb_8(__ILA_SO_memb_8),
   .memb_9(__ILA_SO_memb_9),
   .memb_10(__ILA_SO_memb_10),
   .memb_11(__ILA_SO_memb_11),
   .memb_12(__ILA_SO_memb_12),
   .memb_13(__ILA_SO_memb_13),
   .memb_14(__ILA_SO_memb_14),
   .memb_15(__ILA_SO_memb_15),
   .__COUNTER_start__n2()
);
swap m1(
    .addra(__ILA_I_addra),
    .addrb(__ILA_I_addrb),
    .clk(clk),
    .m1__DOT__mema_0_(m1__DOT__mema_0_),
    .m1__DOT__mema_10_(m1__DOT__mema_10_),
    .m1__DOT__mema_11_(m1__DOT__mema_11_),
    .m1__DOT__mema_12_(m1__DOT__mema_12_),
    .m1__DOT__mema_13_(m1__DOT__mema_13_),
    .m1__DOT__mema_14_(m1__DOT__mema_14_),
    .m1__DOT__mema_15_(m1__DOT__mema_15_),
    .m1__DOT__mema_1_(m1__DOT__mema_1_),
    .m1__DOT__mema_2_(m1__DOT__mema_2_),
    .m1__DOT__mema_3_(m1__DOT__mema_3_),
    .m1__DOT__mema_4_(m1__DOT__mema_4_),
    .m1__DOT__mema_5_(m1__DOT__mema_5_),
    .m1__DOT__mema_6_(m1__DOT__mema_6_),
    .m1__DOT__mema_7_(m1__DOT__mema_7_),
    .m1__DOT__mema_8_(m1__DOT__mema_8_),
    .m1__DOT__mema_9_(m1__DOT__mema_9_),
    .m1__DOT__memb_0_(m1__DOT__memb_0_),
    .m1__DOT__memb_10_(m1__DOT__memb_10_),
    .m1__DOT__memb_11_(m1__DOT__memb_11_),
    .m1__DOT__memb_12_(m1__DOT__memb_12_),
    .m1__DOT__memb_13_(m1__DOT__memb_13_),
    .m1__DOT__memb_14_(m1__DOT__memb_14_),
    .m1__DOT__memb_15_(m1__DOT__memb_15_),
    .m1__DOT__memb_1_(m1__DOT__memb_1_),
    .m1__DOT__memb_2_(m1__DOT__memb_2_),
    .m1__DOT__memb_3_(m1__DOT__memb_3_),
    .m1__DOT__memb_4_(m1__DOT__memb_4_),
    .m1__DOT__memb_5_(m1__DOT__memb_5_),
    .m1__DOT__memb_6_(m1__DOT__memb_6_),
    .m1__DOT__memb_7_(m1__DOT__memb_7_),
    .m1__DOT__memb_8_(m1__DOT__memb_8_),
    .m1__DOT__memb_9_(m1__DOT__memb_9_),
    .rst(dummy_reset),
    .start(__ILA_I_start)
);
endmodule
module MemorySwap__DOT__SWAPExpand(
__START__,
addra,
addrb,
clk,
rst,
start,
__ILA_MemorySwap_decode_of_SWAPExpand__,
__ILA_MemorySwap_valid__,
mema_0,
mema_1,
mema_2,
mema_3,
mema_4,
mema_5,
mema_6,
mema_7,
mema_8,
mema_9,
mema_10,
mema_11,
mema_12,
mema_13,
mema_14,
mema_15,
memb_0,
memb_1,
memb_2,
memb_3,
memb_4,
memb_5,
memb_6,
memb_7,
memb_8,
memb_9,
memb_10,
memb_11,
memb_12,
memb_13,
memb_14,
memb_15,
__COUNTER_start__n2
);
input            __START__;
input      [3:0] addra;
input      [3:0] addrb;
input            clk;
input            rst;
input            start;
output            __ILA_MemorySwap_decode_of_SWAPExpand__;
output            __ILA_MemorySwap_valid__;
output      [7:0] mema_0;
output      [7:0] mema_1;
output      [7:0] mema_2;
output      [7:0] mema_3;
output      [7:0] mema_4;
output      [7:0] mema_5;
output      [7:0] mema_6;
output      [7:0] mema_7;
output      [7:0] mema_8;
output      [7:0] mema_9;
output      [7:0] mema_10;
output      [7:0] mema_11;
output      [7:0] mema_12;
output      [7:0] mema_13;
output      [7:0] mema_14;
output      [7:0] mema_15;
output      [7:0] memb_0;
output      [7:0] memb_1;
output      [7:0] memb_2;
output      [7:0] memb_3;
output      [7:0] memb_4;
output      [7:0] memb_5;
output      [7:0] memb_6;
output      [7:0] memb_7;
output      [7:0] memb_8;
output      [7:0] memb_9;
output      [7:0] memb_10;
output      [7:0] memb_11;
output      [7:0] memb_12;
output      [7:0] memb_13;
output      [7:0] memb_14;
output      [7:0] memb_15;
output reg      [7:0] __COUNTER_start__n2;
wire            __ILA_MemorySwap_decode_of_SWAPExpand__;
wire            __ILA_MemorySwap_valid__;
wire            __START__;
wire      [3:0] addra;
wire      [3:0] addrb;
wire            bv_1_1_n0;
wire            clk;
wire      [7:0] mema_0;
wire      [7:0] mema_1;
wire      [7:0] mema_10;
wire      [7:0] mema_11;
wire      [7:0] mema_12;
wire      [7:0] mema_13;
wire      [7:0] mema_14;
wire      [7:0] mema_15;
wire      [7:0] mema_2;
wire      [7:0] mema_3;
wire      [7:0] mema_4;
wire      [7:0] mema_5;
wire      [7:0] mema_6;
wire      [7:0] mema_7;
wire      [7:0] mema_8;
wire      [7:0] mema_9;
wire      [3:0] mema_addr0;
wire      [7:0] mema_data0;
wire            mema_wen0;
wire      [7:0] memb_0;
wire      [7:0] memb_1;
wire      [7:0] memb_10;
wire      [7:0] memb_11;
wire      [7:0] memb_12;
wire      [7:0] memb_13;
wire      [7:0] memb_14;
wire      [7:0] memb_15;
wire      [7:0] memb_2;
wire      [7:0] memb_3;
wire      [7:0] memb_4;
wire      [7:0] memb_5;
wire      [7:0] memb_6;
wire      [7:0] memb_7;
wire      [7:0] memb_8;
wire      [7:0] memb_9;
wire      [3:0] memb_addr0;
wire      [7:0] memb_data0;
wire            memb_wen0;
wire            n1;
wire      [7:0] n3;
wire      [7:0] n4;
wire            rst;
wire            start;
reg      [7:0] mema[15:0];
reg      [7:0] memb[15:0];
assign mema_0 = mema[0] ;
assign mema_1 = mema[1] ;
assign mema_2 = mema[2] ;
assign mema_3 = mema[3] ;
assign mema_4 = mema[4] ;
assign mema_5 = mema[5] ;
assign mema_6 = mema[6] ;
assign mema_7 = mema[7] ;
assign mema_8 = mema[8] ;
assign mema_9 = mema[9] ;
assign mema_10 = mema[10] ;
assign mema_11 = mema[11] ;
assign mema_12 = mema[12] ;
assign mema_13 = mema[13] ;
assign mema_14 = mema[14] ;
assign mema_15 = mema[15] ;
assign memb_0 = memb[0] ;
assign memb_1 = memb[1] ;
assign memb_2 = memb[2] ;
assign memb_3 = memb[3] ;
assign memb_4 = memb[4] ;
assign memb_5 = memb[5] ;
assign memb_6 = memb[6] ;
assign memb_7 = memb[7] ;
assign memb_8 = memb[8] ;
assign memb_9 = memb[9] ;
assign memb_10 = memb[10] ;
assign memb_11 = memb[11] ;
assign memb_12 = memb[12] ;
assign memb_13 = memb[13] ;
assign memb_14 = memb[14] ;
assign memb_15 = memb[15] ;
assign __ILA_MemorySwap_valid__ = 1'b1 ;
assign bv_1_1_n0 = 1'h1 ;
assign n1 =  ( start ) == ( bv_1_1_n0 )  ;
assign __ILA_MemorySwap_decode_of_SWAPExpand__ = n1 ;
assign n3 =  (  memb[addrb] )  ;
assign mema_addr0 = n1 ? (addra) : (0) ;
assign mema_data0 = n1 ? (n3) : ('d0) ;
assign mema_wen0 = (n1)&&__START__ ? ( 1'b1 ) : (1'b0) ;
assign n4 =  (  mema[addra] )  ;
assign memb_addr0 = n1 ? (addrb) : (0) ;
assign memb_data0 = n1 ? (n4) : ('d0) ;
assign memb_wen0 = (n1)&&__START__ ? ( 1'b1 ) : (1'b0) ;
always @(posedge clk) begin
   if(rst) begin
       __COUNTER_start__n2 <= 0;
   end
   else if(__START__ && __ILA_MemorySwap_valid__) begin
       if ( __ILA_MemorySwap_decode_of_SWAPExpand__ ) begin 
           __COUNTER_start__n2 <= 1; end
       else if( (__COUNTER_start__n2 >= 1 ) && ( __COUNTER_start__n2 < 255 )) begin
           __COUNTER_start__n2 <= __COUNTER_start__n2 + 1; end
       if (mema_wen0) begin
           mema [ mema_addr0 ] <= mema_data0 ;
       end
       if (memb_wen0) begin
           memb [ memb_addr0 ] <= memb_data0 ;
       end
   end
end
endmodule
// swap_im.v
// swap with internal memory (im)
module swap (
  input clk,    // Clock
  input rst,  // Synchronous reset active high
  input [3:0] addra,
  input [3:0] addrb,
  input start, output wire [7:0] m1__DOT__memb_0_, output wire [7:0] m1__DOT__memb_9_, output wire [7:0] m1__DOT__memb_8_, output wire [7:0] m1__DOT__memb_7_, output wire [7:0] m1__DOT__memb_6_, output wire [7:0] m1__DOT__memb_5_, output wire [7:0] m1__DOT__memb_4_, output wire [7:0] m1__DOT__memb_3_, output wire [7:0] m1__DOT__memb_2_, output wire [7:0] m1__DOT__memb_1_, output wire [7:0] m1__DOT__memb_15_, output wire [7:0] m1__DOT__memb_14_, output wire [7:0] m1__DOT__memb_13_, output wire [7:0] m1__DOT__memb_12_, output wire [7:0] m1__DOT__memb_11_, output wire [7:0] m1__DOT__memb_10_, output wire [7:0] m1__DOT__mema_0_, output wire [7:0] m1__DOT__mema_9_, output wire [7:0] m1__DOT__mema_8_, output wire [7:0] m1__DOT__mema_7_, output wire [7:0] m1__DOT__mema_6_, output wire [7:0] m1__DOT__mema_5_, output wire [7:0] m1__DOT__mema_4_, output wire [7:0] m1__DOT__mema_3_, output wire [7:0] m1__DOT__mema_2_, output wire [7:0] m1__DOT__mema_1_, output wire [7:0] m1__DOT__mema_15_, output wire [7:0] m1__DOT__mema_14_, output wire [7:0] m1__DOT__mema_13_, output wire [7:0] m1__DOT__mema_12_, output wire [7:0] m1__DOT__mema_11_, output wire [7:0] m1__DOT__mema_10_);

(* keep *) reg [7:0] mema[0:15];
(* keep *) reg [7:0] memb[0:15];


always @(posedge clk) begin
  if (start) begin
    mema[addra] <= memb[addrb];
    memb[addrb] <= mema[addra];
  end
end

 assign m1__DOT__mema_10_ = mema[10];
 assign m1__DOT__mema_11_ = mema[11];
 assign m1__DOT__mema_12_ = mema[12];
 assign m1__DOT__mema_13_ = mema[13];
 assign m1__DOT__mema_14_ = mema[14];
 assign m1__DOT__mema_15_ = mema[15];
 assign m1__DOT__mema_1_ = mema[1];
 assign m1__DOT__mema_2_ = mema[2];
 assign m1__DOT__mema_3_ = mema[3];
 assign m1__DOT__mema_4_ = mema[4];
 assign m1__DOT__mema_5_ = mema[5];
 assign m1__DOT__mema_6_ = mema[6];
 assign m1__DOT__mema_7_ = mema[7];
 assign m1__DOT__mema_8_ = mema[8];
 assign m1__DOT__mema_9_ = mema[9];
 assign m1__DOT__mema_0_ = mema[0];
 assign m1__DOT__memb_10_ = memb[10];
 assign m1__DOT__memb_11_ = memb[11];
 assign m1__DOT__memb_12_ = memb[12];
 assign m1__DOT__memb_13_ = memb[13];
 assign m1__DOT__memb_14_ = memb[14];
 assign m1__DOT__memb_15_ = memb[15];
 assign m1__DOT__memb_1_ = memb[1];
 assign m1__DOT__memb_2_ = memb[2];
 assign m1__DOT__memb_3_ = memb[3];
 assign m1__DOT__memb_4_ = memb[4];
 assign m1__DOT__memb_5_ = memb[5];
 assign m1__DOT__memb_6_ = memb[6];
 assign m1__DOT__memb_7_ = memb[7];
 assign m1__DOT__memb_8_ = memb[8];
 assign m1__DOT__memb_9_ = memb[9];
 assign m1__DOT__memb_0_ = memb[0];
endmodule

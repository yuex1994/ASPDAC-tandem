/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_op,
__ILA_I_operand1,
__ILA_I_operand2,
clk,
dummy_reset,
mi0_ila_r_rand_input,
mi0_vlg_r_rand_input,
rst,
__m2__,
__m4__,
additional_mapping_control_assume__m6__,
issue_decode__m7__,
issue_valid__m8__,
m1__DOT__operand1,
m1__DOT__operand2,
m1__DOT__rf_0_,
m1__DOT__rf_1_,
m1__DOT__rf_2_,
m1__DOT__rf_3_,
m1__DOT__rf_4_,
m1__DOT__rf_5_,
mi0_read_assume_true,
noreset__m0__,
variable_map_assert__p5__,
variable_map_assume___m1__,
variable_map_assume___m3__,
__CYCLE_CNT__,
__START__,
__STARTED__,
__ENDED__,
__2ndENDED__,
__RESETED__
);
input      [1:0] __ILA_I_op;
input      [2:0] __ILA_I_operand1;
input      [2:0] __ILA_I_operand2;
input            clk;
input            dummy_reset;
input      [7:0] mi0_ila_r_rand_input;
input      [7:0] mi0_vlg_r_rand_input;
input            rst;
output            __m2__;
output            __m4__;
output            additional_mapping_control_assume__m6__;
output            issue_decode__m7__;
output            issue_valid__m8__;
output      [2:0] m1__DOT__operand1;
output      [2:0] m1__DOT__operand2;
output      [7:0] m1__DOT__rf_0_;
output      [7:0] m1__DOT__rf_1_;
output      [7:0] m1__DOT__rf_2_;
output      [7:0] m1__DOT__rf_3_;
output      [7:0] m1__DOT__rf_4_;
output      [7:0] m1__DOT__rf_5_;
output            mi0_read_assume_true;
output            noreset__m0__;
output            variable_map_assert__p5__;
output            variable_map_assume___m1__;
output            variable_map_assume___m3__;
output reg      [3:0] __CYCLE_CNT__;
output reg            __START__;
output reg            __STARTED__;
output reg            __ENDED__;
output reg            __2ndENDED__;
output reg            __RESETED__;
wire            __2ndIEND__;
(* keep *) wire            __EDCOND__;
(* keep *) wire            __IEND__;
(* keep *) wire      [1:0] __ILA_I_op;
(* keep *) wire      [2:0] __ILA_I_operand1;
(* keep *) wire      [2:0] __ILA_I_operand2;
(* keep *) wire      [7:0] __ILA_SO_rf_0;
(* keep *) wire      [7:0] __ILA_SO_rf_1;
(* keep *) wire      [7:0] __ILA_SO_rf_2;
(* keep *) wire      [7:0] __ILA_SO_rf_3;
(* keep *) wire      [7:0] __ILA_SO_rf_4;
(* keep *) wire      [7:0] __ILA_SO_rf_5;
(* keep *) wire            __ILA_proc_decode_of_ADD1__;
(* keep *) wire            __ILA_proc_valid__;
(* keep *) wire            __ISSUE__;
(* keep *) wire      [7:0] __MEM_mem_0_raddr;
(* keep *) wire      [7:0] __MEM_mem_0_rdata;
(* keep *) wire            __MEM_mem_0_ren;
(* keep *) wire      [7:0] __MEM_mem_0_waddr;
(* keep *) wire      [7:0] __MEM_mem_0_wdata;
(* keep *) wire            __MEM_mem_0_wen;
(* keep *) wire            __m2__;
(* keep *) wire            __m4__;
(* keep *) wire            additional_mapping_control_assume__m6__;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire            issue_decode__m7__;
(* keep *) wire            issue_valid__m8__;
(* keep *) wire      [2:0] m1__DOT__operand1;
(* keep *) wire      [2:0] m1__DOT__operand2;
(* keep *) wire      [7:0] m1__DOT__rf_0_;
(* keep *) wire      [7:0] m1__DOT__rf_1_;
(* keep *) wire      [7:0] m1__DOT__rf_2_;
(* keep *) wire      [7:0] m1__DOT__rf_3_;
(* keep *) wire      [7:0] m1__DOT__rf_4_;
(* keep *) wire      [7:0] m1__DOT__rf_5_;
(* keep *) wire            mem_EQ_;
(* keep *) wire            noreset__m0__;
wire            rst;
(* keep *) wire            variable_map_assert__p5__;
(* keep *) wire            variable_map_assume___m1__;
(* keep *) wire            variable_map_assume___m3__;
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
assign variable_map_assume___m1__ = (~ __START__ )|| (`true) ;
assign __m2__ = ( __ILA_SO_rf_0 == m1__DOT__rf_0_)&&( __ILA_SO_rf_1 == m1__DOT__rf_1_)&&( __ILA_SO_rf_2 == m1__DOT__rf_2_)&&( __ILA_SO_rf_3 == m1__DOT__rf_3_)&&( __ILA_SO_rf_4 == m1__DOT__rf_4_)&&( __ILA_SO_rf_5 == m1__DOT__rf_5_) ;
assign variable_map_assume___m3__ = (~ __START__ )|| (__m2__) ;
assign __m4__ = ( __ILA_SO_rf_0 == m1__DOT__rf_0_)&&( __ILA_SO_rf_1 == m1__DOT__rf_1_)&&( __ILA_SO_rf_2 == m1__DOT__rf_2_)&&( __ILA_SO_rf_3 == m1__DOT__rf_3_)&&( __ILA_SO_rf_4 == m1__DOT__rf_4_)&&( __ILA_SO_rf_5 == m1__DOT__rf_5_) ;
assign variable_map_assert__p5__ = (~ __IEND__) || (__m4__) ;
assign additional_mapping_control_assume__m6__ = m1__DOT__operand1 <= 5 && m1__DOT__operand2 <= 5 ;
assign __EDCOND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__  ;
assign __IEND__ = (`false|| ( __CYCLE_CNT__ == 4'd1)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign issue_decode__m7__ = (~ __START__) || (__ILA_proc_decode_of_ADD1__) ;
assign issue_valid__m8__ = (~ __START__) || (__ILA_proc_valid__) ;
assign __ISSUE__ = 1 ;
/*mem*/
absmem #( 
    .AW(8),
    .DW(8),
    .TTS(256) )
mi0(
    .clk(clk),
    .rst(rst),
    .vlg_r_rand_input( mi0_vlg_r_rand_input),
    .ila_r_rand_input( mi0_ila_r_rand_input),
    .equal(mem_EQ_),
    .issue( __ISSUE__ ),
    .compare(__IEND__ || __ENDED__),
    .vlg_waddr(__MEM_mem_0_waddr),
    .vlg_wdata(__MEM_mem_0_wdata),
    .vlg_wen(__MEM_mem_0_wen),
    .vlg_raddr(__MEM_mem_0_raddr),
    .vlg_rdata(__MEM_mem_0_rdata),
    .vlg_ren(__MEM_mem_0_ren),
    .ila_wen  ( 1'b0 ) );


proc__DOT__ADD1 m0 (
   .__START__(__START__),
   .clk(clk),
   .op(__ILA_I_op),
   .operand1(__ILA_I_operand1),
   .operand2(__ILA_I_operand2),
   .rst(rst),
   .__ILA_proc_decode_of_ADD1__(__ILA_proc_decode_of_ADD1__),
   .__ILA_proc_valid__(__ILA_proc_valid__),
   .rf_0(__ILA_SO_rf_0),
   .rf_1(__ILA_SO_rf_1),
   .rf_2(__ILA_SO_rf_2),
   .rf_3(__ILA_SO_rf_3),
   .rf_4(__ILA_SO_rf_4),
   .rf_5(__ILA_SO_rf_5),
   .__COUNTER_start__n2()
);
proc m1(
    .clk(clk),
    .m1__DOT__operand1(m1__DOT__operand1),
    .m1__DOT__operand2(m1__DOT__operand2),
    .m1__DOT__rf_0_(m1__DOT__rf_0_),
    .m1__DOT__rf_1_(m1__DOT__rf_1_),
    .m1__DOT__rf_2_(m1__DOT__rf_2_),
    .m1__DOT__rf_3_(m1__DOT__rf_3_),
    .m1__DOT__rf_4_(m1__DOT__rf_4_),
    .m1__DOT__rf_5_(m1__DOT__rf_5_),
    .mem_r_addr(__MEM_mem_0_raddr),
    .mem_r_data(__MEM_mem_0_rdata),
    .mem_r_en(__MEM_mem_0_ren),
    .mem_w_addr(__MEM_mem_0_waddr),
    .mem_w_data(__MEM_mem_0_wdata),
    .mem_w_en(__MEM_mem_0_wen),
    .op(__ILA_I_op),
    .operand1(__ILA_I_operand1),
    .operand2(__ILA_I_operand2),
    .rst(dummy_reset)
);
endmodule
module proc__DOT__ADD1(
__START__,
clk,
op,
operand1,
operand2,
rst,
__ILA_proc_decode_of_ADD1__,
__ILA_proc_valid__,
rf_0,
rf_1,
rf_2,
rf_3,
rf_4,
rf_5,
__COUNTER_start__n2
);
input            __START__;
input            clk;
input      [1:0] op;
input      [2:0] operand1;
input      [2:0] operand2;
input            rst;
output            __ILA_proc_decode_of_ADD1__;
output            __ILA_proc_valid__;
output      [7:0] rf_0;
output      [7:0] rf_1;
output      [7:0] rf_2;
output      [7:0] rf_3;
output      [7:0] rf_4;
output      [7:0] rf_5;
output reg      [7:0] __COUNTER_start__n2;
wire            __ILA_proc_decode_of_ADD1__;
wire            __ILA_proc_valid__;
wire            __START__;
wire      [1:0] bv_2_0_n0;
wire      [2:0] bv_3_0_n8;
wire      [2:0] bv_3_5_n3;
wire      [7:0] bv_8_1_n13;
wire            clk;
wire            n1;
wire            n10;
wire      [2:0] n11;
wire      [7:0] n12;
wire      [7:0] n14;
wire            n15;
wire            n4;
wire            n5;
wire            n6;
wire            n7;
wire      [2:0] n9;
wire      [1:0] op;
wire      [2:0] operand1;
wire      [2:0] operand2;
wire      [7:0] rf_0;
wire      [7:0] rf_1;
wire      [7:0] rf_2;
wire      [7:0] rf_3;
wire      [7:0] rf_4;
wire      [7:0] rf_5;
wire      [2:0] rf_addr0;
wire      [7:0] rf_data0;
wire            rf_wen0;
wire            rst;
reg      [7:0] rf[5:0];
assign rf_0 = rf[0] ;
assign rf_1 = rf[1] ;
assign rf_2 = rf[2] ;
assign rf_3 = rf[3] ;
assign rf_4 = rf[4] ;
assign rf_5 = rf[5] ;
assign __ILA_proc_valid__ = 1'b1 ;
assign bv_2_0_n0 = 2'h0 ;
assign n1 =  ( op ) == ( bv_2_0_n0 )  ;
assign __ILA_proc_decode_of_ADD1__ = n1 ;
assign bv_3_5_n3 = 3'h5 ;
assign n4 =  ( operand1 ) > ( bv_3_5_n3 )  ;
assign n5 = ~ ( n4 )  ;
assign n6 =  ( n1 ) & (n5 )  ;
assign n7 =  ( operand1 ) > ( bv_3_5_n3 )  ;
assign bv_3_0_n8 = 3'h0 ;
assign n9 =  ( n7 ) ? ( bv_3_0_n8 ) : ( operand1 ) ;
assign n10 =  ( operand2 ) > ( bv_3_5_n3 )  ;
assign n11 =  ( n10 ) ? ( bv_3_0_n8 ) : ( operand2 ) ;
assign n12 =  (  rf[n11] )  ;
assign bv_8_1_n13 = 8'h1 ;
assign n14 =  ( n12 ) + ( bv_8_1_n13 )  ;
assign n15 =  ( n1 ) & (n4 )  ;
assign rf_addr0 = n6 ? (n9) : (0) ;
assign rf_data0 = n6 ? (n14) : ('d0) ;
assign rf_wen0 = (n6)&&__START__ ? ( 1'b1 ) : (1'b0) ;
always @(posedge clk) begin
   if(rst) begin
       __COUNTER_start__n2 <= 0;
   end
   else if(__START__ && __ILA_proc_valid__) begin
       if ( __ILA_proc_decode_of_ADD1__ ) begin 
           __COUNTER_start__n2 <= 1; end
       else if( (__COUNTER_start__n2 >= 1 ) && ( __COUNTER_start__n2 < 255 )) begin
           __COUNTER_start__n2 <= __COUNTER_start__n2 + 1; end
       if (rf_wen0) begin
           rf [ rf_addr0 ] <= rf_data0 ;
       end
   end
end
endmodule
module proc(input clk, input rst, input [1:0] op, input [2:0] operand1,  input [2:0] operand2,
output mem_w_en, output [7:0] mem_w_addr, output [7:0] mem_w_data,
output mem_r_en, output [7:0] mem_r_addr, input[7:0] mem_r_data, output wire [2:0] m1__DOT__operand1, output wire [2:0] m1__DOT__operand2, output wire [7:0] m1__DOT__rf_0_, output wire [7:0] m1__DOT__rf_1_, output wire [7:0] m1__DOT__rf_2_, output wire [7:0] m1__DOT__rf_3_, output wire [7:0] m1__DOT__rf_4_, output wire [7:0] m1__DOT__rf_5_);

reg[7:0] rf[0:5]; 
// r0-r5 3-bit to index

// op == 0 : rf[operand1] <= rf[operand2] + 1
// op == 1 : mem[rf[operand1]] <= rf[operand2] (STORE)
// op == 2 : rf[operand1] <= mem[rf[operand2]] (LOAD)

assign mem_w_en = op == 1;
assign mem_r_en = op == 2;
assign mem_w_addr = rf[operand1];
assign mem_r_addr = rf[operand2];
assign mem_w_data = rf[operand2];

always @(posedge clk) begin
  if (op == 0)  begin
    rf[operand1] <= rf[operand2] + 1;
  end
  else if (op == 1) begin
    // do nothing
  end
  else if (op == 2) begin
    rf[operand1] <= mem_r_data;
  end
end


 assign m1__DOT__rf_5_ = rf[5];
 assign m1__DOT__rf_4_ = rf[4];
 assign m1__DOT__rf_3_ = rf[3];
 assign m1__DOT__rf_2_ = rf[2];
 assign m1__DOT__rf_1_ = rf[1];
 assign m1__DOT__rf_0_ = rf[0];
 assign m1__DOT__operand2 = operand2;
 assign m1__DOT__operand1 = operand1;
endmodule


// 1R 1W (x2) d=1 AW(V=I) DW(V=I) absmem
// only work for CoSA
// Hongce Zhang (hongcez@princeton.edu)

module absmem(
  clk,
  rst,
  vlg_raddr,
  vlg_rdata,
  vlg_ren,
  vlg_waddr,
  vlg_wdata,
  vlg_wen,

  vlg_r_rand_input,
  
  ila_raddr,
  ila_rdata,
  ila_ren,
  ila_waddr,
  ila_wdata,
  ila_wen,

  ila_r_rand_input,

  compare,
  equal,
  issue
  );


parameter AW = 16;
parameter DW = 8;
parameter TTS = 65536;

input clk;
input rst;

input  [AW-1:0] vlg_raddr;
output [DW-1:0] vlg_rdata;
input           vlg_ren;
input  [AW-1:0] vlg_waddr;
input  [DW-1:0] vlg_wdata;
input           vlg_wen;
input  [DW-1:0] vlg_r_rand_input;


input  [AW-1:0] ila_raddr;
output [DW-1:0] ila_rdata;
input           ila_ren;
input  [AW-1:0] ila_waddr;
input  [DW-1:0] ila_wdata;
input           ila_wen;
input  [DW-1:0] ila_r_rand_input;

input           compare;
output          equal;
input           issue;

(* keep *)  reg             start_and_on;
(* keep *)  reg [DW-1:0] mem[0:TTS-1];

wire vlg_ren_real;
wire vlg_wen_real;
wire ila_ren_real;
wire ila_wen_real;

(* keep *)  reg          vlg_m_e0;
(* keep *)  reg [AW-1:0] vlg_m_a0;
(* keep *)  reg [DW-1:0] vlg_m_d0;


(* keep *)  reg          ila_m_e0;
(* keep *)  reg [AW-1:0] ila_m_a0;
(* keep *)  reg [DW-1:0] ila_m_d0;

(* keep *)  reg vlg_match_ila;
(* keep *)  reg ila_match_vlg;

always @(posedge clk) begin
  if(rst)
    start_and_on <= 1'b0;
  else if(issue)
    start_and_on <= 1'b1;
end

assign vlg_ren_real = vlg_ren & ~compare & start_and_on;
assign vlg_wen_real = vlg_wen & ~compare & start_and_on;
assign ila_ren_real = ila_ren & ~compare & start_and_on;
assign ila_wen_real = ila_wen & ~compare & start_and_on;


assign vlg_rdata = vlg_ren_real ? 
                      vlg_m_e0 && vlg_m_a0 == vlg_raddr ? vlg_m_d0
                   : 
                      mem[vlg_raddr] : vlg_r_rand_input;

assign ila_rdata = ila_ren_real ?
                      ila_m_e0 && ila_m_a0 == ila_raddr ? ila_m_d0
                   :
                      mem[ila_raddr] : ila_r_rand_input;

always @(posedge clk) begin 
  if( rst ) begin
    vlg_m_e0 <= 1'b0;
  end
  else begin 
    if(  vlg_m_e0 == 0 && vlg_wen_real) begin
      vlg_m_e0 <= 1'b1;
      vlg_m_a0 <= vlg_waddr;
      vlg_m_d0 <= vlg_wdata;
    end
  end
end

always @(posedge clk) begin 
  if( rst ) begin
    ila_m_e0 <= 1'b0;
  end
  else begin 
    if(  ila_m_e0 == 0 && ila_wen_real) begin
      ila_m_e0 <= 1'b1;
      ila_m_a0 <= ila_waddr;
      ila_m_d0 <= ila_wdata;
    end
  end
end

always @(*) begin
  vlg_match_ila = 0;
  if( vlg_m_e0 ) begin
    if(ila_m_e0 == 1 && ila_m_a0 == vlg_m_a0)
      vlg_match_ila = ila_m_d0 == vlg_m_d0;
    else if(vlg_m_d0 == mem[vlg_m_a0])
      vlg_match_ila = 1;
    else
      vlg_match_ila = 0;
  end
  else 
    vlg_match_ila = 1;
end

always @(*) begin
  ila_match_vlg = 0;
  if( ila_m_e0 ) begin
    if(vlg_m_e0 == 1 && ila_m_a0 == vlg_m_a0)
      ila_match_vlg = ila_m_d0 == vlg_m_d0;
    else if(ila_m_d0 == mem[ila_m_a0])
      ila_match_vlg = 1;
    else
      ila_match_vlg = 0;
  end
  else 
    ila_match_vlg = 1;
end

assign equal = compare && ila_match_vlg && vlg_match_ila;

endmodule

  
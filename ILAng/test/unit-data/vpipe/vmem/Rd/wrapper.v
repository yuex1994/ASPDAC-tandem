/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_addra,
__ILA_I_start,
__MEM_mema_0_waddr,
clk,
dummy_reset,
mi0_ila_r_rand_input,
mi0_vlg_r_rand_input,
rst,
__ILA_SO_membuf,
__MEM_mema_0_wdata,
__m2__,
__m4__,
m1__DOT__rdataa_buf,
m1__DOT__state,
mi0_read_assume_true,
noreset__m0__,
start_condition__m6__,
start_condition__m7__,
start_condition__m8__,
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
input     [31:0] __ILA_I_addra;
input            __ILA_I_start;
input     [31:0] __MEM_mema_0_waddr;
input            clk;
input            dummy_reset;
input      [7:0] mi0_ila_r_rand_input;
input      [7:0] mi0_vlg_r_rand_input;
input            rst;
output      [7:0] __ILA_SO_membuf;
output      [7:0] __MEM_mema_0_wdata;
output            __m2__;
output            __m4__;
output      [7:0] m1__DOT__rdataa_buf;
output      [1:0] m1__DOT__state;
output            mi0_read_assume_true;
output            noreset__m0__;
output            start_condition__m6__;
output            start_condition__m7__;
output            start_condition__m8__;
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
(* keep *) wire     [31:0] __ILA_I_addra;
(* keep *) wire            __ILA_I_start;
(* keep *) wire            __ILA_MemRd_decode_of_Rd__;
(* keep *) wire            __ILA_MemRd_valid__;
(* keep *) wire      [7:0] __ILA_SO_membuf;
(* keep *) wire     [31:0] __IMEM_mema_0_raddr;
(* keep *) wire      [7:0] __IMEM_mema_0_rdata;
(* keep *) wire            __ISSUE__;
(* keep *) wire     [31:0] __MEM_mema_0_raddr;
(* keep *) wire      [7:0] __MEM_mema_0_rdata;
(* keep *) wire            __MEM_mema_0_ren;
(* keep *) wire     [31:0] __MEM_mema_0_waddr;
(* keep *) wire      [7:0] __MEM_mema_0_wdata;
(* keep *) wire            __m2__;
(* keep *) wire            __m4__;
wire            clk;
(* keep *) wire            dummy_reset;
(* keep *) wire      [7:0] m1__DOT__rdataa_buf;
(* keep *) wire      [1:0] m1__DOT__state;
(* keep *) wire            mema_EQ_;
(* keep *) wire            noreset__m0__;
wire            rst;
(* keep *) wire            start_condition__m6__;
(* keep *) wire            start_condition__m7__;
(* keep *) wire            start_condition__m8__;
(* keep *) wire            variable_map_assert__p5__;
(* keep *) wire            variable_map_assume___m1__;
(* keep *) wire            variable_map_assume___m3__;
assign noreset__m0__ =  (~__RESETED__) || (dummy_reset == 0)  ;
always @(posedge clk) begin
if (rst) __CYCLE_CNT__ <= 0;
else if ( ( __START__ || __STARTED__ ) &&  __CYCLE_CNT__ < 7) __CYCLE_CNT__ <= __CYCLE_CNT__ + 1;
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
assign __m2__ = m1__DOT__rdataa_buf == __ILA_SO_membuf ;
assign variable_map_assume___m3__ = (~ __START__ )|| (__m2__) ;
assign __m4__ = m1__DOT__rdataa_buf == __ILA_SO_membuf ;
assign variable_map_assert__p5__ = (~ __IEND__) || (__m4__) ;
assign __EDCOND__ = (`false|| ( __CYCLE_CNT__ == 4'd2)) && __STARTED__  ;
assign __IEND__ = (`false|| ( __CYCLE_CNT__ == 4'd2)) && __STARTED__ && __RESETED__ && (~ __ENDED__) ;
assign start_condition__m6__ = (~ __START__) || m1__DOT__state == 0 ;
assign start_condition__m7__ = (~ __START__) || __ILA_MemRd_valid__ ;
assign start_condition__m8__ = (~ __START__) || __ILA_MemRd_decode_of_Rd__ ;
assign __ISSUE__ = 1 ;
assign __MEM_mema_0_ren = m1__DOT__state == 1 ;
/*mema*/
absmem #( 
    .AW(32),
    .DW(8),
    .TTS(4294967296) )
mi0(
    .clk(clk),
    .rst(rst),
    .vlg_r_rand_input( mi0_vlg_r_rand_input),
    .ila_r_rand_input( mi0_ila_r_rand_input),
    .equal(mema_EQ_),
    .issue( __ISSUE__ ),
    .compare(__IEND__ || __ENDED__),
    .vlg_wen(1'b0),
    .vlg_waddr(__MEM_mema_0_waddr),
    .vlg_wdata(__MEM_mema_0_wdata),
    .vlg_raddr(__MEM_mema_0_raddr),
    .vlg_rdata(__MEM_mema_0_rdata),
    .vlg_ren(__MEM_mema_0_ren),
    .ila_wen  ( 1'b0 ),
    .ila_raddr(__IMEM_mema_0_raddr),
    .ila_rdata(__IMEM_mema_0_rdata),
    .ila_ren  (__START__) );


MemRd__DOT__Rd m0 (
   .__START__(__START__),
   .addra(__ILA_I_addra),
   .clk(clk),
   .rst(rst),
   .start(__ILA_I_start),
   .__ILA_MemRd_decode_of_Rd__(__ILA_MemRd_decode_of_Rd__),
   .__ILA_MemRd_valid__(__ILA_MemRd_valid__),
   .mema_data_n4(__IMEM_mema_0_rdata),
   .mema_addr_n3(__IMEM_mema_0_raddr),
   .membuf(__ILA_SO_membuf),
   .__COUNTER_start__n2()
);
rdtop m1(
    .addra(__ILA_I_addra),
    .clk(clk),
    .m1__DOT__rdataa_buf(m1__DOT__rdataa_buf),
    .m1__DOT__state(m1__DOT__state),
    .mem_a_raddr(__MEM_mema_0_raddr),
    .mem_a_rdata(__MEM_mema_0_rdata),
    .rst(dummy_reset),
    .start(__ILA_I_start)
);
endmodule
module MemRd__DOT__Rd(
__START__,
addra,
clk,
rst,
start,
__ILA_MemRd_decode_of_Rd__,
__ILA_MemRd_valid__,
mema_data_n4,
mema_addr_n3,
membuf,
__COUNTER_start__n2
);
input            __START__;
input     [31:0] addra;
input            clk;
input            rst;
input            start;
input      [7:0] mema_data_n4;
output            __ILA_MemRd_decode_of_Rd__;
output            __ILA_MemRd_valid__;
output     [31:0] mema_addr_n3;
output reg      [7:0] membuf;
output reg      [7:0] __COUNTER_start__n2;
wire            __ILA_MemRd_decode_of_Rd__;
wire            __ILA_MemRd_valid__;
wire            __START__;
wire     [31:0] addra;
wire            bv_1_1_n0;
wire            clk;
wire     [31:0] mema_addr_n3;
wire      [7:0] mema_data_n4;
(* keep *) wire      [7:0] membuf_randinit;
wire            n1;
wire      [7:0] n5;
wire            rst;
wire            start;
assign __ILA_MemRd_valid__ = 1'b1 ;
assign bv_1_1_n0 = 1'h1 ;
assign n1 =  ( start ) == ( bv_1_1_n0 )  ;
assign __ILA_MemRd_decode_of_Rd__ = n1 ;
assign mema_addr_n3 = addra ;
assign n5 = mema_data_n4 ;
always @(posedge clk) begin
   if(rst) begin
       membuf <= membuf_randinit ;
       __COUNTER_start__n2 <= 0;
   end
   else if(__START__ && __ILA_MemRd_valid__) begin
       if ( __ILA_MemRd_decode_of_Rd__ ) begin 
           __COUNTER_start__n2 <= 1; end
       else if( (__COUNTER_start__n2 >= 1 ) && ( __COUNTER_start__n2 < 255 )) begin
           __COUNTER_start__n2 <= __COUNTER_start__n2 + 1; end
       if (__ILA_MemRd_decode_of_Rd__) begin
           membuf <= n5 ;
       end
   end
end
endmodule
module rdtop (
  input clk,    // Clock
  input rst,  // Synchronous reset active high
  input [31:0] addra,
  input start,

  output [31:0] mem_a_raddr,
  input  [7:0] mem_a_rdata, output wire [7:0] m1__DOT__rdataa_buf, output wire [1:0] m1__DOT__state);

`define IDLE 2'd0
`define SEND_READ 2'd1

(* keep *) reg [1:0] state;
reg [1:0] next_state;

reg [31:0] raddra_buf;
(* keep *) reg [ 7:0] rdataa_buf;

always @(*) begin
  next_state = state;
  case(state)
    `IDLE: next_state = start ? `SEND_READ : `IDLE;
    `SEND_READ: next_state = `IDLE;
    default: next_state = `IDLE;
  endcase
end


always @(posedge clk) begin
  if(rst)
    state <= `IDLE;
  else begin
    state <= next_state;
  end
end


always @(posedge clk) begin
  if(state == `IDLE && next_state == `SEND_READ) begin
    raddra_buf <= addra;
  end
end

always @(posedge clk) begin
  if(state == `SEND_READ && next_state == `IDLE) begin
    rdataa_buf <= mem_a_rdata;
  end
end

assign mem_a_raddr = raddra_buf;

 assign m1__DOT__state = state;
 assign m1__DOT__rdataa_buf = rdataa_buf;
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

  
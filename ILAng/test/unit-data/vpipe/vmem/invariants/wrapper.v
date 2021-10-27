/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_addra,
__ILA_I_addrb,
__ILA_I_start,
clk,
mi0_ila_r_rand_input,
mi0_vlg_r_rand_input,
mi1_ila_r_rand_input,
mi1_vlg_r_rand_input,
rst,
invariant_assert__p0__,
m1__DOT__state,
mi0_read_assume_true,
mi1_read_assume_true
);
input     [31:0] __ILA_I_addra;
input     [31:0] __ILA_I_addrb;
input            __ILA_I_start;
input            clk;
input      [7:0] mi0_ila_r_rand_input;
input      [7:0] mi0_vlg_r_rand_input;
input      [7:0] mi1_ila_r_rand_input;
input      [7:0] mi1_vlg_r_rand_input;
input            rst;
output            invariant_assert__p0__;
output      [1:0] m1__DOT__state;
output            mi0_read_assume_true;
output            mi1_read_assume_true;
(* keep *) wire     [31:0] __ILA_I_addra;
(* keep *) wire     [31:0] __ILA_I_addrb;
(* keep *) wire            __ILA_I_start;
(* keep *) wire     [31:0] __MEM_mema_0_raddr;
(* keep *) wire      [7:0] __MEM_mema_0_rdata;
(* keep *) wire            __MEM_mema_0_ren;
(* keep *) wire     [31:0] __MEM_mema_0_waddr;
(* keep *) wire      [7:0] __MEM_mema_0_wdata;
(* keep *) wire            __MEM_mema_0_wen;
(* keep *) wire     [31:0] __MEM_memb_0_raddr;
(* keep *) wire      [7:0] __MEM_memb_0_rdata;
(* keep *) wire            __MEM_memb_0_ren;
(* keep *) wire     [31:0] __MEM_memb_0_waddr;
(* keep *) wire      [7:0] __MEM_memb_0_wdata;
(* keep *) wire            __MEM_memb_0_wen;
wire            clk;
(* keep *) wire            invariant_assert__p0__;
(* keep *) wire      [1:0] m1__DOT__state;
(* keep *) wire            mema_EQ_;
(* keep *) wire            memb_EQ_;
wire            rst;
assign invariant_assert__p0__ = (1==1) ;
assign __MEM_mema_0_ren = ((m1__DOT__state == 1)?1'b1:1'b0) ;
assign __MEM_memb_0_ren = m1__DOT__state == 1 ;
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
    .vlg_waddr(__MEM_mema_0_waddr),
    .vlg_wdata(__MEM_mema_0_wdata),
    .vlg_wen(__MEM_mema_0_wen),
    .vlg_raddr(__MEM_mema_0_raddr),
    .vlg_rdata(__MEM_mema_0_rdata),
    .vlg_ren(__MEM_mema_0_ren),
    .ila_wen  ( 1'b0 ) );

/*memb*/
absmem #( 
    .AW(32),
    .DW(8),
    .TTS(4294967296) )
mi1(
    .clk(clk),
    .rst(rst),
    .vlg_r_rand_input( mi1_vlg_r_rand_input),
    .ila_r_rand_input( mi1_ila_r_rand_input),
    .equal(memb_EQ_),
    .issue( __ISSUE__ ),
    .compare(__IEND__ || __ENDED__),
    .vlg_waddr(__MEM_memb_0_waddr),
    .vlg_wdata(__MEM_memb_0_wdata),
    .vlg_wen(__MEM_memb_0_wen),
    .vlg_raddr(__MEM_memb_0_raddr),
    .vlg_rdata(__MEM_memb_0_rdata),
    .vlg_ren(__MEM_memb_0_ren),
    .ila_wen  ( 1'b0 ) );


swap m1(
    .addra(__ILA_I_addra),
    .addrb(__ILA_I_addrb),
    .clk(clk),
    .m1__DOT__state(m1__DOT__state),
    .mem_a_raddr(__MEM_mema_0_raddr),
    .mem_a_rdata(__MEM_mema_0_rdata),
    .mem_a_waddr(__MEM_mema_0_waddr),
    .mem_a_wdata(__MEM_mema_0_wdata),
    .mem_a_wen(__MEM_mema_0_wen),
    .mem_b_raddr(__MEM_memb_0_raddr),
    .mem_b_rdata(__MEM_memb_0_rdata),
    .mem_b_waddr(__MEM_memb_0_waddr),
    .mem_b_wdata(__MEM_memb_0_wdata),
    .mem_b_wen(__MEM_memb_0_wen),
    .rst(rst),
    .start(__ILA_I_start)
);
endmodule
module swap (
  input clk,    // Clock
  input rst,  // Synchronous reset active high
  input [31:0] addra,
  input [31:0] addrb,
  input start,

  output [31:0] mem_a_raddr,
  input  [7:0] mem_a_rdata,

  output  [31:0] mem_a_waddr,
  output  [7:0] mem_a_wdata,
  output  mem_a_wen,

  output [31:0] mem_b_raddr,
  input  [7:0] mem_b_rdata,

  output  [31:0] mem_b_waddr,
  output  [7:0] mem_b_wdata,
  output  mem_b_wen, output wire [1:0] m1__DOT__state);
`define IDLE 2'd0
`define SEND_READ 2'd1
`define SEND_WRITE 2'd2

(* keep *) reg [1:0] state;
reg [1:0] next_state;

reg [31:0] raddra_buf;
reg [31:0] raddrb_buf;
reg [ 7:0] rdataa_buf;
reg [ 7:0] rdatab_buf;

always @(*) begin
  next_state = state;
  case(state)
    `IDLE: next_state = start ? `SEND_READ : `IDLE;
    `SEND_READ: next_state = `SEND_WRITE;
    `SEND_WRITE: next_state = `IDLE;
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
    raddrb_buf <= addrb;
  end
end

always @(posedge clk) begin
  if(state == `SEND_READ && next_state == `SEND_WRITE) begin
    rdataa_buf <= mem_a_rdata;
    rdatab_buf <= mem_b_rdata;
  end
end


assign mem_a_raddr = raddra_buf;
assign mem_b_raddr = raddrb_buf;
assign mem_a_waddr = raddra_buf;
assign mem_b_waddr = raddrb_buf;
assign mem_a_wdata = rdatab_buf;
assign mem_b_wdata = rdataa_buf;
assign mem_a_wen   = state == `SEND_WRITE;
assign mem_b_wen   = state == `SEND_WRITE;


 assign m1__DOT__state = state;
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

  
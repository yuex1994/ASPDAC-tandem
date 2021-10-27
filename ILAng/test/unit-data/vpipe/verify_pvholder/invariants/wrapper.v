/* PREHEADER */

`define true  1'b1

`define false 1'b0



/* END OF PREHEADER */
module wrapper(
__ILA_I_inst,
__VLG_I_dummy_read_rf,
clk,
rst,
__ILA_SO_r0,
__ILA_SO_r1,
__ILA_SO_r2,
__ILA_SO_r3,
__VLG_O_dummy_rf_data,
invariant_assert__p0__,
invariant_assert__p10__,
invariant_assert__p11__,
invariant_assert__p12__,
invariant_assert__p13__,
invariant_assert__p14__,
invariant_assert__p15__,
invariant_assert__p1__,
invariant_assert__p2__,
invariant_assert__p3__,
invariant_assert__p4__,
invariant_assert__p5__,
invariant_assert__p6__,
invariant_assert__p7__,
invariant_assert__p8__,
invariant_assert__p9__,
m1__DOT__ex_wb_rd,
m1__DOT__ex_wb_reg_wen,
m1__DOT__ex_wb_val,
m1__DOT__id_ex_rd,
m1__DOT__id_ex_reg_wen,
m1__DOT__reg_0_w_stage,
m1__DOT__reg_1_w_stage,
m1__DOT__reg_2_w_stage,
m1__DOT__reg_3_w_stage,
delay_wb_write
);
input      [7:0] __ILA_I_inst;
input      [1:0] __VLG_I_dummy_read_rf;
input            clk;
input            rst;
output      [7:0] __ILA_SO_r0;
output      [7:0] __ILA_SO_r1;
output      [7:0] __ILA_SO_r2;
output      [7:0] __ILA_SO_r3;
output      [7:0] __VLG_O_dummy_rf_data;
output            invariant_assert__p0__;
output            invariant_assert__p10__;
output            invariant_assert__p11__;
output            invariant_assert__p12__;
output            invariant_assert__p13__;
output            invariant_assert__p14__;
output            invariant_assert__p15__;
output            invariant_assert__p1__;
output            invariant_assert__p2__;
output            invariant_assert__p3__;
output            invariant_assert__p4__;
output            invariant_assert__p5__;
output            invariant_assert__p6__;
output            invariant_assert__p7__;
output            invariant_assert__p8__;
output            invariant_assert__p9__;
output      [1:0] m1__DOT__ex_wb_rd;
output            m1__DOT__ex_wb_reg_wen;
output      [7:0] m1__DOT__ex_wb_val;
output      [1:0] m1__DOT__id_ex_rd;
output            m1__DOT__id_ex_reg_wen;
output      [1:0] m1__DOT__reg_0_w_stage;
output      [1:0] m1__DOT__reg_1_w_stage;
output      [1:0] m1__DOT__reg_2_w_stage;
output      [1:0] m1__DOT__reg_3_w_stage;
output reg      [7:0] delay_wb_write;
(* keep *) wire      [7:0] __ILA_I_inst;
(* keep *) wire      [7:0] __ILA_SO_r0;
(* keep *) wire      [7:0] __ILA_SO_r1;
(* keep *) wire      [7:0] __ILA_SO_r2;
(* keep *) wire      [7:0] __ILA_SO_r3;
(* keep *) wire      [1:0] __VLG_I_dummy_read_rf;
(* keep *) wire      [7:0] __VLG_O_dummy_rf_data;
wire            clk;
(* keep *) wire            invariant_assert__p0__;
(* keep *) wire            invariant_assert__p10__;
(* keep *) wire            invariant_assert__p11__;
(* keep *) wire            invariant_assert__p12__;
(* keep *) wire            invariant_assert__p13__;
(* keep *) wire            invariant_assert__p14__;
(* keep *) wire            invariant_assert__p15__;
(* keep *) wire            invariant_assert__p1__;
(* keep *) wire            invariant_assert__p2__;
(* keep *) wire            invariant_assert__p3__;
(* keep *) wire            invariant_assert__p4__;
(* keep *) wire            invariant_assert__p5__;
(* keep *) wire            invariant_assert__p6__;
(* keep *) wire            invariant_assert__p7__;
(* keep *) wire            invariant_assert__p8__;
(* keep *) wire            invariant_assert__p9__;
(* keep *) wire      [1:0] m1__DOT__ex_wb_rd;
(* keep *) wire            m1__DOT__ex_wb_reg_wen;
(* keep *) wire      [7:0] m1__DOT__ex_wb_val;
(* keep *) wire      [1:0] m1__DOT__id_ex_rd;
(* keep *) wire            m1__DOT__id_ex_reg_wen;
(* keep *) wire      [1:0] m1__DOT__reg_0_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_1_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_2_w_stage;
(* keep *) wire      [1:0] m1__DOT__reg_3_w_stage;
wire            rst;
assign invariant_assert__p0__ = ((! (m1__DOT__reg_0_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd0) ) )) ;
assign invariant_assert__p1__ = ((! (m1__DOT__reg_1_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd1) ) )) ;
assign invariant_assert__p2__ = ((! (m1__DOT__reg_2_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd2) ) )) ;
assign invariant_assert__p3__ = ((! (m1__DOT__reg_3_w_stage == 2'b00 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd3) ) )) ;
assign invariant_assert__p4__ = ((! (m1__DOT__reg_0_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd0) ) )) ;
assign invariant_assert__p5__ = ((! (m1__DOT__reg_1_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd1) ) )) ;
assign invariant_assert__p6__ = ((! (m1__DOT__reg_2_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd2) ) )) ;
assign invariant_assert__p7__ = ((! (m1__DOT__reg_3_w_stage == 2'b10 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 0) || (m1__DOT__ex_wb_rd != 2'd3) ) )) ;
assign invariant_assert__p8__ = ((! (m1__DOT__reg_0_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd0) ) )) ;
assign invariant_assert__p9__ = ((! (m1__DOT__reg_1_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd1) ) )) ;
assign invariant_assert__p10__ = ((! (m1__DOT__reg_2_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd2) ) )) ;
assign invariant_assert__p11__ = ((! (m1__DOT__reg_3_w_stage == 2'b11 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 1) && (m1__DOT__id_ex_rd == 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd3) ) )) ;
assign invariant_assert__p12__ = ((! (m1__DOT__reg_0_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd0) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd0) ) )) ;
assign invariant_assert__p13__ = ((! (m1__DOT__reg_1_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd1) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd1) ) )) ;
assign invariant_assert__p14__ = ((! (m1__DOT__reg_2_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd2) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd2) ) )) ;
assign invariant_assert__p15__ = ((! (m1__DOT__reg_3_w_stage == 2'b01 ) ) ||  ( ( (m1__DOT__id_ex_reg_wen == 0) || (m1__DOT__id_ex_rd != 2'd3) ) && ( (m1__DOT__ex_wb_reg_wen == 1) && (m1__DOT__ex_wb_rd == 2'd3) ) )) ;
always @(posedge clk) begin
  delay_wb_write <= m1__DOT__ex_wb_val;
end


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
    .rst(rst)
);
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
, output wire [1:0] m1__DOT__ex_wb_rd, output wire  m1__DOT__ex_wb_reg_wen, output wire [7:0] m1__DOT__ex_wb_val, output wire [1:0] m1__DOT__id_ex_rd, output wire  m1__DOT__id_ex_reg_wen, output wire [1:0] m1__DOT__reg_0_w_stage, output wire [1:0] m1__DOT__reg_1_w_stage, output wire [1:0] m1__DOT__reg_2_w_stage, output wire [1:0] m1__DOT__reg_3_w_stage);

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

reg [7:0] registers[3:0];

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

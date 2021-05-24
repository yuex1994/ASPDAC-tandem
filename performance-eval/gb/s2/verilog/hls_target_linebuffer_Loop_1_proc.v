// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.3
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module hls_target_linebuffer_Loop_1_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        arg_1_TDATA,
        arg_1_TVALID,
        arg_1_TREADY,
        arg_1_TLAST,
        in_stream_V_value_V_din,
        in_stream_V_value_V_full_n,
        in_stream_V_value_V_write
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st4_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_true = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv19_0 = 19'b0000000000000000000;
parameter    ap_const_lv19_4D340 = 19'b1001101001101000000;
parameter    ap_const_lv19_1 = 19'b1;
parameter    ap_const_lv32_2 = 32'b10;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [7:0] arg_1_TDATA;
input   arg_1_TVALID;
output   arg_1_TREADY;
input  [0:0] arg_1_TLAST;
output  [7:0] in_stream_V_value_V_din;
input   in_stream_V_value_V_full_n;
output   in_stream_V_value_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg in_stream_V_value_V_write;
reg    ap_done_reg = 1'b0;
//(* fsm_encoding = "none" *) 
reg   [2:0] ap_CS_fsm = 3'b1; // XXX
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [7:0] in_axi_stream_V_value_V_0_data_out;
wire    in_axi_stream_V_value_V_0_vld_in;
wire    in_axi_stream_V_value_V_0_vld_out;
reg    in_axi_stream_V_value_V_0_ack_out;
reg   [7:0] in_axi_stream_V_value_V_0_data_reg;
reg    in_axi_stream_V_value_V_0_areset_d;
reg    in_axi_stream_V_value_V_0_in_rdy = 1'b0;
reg    in_axi_stream_V_value_V_0_has_vld_data_reg_i;
reg    in_axi_stream_V_value_V_0_has_vld_data_reg = 1'b0;
wire    in_axi_stream_V_last_V_0_vld_in;
reg    in_axi_stream_V_last_V_0_ack_out;
reg    in_axi_stream_V_last_V_0_in_rdy = 1'b0;
reg    in_axi_stream_V_last_V_0_has_vld_data_reg_i;
reg    in_axi_stream_V_last_V_0_has_vld_data_reg = 1'b0;
reg   [18:0] indvar_flatten_reg_61 /*verilator public*/;
wire   [0:0] exitcond_flatten_fu_72_p2;
reg   [0:0] exitcond_flatten_reg_88;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_108;
reg    ap_sig_bdd_114;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_sig_bdd_121;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
wire   [18:0] indvar_flatten_next_fu_78_p2;
reg   [7:0] empty_18_reg_97_0 /*verilator public*/;
reg    ap_sig_bdd_142;
reg    ap_sig_cseq_ST_st4_fsm_2;
reg    ap_sig_bdd_172;
reg   [2:0] ap_NS_fsm;




/// the current state (ap_CS_fsm) of the state machine. ///
always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

/// ap_done_reg assign process. ///
always @ (posedge ap_clk) begin : ap_ret_ap_done_reg
    if (ap_rst == 1'b1) begin
        ap_done_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_continue)) begin
            ap_done_reg <= ap_const_logic_0;
        end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2)) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

/// ap_reg_ppiten_pp0_it0 assign process. ///
always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) & ~(exitcond_flatten_fu_72_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_142)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

/// ap_reg_ppiten_pp0_it1 assign process. ///
always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_142) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) & ~(exitcond_flatten_fu_72_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

/// in_axi_stream_V_last_V_0_has_vld_data_reg assign process. ///
always @ (posedge ap_clk) begin : ap_ret_in_axi_stream_V_last_V_0_has_vld_data_reg
    if (ap_rst == 1'b1) begin
        in_axi_stream_V_last_V_0_has_vld_data_reg <= ap_const_logic_0;
    end else begin
        in_axi_stream_V_last_V_0_has_vld_data_reg <= in_axi_stream_V_last_V_0_has_vld_data_reg_i;
    end
end

/// in_axi_stream_V_last_V_0_in_rdy assign process. ///
always @ (posedge ap_clk) begin : ap_ret_in_axi_stream_V_last_V_0_in_rdy
    if (ap_rst == 1'b1) begin
        in_axi_stream_V_last_V_0_in_rdy <= ap_const_logic_0;
    end else begin
        in_axi_stream_V_last_V_0_in_rdy <= (in_axi_stream_V_last_V_0_ack_out | ~in_axi_stream_V_last_V_0_has_vld_data_reg_i);
    end
end

/// in_axi_stream_V_value_V_0_has_vld_data_reg assign process. ///
always @ (posedge ap_clk) begin : ap_ret_in_axi_stream_V_value_V_0_has_vld_data_reg
    if (ap_rst == 1'b1) begin
        in_axi_stream_V_value_V_0_has_vld_data_reg <= ap_const_logic_0;
    end else begin
        in_axi_stream_V_value_V_0_has_vld_data_reg <= in_axi_stream_V_value_V_0_has_vld_data_reg_i;
    end
end

/// in_axi_stream_V_value_V_0_in_rdy assign process. ///
always @ (posedge ap_clk) begin : ap_ret_in_axi_stream_V_value_V_0_in_rdy
    if (ap_rst == 1'b1) begin
        in_axi_stream_V_value_V_0_in_rdy <= ap_const_logic_0;
    end else begin
        in_axi_stream_V_value_V_0_in_rdy <= (in_axi_stream_V_value_V_0_ack_out | ~in_axi_stream_V_value_V_0_has_vld_data_reg_i);
    end
end

/// assign process. ///
always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        indvar_flatten_reg_61 <= indvar_flatten_next_fu_78_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_142)) begin
        indvar_flatten_reg_61 <= ap_const_lv19_0;
    end
end

/// assign process. ///
always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        empty_18_reg_97_0 <= in_axi_stream_V_value_V_0_data_out;
    end
end

/// assign process. ///
always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        exitcond_flatten_reg_88 <= exitcond_flatten_fu_72_p2;
    end
end

/// assign process. ///
always @ (posedge ap_clk) begin
    if ((ap_true == ap_true)) begin
        in_axi_stream_V_value_V_0_areset_d <= ap_rst;
    end
end

/// assign process. ///
always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == in_axi_stream_V_value_V_0_vld_in) & (ap_const_logic_1 == in_axi_stream_V_value_V_0_in_rdy))) begin
        in_axi_stream_V_value_V_0_data_reg <= arg_1_TDATA;
    end
end

/// ap_done assign process. ///
always @ (ap_done_reg or ap_sig_cseq_ST_st4_fsm_2) begin
    if (((ap_const_logic_1 == ap_done_reg) | (ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

/// ap_idle assign process. ///
always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_ready assign process. ///
always @ (ap_sig_cseq_ST_st4_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_pp0_stg0_fsm_1 assign process. ///
always @ (ap_sig_bdd_108) begin
    if (ap_sig_bdd_108) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st1_fsm_0 assign process. ///
always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st4_fsm_2 assign process. ///
always @ (ap_sig_bdd_172) begin
    if (ap_sig_bdd_172) begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    end
end

/// in_axi_stream_V_last_V_0_ack_out assign process. ///
always @ (exitcond_flatten_fu_72_p2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_114 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_121 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        in_axi_stream_V_last_V_0_ack_out = ap_const_logic_1;
    end else begin
        in_axi_stream_V_last_V_0_ack_out = ap_const_logic_0;
    end
end

/// in_axi_stream_V_last_V_0_has_vld_data_reg_i assign process. ///
always @ (in_axi_stream_V_last_V_0_vld_in or in_axi_stream_V_last_V_0_ack_out or in_axi_stream_V_last_V_0_in_rdy or in_axi_stream_V_last_V_0_has_vld_data_reg) begin
    if (((ap_const_logic_1 == in_axi_stream_V_last_V_0_vld_in) & (ap_const_logic_0 == in_axi_stream_V_last_V_0_ack_out) & (ap_const_logic_1 == in_axi_stream_V_last_V_0_in_rdy))) begin
        in_axi_stream_V_last_V_0_has_vld_data_reg_i = ap_const_logic_1;
    end else if (((ap_const_logic_1 == in_axi_stream_V_last_V_0_ack_out) & (ap_const_logic_1 == in_axi_stream_V_last_V_0_has_vld_data_reg) & ((ap_const_logic_0 == in_axi_stream_V_last_V_0_vld_in) | (ap_const_logic_0 == in_axi_stream_V_last_V_0_in_rdy)))) begin
        in_axi_stream_V_last_V_0_has_vld_data_reg_i = ap_const_logic_0;
    end else begin
        in_axi_stream_V_last_V_0_has_vld_data_reg_i = in_axi_stream_V_last_V_0_has_vld_data_reg;
    end
end

/// in_axi_stream_V_value_V_0_ack_out assign process. ///
always @ (exitcond_flatten_fu_72_p2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_114 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_121 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        in_axi_stream_V_value_V_0_ack_out = ap_const_logic_1;
    end else begin
        in_axi_stream_V_value_V_0_ack_out = ap_const_logic_0;
    end
end

/// in_axi_stream_V_value_V_0_data_out assign process. ///
always @ (arg_1_TDATA or in_axi_stream_V_value_V_0_data_reg or in_axi_stream_V_value_V_0_has_vld_data_reg) begin
    if ((ap_const_logic_1 == in_axi_stream_V_value_V_0_has_vld_data_reg)) begin
        in_axi_stream_V_value_V_0_data_out = in_axi_stream_V_value_V_0_data_reg;
    end else begin
        in_axi_stream_V_value_V_0_data_out = arg_1_TDATA;
    end
end

/// in_axi_stream_V_value_V_0_has_vld_data_reg_i assign process. ///
always @ (in_axi_stream_V_value_V_0_vld_in or in_axi_stream_V_value_V_0_ack_out or in_axi_stream_V_value_V_0_in_rdy or in_axi_stream_V_value_V_0_has_vld_data_reg) begin
    if (((ap_const_logic_1 == in_axi_stream_V_value_V_0_vld_in) & (ap_const_logic_0 == in_axi_stream_V_value_V_0_ack_out) & (ap_const_logic_1 == in_axi_stream_V_value_V_0_in_rdy))) begin
        in_axi_stream_V_value_V_0_has_vld_data_reg_i = ap_const_logic_1;
    end else if (((ap_const_logic_1 == in_axi_stream_V_value_V_0_ack_out) & (ap_const_logic_1 == in_axi_stream_V_value_V_0_has_vld_data_reg) & ((ap_const_logic_0 == in_axi_stream_V_value_V_0_vld_in) | (ap_const_logic_0 == in_axi_stream_V_value_V_0_in_rdy)))) begin
        in_axi_stream_V_value_V_0_has_vld_data_reg_i = ap_const_logic_0;
    end else begin
        in_axi_stream_V_value_V_0_has_vld_data_reg_i = in_axi_stream_V_value_V_0_has_vld_data_reg;
    end
end

/// in_stream_V_value_V_write assign process. ///
always @ (exitcond_flatten_reg_88 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_114 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_121 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten_reg_88 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))))) begin
        in_stream_V_value_V_write = ap_const_logic_1;
    end else begin
        in_stream_V_value_V_write = ap_const_logic_0;
    end
end
/// the next state (ap_NS_fsm) of the state machine. ///
always @ (ap_CS_fsm or exitcond_flatten_fu_72_p2 or ap_sig_bdd_114 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_121 or ap_reg_ppiten_pp0_it1 or ap_sig_bdd_142) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_142) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if (~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) & ~(exitcond_flatten_fu_72_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_114 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | (ap_sig_bdd_121 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) & ~(exitcond_flatten_fu_72_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_st4_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end
        end
        ap_ST_st4_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end


/// ap_sig_bdd_108 assign process. ///
always @ (ap_CS_fsm) begin
    ap_sig_bdd_108 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end

/// ap_sig_bdd_114 assign process. ///
always @ (in_axi_stream_V_value_V_0_vld_out or exitcond_flatten_fu_72_p2) begin
    ap_sig_bdd_114 = ((in_axi_stream_V_value_V_0_vld_out == ap_const_logic_0) & (exitcond_flatten_fu_72_p2 == ap_const_lv1_0));
end

/// ap_sig_bdd_121 assign process. ///
always @ (in_stream_V_value_V_full_n or exitcond_flatten_reg_88) begin
    ap_sig_bdd_121 = ((in_stream_V_value_V_full_n == ap_const_logic_0) & (exitcond_flatten_reg_88 == ap_const_lv1_0));
end

/// ap_sig_bdd_142 assign process. ///
always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_142 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end

/// ap_sig_bdd_172 assign process. ///
always @ (ap_CS_fsm) begin
    ap_sig_bdd_172 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end

/// ap_sig_bdd_22 assign process. ///
always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end
assign arg_1_TREADY = in_axi_stream_V_last_V_0_in_rdy;
assign exitcond_flatten_fu_72_p2 = (indvar_flatten_reg_61 == ap_const_lv19_4D340? 1'b1: 1'b0);
assign in_axi_stream_V_last_V_0_vld_in = arg_1_TVALID;
assign in_axi_stream_V_value_V_0_vld_in = arg_1_TVALID;
assign in_axi_stream_V_value_V_0_vld_out = ((arg_1_TVALID | in_axi_stream_V_value_V_0_has_vld_data_reg) & ~in_axi_stream_V_value_V_0_areset_d);
assign in_stream_V_value_V_din = empty_18_reg_97_0;
assign indvar_flatten_next_fu_78_p2 = (indvar_flatten_reg_61 + ap_const_lv19_1);


endmodule //hls_target_linebuffer_Loop_1_proc


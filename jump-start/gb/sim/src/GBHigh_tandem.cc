#include <GBHigh_ila_top.h>

void GBHigh::check_arg_1_TREADY(TandemController* v) {
if (((uint32_t) GBHigh_arg_1_TREADY) != v->v_top->arg_1_TREADY)
  throw GBHighException("arg_1_TREADY unequal.");
}
void GBHigh::check_arg_0_TVALID(TandemController* v) {
if (((uint32_t) GBHigh_arg_0_TVALID) != v->v_top->arg_0_TVALID)
  throw GBHighException("arg_0_TVALID unequal.");
}
void GBHigh::check_arg_0_TDATA(TandemController* v) {
if (((uint32_t) GBHigh_arg_0_TDATA) != v->v_top->arg_0_TDATA)
  throw GBHighException("arg_0_TDATA unequal.");
}
void GBHigh::check_ram_x(TandemController* v) {
uint9_t i_reg = ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? 488 : GBHigh_ram_x;
uint9_t v_reg = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->col_reg_349 : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->col_reg_349 : 0;
if (((uint32_t) i_reg) != v_reg)
  throw GBHighException("ram_x unequal.");
}
void GBHigh::check_ram_y(TandemController* v) {
uint10_t i_reg = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? GBHigh_ram_y + 1 : GBHigh_ram_y;
uint10_t v_reg = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->row_1_reg_693 : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->row_1_reg_693 : 0;
if (((uint32_t) i_reg) != v_reg)
  throw GBHighException("ram_y unequal.");
}
void GBHigh::check_ram_w(TandemController* v) {
uint3_t i_reg = ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? GBHigh_ram_w - 1 : GBHigh_ram_w;
uint3_t v_reg = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->write_idx_1_1_reg_338 : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->write_idx_1_1_reg_338 : 0;
if (((uint32_t) i_reg) != v_reg)
  throw GBHighException("ram_w unequal.");
}
void GBHigh::check_stencil0(TandemController* v) {
if ((GBHigh_stencil0 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[0])
  throw GBHighException("stencil0 unequal.");
if ((GBHigh_stencil0 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[1])
  throw GBHighException("stencil0 unequal.");
if ((GBHigh_stencil0 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[2])
  throw GBHighException("stencil0 unequal.");
}
void GBHigh::check_stencil1(TandemController* v) {
if ((GBHigh_stencil1 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[0])
  throw GBHighException("stencil1 unequal.");
if ((GBHigh_stencil1 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[1])
  throw GBHighException("stencil1 unequal.");
if ((GBHigh_stencil1 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[2])
  throw GBHighException("stencil1 unequal.");
}
void GBHigh::check_stencil2(TandemController* v) {
if ((GBHigh_stencil2 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[0])
  throw GBHighException("stencil2 unequal.");
if ((GBHigh_stencil2 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[1])
  throw GBHighException("stencil2 unequal.");
if ((GBHigh_stencil2 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[2])
  throw GBHighException("stencil2 unequal.");
}
void GBHigh::check_stencil3(TandemController* v) {
if ((GBHigh_stencil3 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[0])
  throw GBHighException("stencil3 unequal.");
if ((GBHigh_stencil3 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[1])
  throw GBHighException("stencil3 unequal.");
if ((GBHigh_stencil3 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[2])
  throw GBHighException("stencil3 unequal.");
}
void GBHigh::check_stencil4(TandemController* v) {
if ((GBHigh_stencil4 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[0])
  throw GBHighException("stencil4 unequal.");
if ((GBHigh_stencil4 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[1])
  throw GBHighException("stencil4 unequal.");
if ((GBHigh_stencil4 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[2])
  throw GBHighException("stencil4 unequal.");
}
void GBHigh::check_stencil5(TandemController* v) {
if ((GBHigh_stencil5 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[0])
  throw GBHighException("stencil5 unequal.");
if ((GBHigh_stencil5 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[1])
  throw GBHighException("stencil5 unequal.");
if ((GBHigh_stencil5 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[2])
  throw GBHighException("stencil5 unequal.");
}
void GBHigh::check_stencil6(TandemController* v) {
if ((GBHigh_stencil6 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[0])
  throw GBHighException("stencil6 unequal.");
if ((GBHigh_stencil6 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[1])
  throw GBHighException("stencil6 unequal.");
if ((GBHigh_stencil6 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[2])
  throw GBHighException("stencil6 unequal.");
}
void GBHigh::check_stencil7(TandemController* v) {
if ((GBHigh_stencil7 >> 0) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[0])
  throw GBHighException("stencil7 unequal.");
if ((GBHigh_stencil7 >> 32) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[1])
  throw GBHighException("stencil7 unequal.");
if ((GBHigh_stencil7 >> 64) % (1ll << 32) != v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[2])
  throw GBHighException("stencil7 unequal.");
}
void GBHigh::check_ram0(TandemController* v) {
}
void GBHigh::check_ram1(TandemController* v) {
}
void GBHigh::check_ram2(TandemController* v) {
}
void GBHigh::check_ram3(TandemController* v) {
}
void GBHigh::check_ram4(TandemController* v) {
}
void GBHigh::check_ram5(TandemController* v) {
}
void GBHigh::check_ram6(TandemController* v) {
}
void GBHigh::check_ram7(TandemController* v) {
}
void GBHigh::check_all_state(TandemController* v) {
    check_arg_1_TREADY(v);
  check_arg_0_TVALID(v);
  check_arg_0_TDATA(v);
  check_ram_x(v);
  check_ram_y(v);
  check_ram_w(v);
  check_stencil0(v);
  check_stencil1(v);
  check_stencil2(v);
  check_stencil3(v);
  check_stencil4(v);
  check_stencil5(v);
  check_stencil6(v);
  check_stencil7(v);
  check_ram0(v);
  check_ram1(v);
  check_ram2(v);
  check_ram3(v);
  check_ram4(v);
  check_ram5(v);
  check_ram6(v);
  check_ram7(v);
}
void GBHigh::tandem_instr_Write (TandemController* v) {
check_arg_0_TDATA(v);
check_arg_0_TVALID(v);
check_arg_1_TREADY(v);
check_ram_w(v);
check_ram_x(v);
check_ram_y(v);
check_stencil0(v);
check_stencil1(v);
check_stencil2(v);
check_stencil3(v);
check_stencil4(v);
check_stencil5(v);
check_stencil6(v);
check_stencil7(v);
}
void GBHigh::tandem_instr_Read (TandemController* v) {
check_arg_0_TDATA(v);
check_arg_0_TVALID(v);
check_arg_1_TREADY(v);
check_ram_w(v);
check_ram_x(v);
check_ram_y(v);
check_stencil0(v);
check_stencil1(v);
check_stencil2(v);
check_stencil3(v);
check_stencil4(v);
check_stencil5(v);
check_stencil6(v);
check_stencil7(v);
}
void GBHigh::swap_av(TandemController* v) {
  v->v_top->arg_1_TREADY = (uint32_t) GBHigh_arg_1_TREADY;
v->v_top->arg_0_TVALID = (uint32_t) GBHigh_arg_0_TVALID;
v->v_top->arg_0_TDATA = (uint32_t) GBHigh_arg_0_TDATA;
uint9_t i_reg_GBHigh_ram_x = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? GBHigh_ram_x : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? 488 : GBHigh_ram_x;
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->col_reg_349 = (uint32_t) i_reg_GBHigh_ram_x;
uint10_t i_reg_GBHigh_ram_y = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? GBHigh_ram_y + 1 : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? GBHigh_ram_y : GBHigh_ram_y;
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->row_1_reg_693 = (uint32_t) i_reg_GBHigh_ram_y;
uint3_t i_reg_GBHigh_ram_w = ((GBHigh_ram_y < 1) || (GBHigh_ram_x >= 3)) ? GBHigh_ram_w : ((GBHigh_ram_y >= 1) && (GBHigh_ram_x < 3)) ? GBHigh_ram_w - 1 : GBHigh_ram_w;
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->write_idx_1_1_reg_338 = (uint32_t) i_reg_GBHigh_ram_w;
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[0] = (uint32_t) (GBHigh_stencil0 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[1] = (uint32_t) (GBHigh_stencil0 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100_helper[2] = (uint32_t) (GBHigh_stencil0 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[0] = (uint32_t) (GBHigh_stencil1 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[1] = (uint32_t) (GBHigh_stencil1 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104_helper[2] = (uint32_t) (GBHigh_stencil1 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[0] = (uint32_t) (GBHigh_stencil2 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[1] = (uint32_t) (GBHigh_stencil2 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108_helper[2] = (uint32_t) (GBHigh_stencil2 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[0] = (uint32_t) (GBHigh_stencil3 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[1] = (uint32_t) (GBHigh_stencil3 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112_helper[2] = (uint32_t) (GBHigh_stencil3 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[0] = (uint32_t) (GBHigh_stencil4 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[1] = (uint32_t) (GBHigh_stencil4 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116_helper[2] = (uint32_t) (GBHigh_stencil4 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[0] = (uint32_t) (GBHigh_stencil5 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[1] = (uint32_t) (GBHigh_stencil5 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120_helper[2] = (uint32_t) (GBHigh_stencil5 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[0] = (uint32_t) (GBHigh_stencil6 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[1] = (uint32_t) (GBHigh_stencil6 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124_helper[2] = (uint32_t) (GBHigh_stencil6 >> 64) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[0] = (uint32_t) (GBHigh_stencil7 >> 0) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[1] = (uint32_t) (GBHigh_stencil7 >> 32) % (1ll << 32);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96_helper[2] = (uint32_t) (GBHigh_stencil7 >> 64) % (1ll << 32);
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_0_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram0[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_1_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram1[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_2_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram2[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_3_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram3[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_4_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram4[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_5_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram5[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_6_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram6[conv_i];
}
for (int conv_i = 0; conv_i < 488; conv_i++) {
  v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_buf_proc_U0->buffer_7_value_V_U->hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram_U->ram[conv_i] = GBHigh_ram7[conv_i];
}
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[1]|= ((((uint32_t) (GBHigh_stencil0 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[1]|= ((((uint32_t) (GBHigh_stencil0 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[0]|= ((((uint32_t) (GBHigh_stencil0 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[0]|= ((((uint32_t) (GBHigh_stencil0 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[0]|= ((((uint32_t) (GBHigh_stencil0 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[1]|= ((((uint32_t) (GBHigh_stencil0 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[1]|= ((((uint32_t) (GBHigh_stencil1 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[1]|= ((((uint32_t) (GBHigh_stencil1 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[0]|= ((((uint32_t) (GBHigh_stencil1 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[0]|= ((((uint32_t) (GBHigh_stencil1 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[0]|= ((((uint32_t) (GBHigh_stencil1 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[1]|= ((((uint32_t) (GBHigh_stencil1 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[1]|= ((((uint32_t) (GBHigh_stencil2 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[1]|= ((((uint32_t) (GBHigh_stencil2 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[0]|= ((((uint32_t) (GBHigh_stencil2 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[0]|= ((((uint32_t) (GBHigh_stencil2 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[0]|= ((((uint32_t) (GBHigh_stencil2 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[1]|= ((((uint32_t) (GBHigh_stencil2 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[1]|= ((((uint32_t) (GBHigh_stencil3 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[1]|= ((((uint32_t) (GBHigh_stencil3 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[0]|= ((((uint32_t) (GBHigh_stencil3 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[0]|= ((((uint32_t) (GBHigh_stencil3 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[0]|= ((((uint32_t) (GBHigh_stencil3 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[1]|= ((((uint32_t) (GBHigh_stencil3 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[1]|= ((((uint32_t) (GBHigh_stencil4 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[1]|= ((((uint32_t) (GBHigh_stencil4 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[0]|= ((((uint32_t) (GBHigh_stencil4 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[0]|= ((((uint32_t) (GBHigh_stencil4 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[0]|= ((((uint32_t) (GBHigh_stencil4 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[1]|= ((((uint32_t) (GBHigh_stencil4 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[1]|= ((((uint32_t) (GBHigh_stencil5 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[1]|= ((((uint32_t) (GBHigh_stencil5 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[0]|= ((((uint32_t) (GBHigh_stencil5 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[0]|= ((((uint32_t) (GBHigh_stencil5 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[0]|= ((((uint32_t) (GBHigh_stencil5 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[1]|= ((((uint32_t) (GBHigh_stencil5 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[1]|= ((((uint32_t) (GBHigh_stencil6 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[1]|= ((((uint32_t) (GBHigh_stencil6 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[0]|= ((((uint32_t) (GBHigh_stencil6 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[0]|= ((((uint32_t) (GBHigh_stencil6 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[0]|= ((((uint32_t) (GBHigh_stencil6 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[1]|= ((((uint32_t) (GBHigh_stencil6 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[1]|= ((((uint32_t) (GBHigh_stencil7 >> 16)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[1]|= ((((uint32_t) (GBHigh_stencil7 >> 24)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[0]|= ((((uint32_t) (GBHigh_stencil7 >> 40)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[0]|= ((((uint32_t) (GBHigh_stencil7 >> 48)) & ((uint32_t) 0xff)) << 16);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[0]|= ((((uint32_t) (GBHigh_stencil7 >> 56)) & ((uint32_t) 0xff)) << 8);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[1]|= ((((uint32_t) (GBHigh_stencil7 >> 8)) & ((uint32_t) 0xff)) << 24);
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[1]|= (((uint32_t) (GBHigh_stencil0 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[0]|= (((uint32_t) (GBHigh_stencil0 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[1]|= (((uint32_t) (GBHigh_stencil1 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[0]|= (((uint32_t) (GBHigh_stencil1 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[1]|= (((uint32_t) (GBHigh_stencil2 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[0]|= (((uint32_t) (GBHigh_stencil2 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[1]|= (((uint32_t) (GBHigh_stencil3 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[0]|= (((uint32_t) (GBHigh_stencil3 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[1]|= (((uint32_t) (GBHigh_stencil4 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[0]|= (((uint32_t) (GBHigh_stencil4 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[1]|= (((uint32_t) (GBHigh_stencil5 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[0]|= (((uint32_t) (GBHigh_stencil5 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[1]|= (((uint32_t) (GBHigh_stencil6 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[0]|= (((uint32_t) (GBHigh_stencil6 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[1]|= (((uint32_t) (GBHigh_stencil7 >> 32)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[0]|= (((uint32_t) (GBHigh_stencil7 >> 64)) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_0_value_V_fu_100[2]|= (((uint32_t) GBHigh_stencil0) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_1_value_V_fu_104[2]|= (((uint32_t) GBHigh_stencil1) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_2_value_V_fu_108[2]|= (((uint32_t) GBHigh_stencil2) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_4_value_V_fu_116[2]|= (((uint32_t) GBHigh_stencil4) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_5_value_V_fu_120[2]|= (((uint32_t) GBHigh_stencil5) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_6_value_V_fu_124[2]|= (((uint32_t) GBHigh_stencil6) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_7_value_V_fu_96[2]|= (((uint32_t) GBHigh_stencil7) & ((uint32_t) 0xff));
v->v_top->hls_target->hls_target_linebuffer_1_U0->hls_target_linebuffer_U0->hls_target_call_U0->hls_target_call_Loop_LB2D_shift_proc_U0->buffer_3_value_V_fu_112[2]|= (((uint32_t)GBHigh_stencil3) & ((uint32_t) 0xff));
}
void GBHigh::av_converter(TandemController *v) {
  swap_av(v);
}

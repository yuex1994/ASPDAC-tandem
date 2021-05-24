#include <GBHigh.h>
void GBHigh::setup_initial_condition() {
GBHigh_st_ready = 1;
GBHigh_arg_1_TREADY = 1;
GBHigh_stencil8 = 0;
GBHigh_stencil7 = 0;
GBHigh_cur_pic = 0;
GBHigh_stencil6 = 0;
  GBHigh_stencil5 = 0;
  Propagate_proc_in = 0;
  GBHigh_arg_0_TDATA = 0;
  GBHigh_stencil4 = 0;
  Propagate_pre_pix = 0;
  GBHigh_arg_0_TVALID = 0;
  GBHigh_stencil2 = 0;
  GBHigh_ram_w = 0;
  GBHigh_stencil3 = 0;
  GBHigh_gbit = 0;
  GBHigh_ram_x = 0;
  GBHigh_stencil0 = 0;
  GBHigh_ram_y = 0;
  GBHigh_stencil1 = 0;
  GBHigh_arg_0_TDATA = 0;
  GBHigh_ram0.clear();
  GBHigh_ram1.clear();
  GBHigh_ram2.clear();
  GBHigh_ram3.clear();
  GBHigh_ram4.clear();
  GBHigh_ram5.clear();
  GBHigh_ram6.clear();
  GBHigh_ram7.clear();
  

}

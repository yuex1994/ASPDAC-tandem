#include <GBHigh.h>
bool GBHigh::decode_GBHigh_Write() {
uint1_t local_var_1 = 1;
bool local_var_2 = (GBHigh_arg_1_TVALID == local_var_1);
uint1_t local_var_4 = 1;
bool local_var_5 = (GBHigh_arg_1_TREADY == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
uint1_t local_var_8 = 0;
bool local_var_9 = (GBHigh_arg_0_TVALID == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
uint1_t local_var_12 = 0;
bool local_var_13 = (GBHigh_arg_0_TREADY == local_var_12);
bool local_var_14 = (local_var_10 & local_var_13);
auto& univ_var_108 = local_var_14;
return univ_var_108;
}
void GBHigh::update_GBHigh_Write() {
auto GBHigh_arg_0_TDATA_nxt_holder = GBHigh_arg_0_TDATA;
uint1_t local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
uint1_t local_var_2 = 0;
auto local_var_2_nxt_holder = local_var_2;
auto GBHigh_arg_1_TDATA_nxt_holder = GBHigh_arg_1_TDATA;
auto GBHigh_ram_w_nxt_holder = GBHigh_ram_w;
auto GBHigh_ram_x_nxt_holder = GBHigh_ram_x;
auto GBHigh_ram_y_nxt_holder = GBHigh_ram_y;
auto GBHigh_stencil0_nxt_holder = GBHigh_stencil0;
auto GBHigh_stencil1_nxt_holder = GBHigh_stencil1;
auto GBHigh_stencil2_nxt_holder = GBHigh_stencil2;
auto GBHigh_stencil3_nxt_holder = GBHigh_stencil3;
auto GBHigh_stencil4_nxt_holder = GBHigh_stencil4;
auto GBHigh_stencil5_nxt_holder = GBHigh_stencil5;
auto GBHigh_stencil6_nxt_holder = GBHigh_stencil6;
auto GBHigh_stencil7_nxt_holder = GBHigh_stencil7;
auto GBHigh_stencil8_nxt_holder = GBHigh_stencil8;
GBHigh_arg_0_TDATA = GBHigh_arg_0_TDATA_nxt_holder;
GBHigh_arg_0_TVALID = local_var_1_nxt_holder;
GBHigh_arg_1_TREADY = local_var_2_nxt_holder;
GBHigh_cur_pic = GBHigh_arg_1_TDATA_nxt_holder;
GBHigh_ram_w = GBHigh_ram_w_nxt_holder;
GBHigh_ram_x = GBHigh_ram_x_nxt_holder;
GBHigh_ram_y = GBHigh_ram_y_nxt_holder;
GBHigh_stencil0 = GBHigh_stencil0_nxt_holder;
GBHigh_stencil1 = GBHigh_stencil1_nxt_holder;
GBHigh_stencil2 = GBHigh_stencil2_nxt_holder;
GBHigh_stencil3 = GBHigh_stencil3_nxt_holder;
GBHigh_stencil4 = GBHigh_stencil4_nxt_holder;
GBHigh_stencil5 = GBHigh_stencil5_nxt_holder;
GBHigh_stencil6 = GBHigh_stencil6_nxt_holder;
GBHigh_stencil7 = GBHigh_stencil7_nxt_holder;
GBHigh_stencil8 = GBHigh_stencil8_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "Write state updates:" << std::endl;
instr_update_log << "    GBHigh_arg_0_TDATA => " << std::hex << "0x" << GBHigh_arg_0_TDATA << std::endl; 
instr_update_log << "    GBHigh_arg_0_TVALID => " << std::hex << "0x" << GBHigh_arg_0_TVALID << std::endl; 
instr_update_log << "    GBHigh_arg_1_TREADY => " << std::hex << "0x" << GBHigh_arg_1_TREADY << std::endl; 
instr_update_log << "    GBHigh_cur_pic => " << std::hex << "0x" << GBHigh_cur_pic << std::endl; 
instr_update_log << "    GBHigh_ram_w => " << std::hex << "0x" << GBHigh_ram_w << std::endl; 
instr_update_log << "    GBHigh_ram_x => " << std::hex << "0x" << GBHigh_ram_x << std::endl; 
instr_update_log << "    GBHigh_ram_y => " << std::hex << "0x" << GBHigh_ram_y << std::endl; 
instr_update_log << "    GBHigh_stencil0 => " << std::hex << "0x" << GBHigh_stencil0 << std::endl; 
instr_update_log << "    GBHigh_stencil1 => " << std::hex << "0x" << GBHigh_stencil1 << std::endl; 
instr_update_log << "    GBHigh_stencil2 => " << std::hex << "0x" << GBHigh_stencil2 << std::endl; 
instr_update_log << "    GBHigh_stencil3 => " << std::hex << "0x" << GBHigh_stencil3 << std::endl; 
instr_update_log << "    GBHigh_stencil4 => " << std::hex << "0x" << GBHigh_stencil4 << std::endl; 
instr_update_log << "    GBHigh_stencil5 => " << std::hex << "0x" << GBHigh_stencil5 << std::endl; 
instr_update_log << "    GBHigh_stencil6 => " << std::hex << "0x" << GBHigh_stencil6 << std::endl; 
instr_update_log << "    GBHigh_stencil7 => " << std::hex << "0x" << GBHigh_stencil7 << std::endl; 
instr_update_log << "    GBHigh_stencil8 => " << std::hex << "0x" << GBHigh_stencil8 << std::endl; 
instr_update_log << std::endl;
#endif
}

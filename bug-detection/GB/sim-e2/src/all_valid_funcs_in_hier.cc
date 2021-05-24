#include <GBHigh.h>
bool GBHigh::valid_Propagate() {
uint1_t local_var_1 = 0;
bool local_var_2 = (GBHigh_arg_1_TREADY == local_var_1);
bool local_var_4 = (GBHigh_arg_0_TREADY == local_var_1);
bool local_var_5 = (local_var_2 & local_var_4);
auto& univ_var_0 = local_var_5;
return univ_var_0;
}
bool GBHigh::valid_GBHigh() {
uint1_t local_var_1 = 1;
bool local_var_2 = (GBHigh_arg_0_TREADY == local_var_1);
uint1_t local_var_4 = 1;
bool local_var_5 = (GBHigh_arg_0_TVALID == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
bool local_var_8 = (GBHigh_arg_1_TVALID == local_var_4);
bool local_var_10 = (GBHigh_arg_1_TREADY == local_var_1);
bool local_var_11 = (local_var_8 & local_var_10);
bool local_var_12 = (local_var_6 | local_var_11);
auto& univ_var_1 = local_var_12;
return univ_var_1;
}

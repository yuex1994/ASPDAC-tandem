#include <flex.h>
bool flex::decode_PE0_CORE_CHILD_PE0_core_prep() {
sc_biguint<1> local_var_1 = 1;
bool local_var_2 = (flex_pe0_rnn_layer_sizing_is_valid == local_var_1);
sc_biguint<1> local_var_4 = 1;
bool local_var_5 = (PE0_CORE_CHILD_pe0_core_is_start == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
sc_biguint<3> local_var_8 = 1;
bool local_var_9 = (flex_pe0_core_state == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_28 = local_var_10;
return univ_var_28;
}
void flex::update_PE0_CORE_CHILD_PE0_core_prep() {
sc_biguint<32> local_var_0 = 0;
auto local_var_0_nxt_holder = local_var_0;
sc_biguint<32> local_var_1 = 0;
auto local_var_1_nxt_holder = local_var_1;
sc_biguint<32> local_var_2 = 0;
auto local_var_2_nxt_holder = local_var_2;
sc_biguint<32> local_var_3 = 0;
auto local_var_3_nxt_holder = local_var_3;
sc_biguint<32> local_var_4 = 0;
auto local_var_4_nxt_holder = local_var_4;
sc_biguint<32> local_var_5 = 0;
auto local_var_5_nxt_holder = local_var_5;
sc_biguint<32> local_var_6 = 0;
auto local_var_6_nxt_holder = local_var_6;
sc_biguint<32> local_var_7 = 0;
auto local_var_7_nxt_holder = local_var_7;
sc_biguint<32> local_var_8 = 0;
auto local_var_8_nxt_holder = local_var_8;
sc_biguint<32> local_var_9 = 0;
auto local_var_9_nxt_holder = local_var_9;
sc_biguint<32> local_var_10 = 0;
auto local_var_10_nxt_holder = local_var_10;
sc_biguint<32> local_var_11 = 0;
auto local_var_11_nxt_holder = local_var_11;
sc_biguint<32> local_var_12 = 0;
auto local_var_12_nxt_holder = local_var_12;
sc_biguint<32> local_var_13 = 0;
auto local_var_13_nxt_holder = local_var_13;
sc_biguint<32> local_var_14 = 0;
auto local_var_14_nxt_holder = local_var_14;
sc_biguint<32> local_var_15 = 0;
auto local_var_15_nxt_holder = local_var_15;
sc_biguint<32> local_var_16 = 0;
auto local_var_16_nxt_holder = local_var_16;
sc_biguint<32> local_var_17 = 0;
auto local_var_17_nxt_holder = local_var_17;
sc_biguint<32> local_var_18 = 0;
auto local_var_18_nxt_holder = local_var_18;
sc_biguint<32> local_var_19 = 0;
auto local_var_19_nxt_holder = local_var_19;
sc_biguint<32> local_var_20 = 0;
auto local_var_20_nxt_holder = local_var_20;
sc_biguint<32> local_var_21 = 0;
auto local_var_21_nxt_holder = local_var_21;
sc_biguint<32> local_var_22 = 0;
auto local_var_22_nxt_holder = local_var_22;
sc_biguint<32> local_var_23 = 0;
auto local_var_23_nxt_holder = local_var_23;
sc_biguint<32> local_var_24 = 0;
auto local_var_24_nxt_holder = local_var_24;
sc_biguint<32> local_var_25 = 0;
auto local_var_25_nxt_holder = local_var_25;
sc_biguint<32> local_var_26 = 0;
auto local_var_26_nxt_holder = local_var_26;
sc_biguint<32> local_var_27 = 0;
auto local_var_27_nxt_holder = local_var_27;
sc_biguint<32> local_var_28 = 0;
auto local_var_28_nxt_holder = local_var_28;
sc_biguint<32> local_var_29 = 0;
auto local_var_29_nxt_holder = local_var_29;
sc_biguint<32> local_var_30 = 0;
auto local_var_30_nxt_holder = local_var_30;
sc_biguint<32> local_var_31 = 0;
auto local_var_31_nxt_holder = local_var_31;
sc_biguint<16> local_var_32 = 0;
auto local_var_32_nxt_holder = local_var_32;
sc_biguint<1> local_var_34 = 1;
bool local_var_35 = (flex_pe0_rnn_layer_sizing_is_zero_first == local_var_34);
sc_biguint<1> local_var_37 = 0;
bool local_var_38 = (PE0_CORE_CHILD_pe0_core_manager_cntr == local_var_37);
auto local_var_41 = (local_var_38) ? flex_pe0_mem_mngr_first_zero_active : flex_pe0_mem_mngr_second_zero_active;
sc_biguint<1> local_var_42 = 1;
bool local_var_43 = (local_var_41 == local_var_42);
bool local_var_44 = (local_var_35 & local_var_43);
sc_biguint<3> local_var_45 = 3;
sc_biguint<3> local_var_46 = 2;
auto local_var_47 = (local_var_44) ? local_var_45 : local_var_46;
auto local_var_47_nxt_holder = local_var_47;
PE0_CORE_CHILD_PE0_core_accum_vector_0 = local_var_0_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_1 = local_var_1_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_10 = local_var_2_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_11 = local_var_3_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_12 = local_var_4_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_13 = local_var_5_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_14 = local_var_6_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_15 = local_var_7_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_2 = local_var_8_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_3 = local_var_9_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_4 = local_var_10_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_5 = local_var_11_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_6 = local_var_12_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_7 = local_var_13_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_8 = local_var_14_nxt_holder;
PE0_CORE_CHILD_PE0_core_accum_vector_9 = local_var_15_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_0 = local_var_16_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_1 = local_var_17_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_10 = local_var_18_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_11 = local_var_19_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_12 = local_var_20_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_13 = local_var_21_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_14 = local_var_22_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_15 = local_var_23_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_2 = local_var_24_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_3 = local_var_25_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_4 = local_var_26_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_5 = local_var_27_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_6 = local_var_28_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_7 = local_var_29_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_8 = local_var_30_nxt_holder;
PE0_CORE_CHILD_PE0_core_act_vector_reg_9 = local_var_31_nxt_holder;
PE0_CORE_CHILD_pe0_core_child_run_mac_flag = local_var_32_nxt_holder;
flex_pe0_core_state = local_var_47_nxt_holder;
}

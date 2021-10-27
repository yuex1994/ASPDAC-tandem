analyze -sva  \
  simple_pipe.v \
  ila.v \
  wrapper.v

elaborate -top wrapper
clock clk
reset rst
assume -name noreset0 { (~__RESETED__) || (dummy_reset == 0) }
assume -name variable_map_assume_1 {(~ __START__ )|| ((~( m1.reg_0_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b00 ) || (m1.registers[0]  == __ILA_SO_r0)))}
assume -name variable_map_assume_2 {(~ __START__ )|| ((~( m1.reg_1_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b00 ) || (m1.registers[1]  == __ILA_SO_r1)))}
assume -name variable_map_assume_3 {(~ __START__ )|| ((~( m1.reg_2_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b00 ) || (m1.registers[2]  == __ILA_SO_r2)))}
assume -name variable_map_assume_4 {(~ __START__ )|| ((~ (( m1.reg_3_w_stage == 2'b10 ) ) || (__m0__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&( m1.reg_3_w_stage == 2'b11 ) ) || (__m1__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&~( m1.reg_3_w_stage == 2'b11 )&&( m1.reg_3_w_stage == 2'b01 ) ) || (__m2__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&~( m1.reg_3_w_stage == 2'b11 )&&~( m1.reg_3_w_stage == 2'b01 )&&( m1.reg_3_w_stage == 2'b00 ) ) || ( m1.registers[3]  == __ILA_SO_r3)))}
assume -name invariant_assume5 {(! (m1.reg_0_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd0) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd0) ) )}
assume -name invariant_assume6 {(! (m1.reg_1_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd1) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd1) ) )}
assume -name invariant_assume7 {(! (m1.reg_2_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd2) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd2) ) )}
assume -name invariant_assume8 {(! (m1.reg_3_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd3) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd3) ) )}
assume -name invariant_assume9 {(! (m1.reg_0_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd0) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd0) ) )}
assume -name invariant_assume10 {(! (m1.reg_1_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd1) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd1) ) )}
assume -name invariant_assume11 {(! (m1.reg_2_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd2) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd2) ) )}
assume -name invariant_assume12 {(! (m1.reg_3_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd3) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd3) ) )}
assume -name invariant_assume13 {(! (m1.reg_0_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd0) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd0) ) )}
assume -name invariant_assume14 {(! (m1.reg_1_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd1) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd1) ) )}
assume -name invariant_assume15 {(! (m1.reg_2_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd2) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd2) ) )}
assume -name invariant_assume16 {(! (m1.reg_3_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd3) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd3) ) )}
assume -name invariant_assume17 {(! (m1.reg_0_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd0) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd0) ) )}
assume -name invariant_assume18 {(! (m1.reg_1_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd1) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd1) ) )}
assume -name invariant_assume19 {(! (m1.reg_2_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd2) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd2) ) )}
assume -name invariant_assume20 {(! (m1.reg_3_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd3) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd3) ) )}
assume -name additional_mapping_control_assume21 {m1.reg_0_w_stage_nxt != 2'b11}
assume -name issue_decode22 {(~ __START__) || (__ILA_simplePipe_decode_of_NOP__)}
assume -name issue_valid23 {(~ __START__) || (__ILA_simplePipe_valid__)}
assert -name variable_map_assert0 {(~ __IEND__) || ((~( m1.reg_0_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r0) )&&( ~( m1.reg_0_w_stage == 2'b00 ) || (m1.registers[0]  == __ILA_SO_r0)))}
assert -name variable_map_assert1 {(~ __IEND__) || ((~( m1.reg_1_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r1) )&&( ~( m1.reg_1_w_stage == 2'b00 ) || (m1.registers[1]  == __ILA_SO_r1)))}
assert -name variable_map_assert2 {(~ __IEND__) || ((~( m1.reg_2_w_stage == 2'b10 ) || (m1.ex_alu_result == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b11 ) || (m1.ex_alu_result == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b01 ) || (m1.ex_wb_val     == __ILA_SO_r2) )&&( ~( m1.reg_2_w_stage == 2'b00 ) || (m1.registers[2]  == __ILA_SO_r2)))}
assert -name variable_map_assert3 {(~ __IEND__) || ((~ (( m1.reg_3_w_stage == 2'b10 ) ) || (__m3__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&( m1.reg_3_w_stage == 2'b11 ) ) || (__m4__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&~( m1.reg_3_w_stage == 2'b11 )&&( m1.reg_3_w_stage == 2'b01 ) ) || (__m5__) )&&( ~ (~( m1.reg_3_w_stage == 2'b10 )&&~( m1.reg_3_w_stage == 2'b11 )&&~( m1.reg_3_w_stage == 2'b01 )&&( m1.reg_3_w_stage == 2'b00 ) ) || ( m1.registers[3]  == __ILA_SO_r3)))}

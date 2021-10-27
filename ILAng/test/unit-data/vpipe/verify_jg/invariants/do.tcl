analyze -sva  \
  simple_pipe.v \
  wrapper.v

elaborate -top wrapper
clock clk
reset rst
assert -name invariant_assert0 {((! (m1.reg_0_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd0) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd0) ) ))}
assert -name invariant_assert1 {((! (m1.reg_1_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd1) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd1) ) ))}
assert -name invariant_assert2 {((! (m1.reg_2_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd2) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd2) ) ))}
assert -name invariant_assert3 {((! (m1.reg_3_w_stage == 2'b00 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd3) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd3) ) ))}
assert -name invariant_assert4 {((! (m1.reg_0_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd0) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd0) ) ))}
assert -name invariant_assert5 {((! (m1.reg_1_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd1) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd1) ) ))}
assert -name invariant_assert6 {((! (m1.reg_2_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd2) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd2) ) ))}
assert -name invariant_assert7 {((! (m1.reg_3_w_stage == 2'b10 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd3) ) && ( (m1.ex_wb_reg_wen == 0) || (m1.ex_wb_rd != 2'd3) ) ))}
assert -name invariant_assert8 {((! (m1.reg_0_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd0) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd0) ) ))}
assert -name invariant_assert9 {((! (m1.reg_1_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd1) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd1) ) ))}
assert -name invariant_assert10 {((! (m1.reg_2_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd2) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd2) ) ))}
assert -name invariant_assert11 {((! (m1.reg_3_w_stage == 2'b11 ) ) ||  ( ( (m1.id_ex_reg_wen == 1) && (m1.id_ex_rd == 2'd3) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd3) ) ))}
assert -name invariant_assert12 {((! (m1.reg_0_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd0) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd0) ) ))}
assert -name invariant_assert13 {((! (m1.reg_1_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd1) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd1) ) ))}
assert -name invariant_assert14 {((! (m1.reg_2_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd2) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd2) ) ))}
assert -name invariant_assert15 {((! (m1.reg_3_w_stage == 2'b01 ) ) ||  ( ( (m1.id_ex_reg_wen == 0) || (m1.id_ex_rd != 2'd3) ) && ( (m1.ex_wb_reg_wen == 1) && (m1.ex_wb_rd == 2'd3) ) ))}

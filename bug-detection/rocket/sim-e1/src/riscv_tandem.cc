#include <riscv_ila_top.h>

void riscv::check_pc(TandemController* v) {
if (((uint32_t) riscv_pc) != v->curr_monitor->p_m[2])
  throw riscvException("pc unequal.");
}
void riscv::check_x0(TandemController* v) {
if (((uint32_t) riscv_x0) != v->v_top->Rocket->_T_590[31])
  throw riscvException("x0 unequal.");
}
void riscv::check_x1(TandemController* v) {
if (((uint32_t) riscv_x1) != v->v_top->Rocket->_T_590[30])
  throw riscvException("x1 unequal.");
}
void riscv::check_x2(TandemController* v) {
if (((uint32_t) riscv_x2) != v->v_top->Rocket->_T_590[29])
  throw riscvException("x2 unequal.");
}
void riscv::check_x3(TandemController* v) {
if (((uint32_t) riscv_x3) != v->v_top->Rocket->_T_590[28])
  throw riscvException("x3 unequal.");
}
void riscv::check_x4(TandemController* v) {
if (((uint32_t) riscv_x4) != v->v_top->Rocket->_T_590[27])
  throw riscvException("x4 unequal.");
}
void riscv::check_x5(TandemController* v) {
if (((uint32_t) riscv_x5) != v->v_top->Rocket->_T_590[26])
  throw riscvException("x5 unequal.");
}
void riscv::check_x6(TandemController* v) {
if (((uint32_t) riscv_x6) != v->v_top->Rocket->_T_590[25])
  throw riscvException("x6 unequal.");
}
void riscv::check_x7(TandemController* v) {
if (((uint32_t) riscv_x7) != v->v_top->Rocket->_T_590[24])
  throw riscvException("x7 unequal.");
}
void riscv::check_x8(TandemController* v) {
if (((uint32_t) riscv_x8) != v->v_top->Rocket->_T_590[23])
  throw riscvException("x8 unequal.");
}
void riscv::check_x9(TandemController* v) {
if (((uint32_t) riscv_x9) != v->v_top->Rocket->_T_590[22])
  throw riscvException("x9 unequal.");
}
void riscv::check_x10(TandemController* v) {
if (((uint32_t) riscv_x10) != v->v_top->Rocket->_T_590[21])
  throw riscvException("x10 unequal.");
}
void riscv::check_x11(TandemController* v) {
if (((uint32_t) riscv_x11) != v->v_top->Rocket->_T_590[20])
  throw riscvException("x11 unequal.");
}
void riscv::check_x12(TandemController* v) {
if (((uint32_t) riscv_x12) != v->v_top->Rocket->_T_590[19])
  throw riscvException("x12 unequal.");
}
void riscv::check_x13(TandemController* v) {
if (((uint32_t) riscv_x13) != v->v_top->Rocket->_T_590[18])
  throw riscvException("x13 unequal.");
}
void riscv::check_x14(TandemController* v) {
if (((uint32_t) riscv_x14) != v->v_top->Rocket->_T_590[17])
  throw riscvException("x14 unequal.");
}
void riscv::check_x15(TandemController* v) {
if (((uint32_t) riscv_x15) != v->v_top->Rocket->_T_590[16])
  throw riscvException("x15 unequal.");
}
void riscv::check_x16(TandemController* v) {
if (((uint32_t) riscv_x16) != v->v_top->Rocket->_T_590[15])
  throw riscvException("x16 unequal.");
}
void riscv::check_x17(TandemController* v) {
if (((uint32_t) riscv_x17) != v->v_top->Rocket->_T_590[14])
  throw riscvException("x17 unequal.");
}
void riscv::check_x18(TandemController* v) {
if (((uint32_t) riscv_x18) != v->v_top->Rocket->_T_590[13])
  throw riscvException("x18 unequal.");
}
void riscv::check_x19(TandemController* v) {
if (((uint32_t) riscv_x19) != v->v_top->Rocket->_T_590[12])
  throw riscvException("x19 unequal.");
}
void riscv::check_x20(TandemController* v) {
if (((uint32_t) riscv_x20) != v->v_top->Rocket->_T_590[11])
  throw riscvException("x20 unequal.");
}
void riscv::check_x21(TandemController* v) {
if (((uint32_t) riscv_x21) != v->v_top->Rocket->_T_590[10])
  throw riscvException("x21 unequal.");
}
void riscv::check_x22(TandemController* v) {
if (((uint32_t) riscv_x22) != v->v_top->Rocket->_T_590[9])
  throw riscvException("x22 unequal.");
}
void riscv::check_x23(TandemController* v) {
if (((uint32_t) riscv_x23) != v->v_top->Rocket->_T_590[8])
  throw riscvException("x23 unequal.");
}
void riscv::check_x24(TandemController* v) {
if (((uint32_t) riscv_x24) != v->v_top->Rocket->_T_590[7])
  throw riscvException("x24 unequal.");
}
void riscv::check_x25(TandemController* v) {
if (((uint32_t) riscv_x25) != v->v_top->Rocket->_T_590[6])
  throw riscvException("x25 unequal.");
}
void riscv::check_x26(TandemController* v) {
if (((uint32_t) riscv_x26) != v->v_top->Rocket->_T_590[5])
  throw riscvException("x26 unequal.");
}
void riscv::check_x27(TandemController* v) {
if (((uint32_t) riscv_x27) != v->v_top->Rocket->_T_590[4])
  throw riscvException("x27 unequal.");
}
void riscv::check_x28(TandemController* v) {
if (((uint32_t) riscv_x28) != v->v_top->Rocket->_T_590[3])
  throw riscvException("x28 unequal.");
}
void riscv::check_x29(TandemController* v) {
if (((uint32_t) riscv_x29) != v->v_top->Rocket->_T_590[2])
  throw riscvException("x29 unequal.");
}
void riscv::check_x30(TandemController* v) {
if (((uint32_t) riscv_x30) != v->v_top->Rocket->_T_590[1])
  throw riscvException("x30 unequal.");
}
void riscv::check_x31(TandemController* v) {
if (((uint32_t) riscv_x31) != v->v_top->Rocket->_T_590[0])
  throw riscvException("x31 unequal.");
}
void riscv::check_all_state(TandemController* v) {
    check_pc(v);
  check_x0(v);
  check_x1(v);
  check_x2(v);
  check_x3(v);
  check_x4(v);
  check_x5(v);
  check_x6(v);
  check_x7(v);
  check_x8(v);
  check_x9(v);
  check_x10(v);
  check_x11(v);
  check_x12(v);
  check_x13(v);
  check_x14(v);
  check_x15(v);
  check_x16(v);
  check_x17(v);
  check_x18(v);
  check_x19(v);
  check_x20(v);
  check_x21(v);
  check_x22(v);
  check_x23(v);
  check_x24(v);
  check_x25(v);
  check_x26(v);
  check_x27(v);
  check_x28(v);
  check_x29(v);
  check_x30(v);
  check_x31(v);
}
void riscv::tandem_instr_BEQ (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_BNE (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_BLT (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_BLTU (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_BGE (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_BGEU (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_JAL (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_JALR (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LW (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LH (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LB (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LHU (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LBU (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SW (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_SH (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_SB (TandemController* v) {
check_pc(v);
}
void riscv::tandem_instr_ADD (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_AND (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_OR (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_XOR (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLL (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SRL (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SUB (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SRA (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLT (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLTU (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_ADDI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLTI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLTIU (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_ANDI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_ORI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_XORI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SLLI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SRLI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_SRAI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_LUI (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}
void riscv::tandem_instr_AUIPC (TandemController* v) {
check_pc(v);
check_x0(v);
check_x1(v);
check_x10(v);
check_x11(v);
check_x12(v);
check_x13(v);
check_x14(v);
check_x15(v);
check_x16(v);
check_x17(v);
check_x18(v);
check_x19(v);
check_x2(v);
check_x20(v);
check_x21(v);
check_x22(v);
check_x23(v);
check_x24(v);
check_x25(v);
check_x26(v);
check_x27(v);
check_x28(v);
check_x29(v);
check_x3(v);
check_x30(v);
check_x31(v);
check_x4(v);
check_x5(v);
check_x6(v);
check_x7(v);
check_x8(v);
check_x9(v);
}

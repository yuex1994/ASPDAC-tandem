#include <riscv.h>
riscv::riscv() {
  tandem_func[0] = &riscv::tandem_instr_BEQ;
  tandem_func[1] = &riscv::tandem_instr_BNE;
  tandem_func[2] = &riscv::tandem_instr_BLT;
  tandem_func[3] = &riscv::tandem_instr_BLTU;
  tandem_func[4] = &riscv::tandem_instr_BGE;
  tandem_func[5] = &riscv::tandem_instr_BGEU;
  tandem_func[6] = &riscv::tandem_instr_JAL;
  tandem_func[7] = &riscv::tandem_instr_JALR;
  tandem_func[8] = &riscv::tandem_instr_LW;
  tandem_func[9] = &riscv::tandem_instr_LH;
  tandem_func[10] = &riscv::tandem_instr_LB;
  tandem_func[11] = &riscv::tandem_instr_LHU;
  tandem_func[12] = &riscv::tandem_instr_LBU;
  tandem_func[13] = &riscv::tandem_instr_SW;
  tandem_func[14] = &riscv::tandem_instr_SH;
  tandem_func[15] = &riscv::tandem_instr_SB;
  tandem_func[16] = &riscv::tandem_instr_ADD;
  tandem_func[17] = &riscv::tandem_instr_AND;
  tandem_func[18] = &riscv::tandem_instr_OR;
  tandem_func[19] = &riscv::tandem_instr_XOR;
  tandem_func[20] = &riscv::tandem_instr_SLL;
  tandem_func[21] = &riscv::tandem_instr_SRL;
  tandem_func[22] = &riscv::tandem_instr_SUB;
  tandem_func[23] = &riscv::tandem_instr_SRA;
  tandem_func[24] = &riscv::tandem_instr_SLT;
  tandem_func[25] = &riscv::tandem_instr_SLTU;
  tandem_func[26] = &riscv::tandem_instr_ADDI;
  tandem_func[27] = &riscv::tandem_instr_SLTI;
  tandem_func[28] = &riscv::tandem_instr_SLTIU;
  tandem_func[29] = &riscv::tandem_instr_ANDI;
  tandem_func[30] = &riscv::tandem_instr_ORI;
  tandem_func[31] = &riscv::tandem_instr_XORI;
  tandem_func[32] = &riscv::tandem_instr_SLLI;
  tandem_func[33] = &riscv::tandem_instr_SRLI;
  tandem_func[34] = &riscv::tandem_instr_SRAI;
  tandem_func[35] = &riscv::tandem_instr_LUI;
  tandem_func[36] = &riscv::tandem_instr_AUIPC;

}


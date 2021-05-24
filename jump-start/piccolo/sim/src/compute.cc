#include <iomanip>
#include <riscv.h>
static int instr_cntr = 0;
int riscv::GetInstrCntr() {
  return instr_cntr;
}
void riscv::IncrementInstrCntr() {
  instr_cntr++;
}
void riscv::LogInstrSequence(const std::string& instr_name) {
  instr_log << "Instr No." << std::setw(5) << GetInstrCntr() << '\t';
  instr_log << instr_name << " is activated\n";
  IncrementInstrCntr();
}
static bool g_initialized = false;
void riscv::compute() {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
riscv_inst = riscv_inst_in;
if (valid_riscv() && decode_riscv_BEQ()) {
  update_riscv_BEQ();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BEQ");
#endif
}
if (valid_riscv() && decode_riscv_BNE()) {
  update_riscv_BNE();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BNE");
#endif
}
if (valid_riscv() && decode_riscv_BLT()) {
  update_riscv_BLT();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BLT");
#endif
}
if (valid_riscv() && decode_riscv_BLTU()) {
  update_riscv_BLTU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BLTU");
#endif
}
if (valid_riscv() && decode_riscv_BGE()) {
  update_riscv_BGE();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BGE");
#endif
}
if (valid_riscv() && decode_riscv_BGEU()) {
  update_riscv_BGEU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("BGEU");
#endif
}
if (valid_riscv() && decode_riscv_JAL()) {
  update_riscv_JAL();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("JAL");
#endif
}
if (valid_riscv() && decode_riscv_JALR()) {
  update_riscv_JALR();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("JALR");
#endif
}
if (valid_riscv() && decode_riscv_LW()) {
  update_riscv_LW();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LW");
#endif
}
if (valid_riscv() && decode_riscv_LH()) {
  update_riscv_LH();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LH");
#endif
}
if (valid_riscv() && decode_riscv_LB()) {
  update_riscv_LB();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LB");
#endif
}
if (valid_riscv() && decode_riscv_LHU()) {
  update_riscv_LHU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LHU");
#endif
}
if (valid_riscv() && decode_riscv_LBU()) {
  update_riscv_LBU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LBU");
#endif
}
if (valid_riscv() && decode_riscv_SW()) {
  update_riscv_SW();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SW");
#endif
}
if (valid_riscv() && decode_riscv_SH()) {
  update_riscv_SH();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SH");
#endif
}
if (valid_riscv() && decode_riscv_SB()) {
  update_riscv_SB();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SB");
#endif
}
if (valid_riscv() && decode_riscv_ADD()) {
  update_riscv_ADD();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("ADD");
#endif
}
if (valid_riscv() && decode_riscv_AND()) {
  update_riscv_AND();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("AND");
#endif
}
if (valid_riscv() && decode_riscv_OR()) {
  update_riscv_OR();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("OR");
#endif
}
if (valid_riscv() && decode_riscv_XOR()) {
  update_riscv_XOR();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("XOR");
#endif
}
if (valid_riscv() && decode_riscv_SLL()) {
  update_riscv_SLL();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLL");
#endif
}
if (valid_riscv() && decode_riscv_SRL()) {
  update_riscv_SRL();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SRL");
#endif
}
if (valid_riscv() && decode_riscv_SUB()) {
  update_riscv_SUB();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SUB");
#endif
}
if (valid_riscv() && decode_riscv_SRA()) {
  update_riscv_SRA();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SRA");
#endif
}
if (valid_riscv() && decode_riscv_SLT()) {
  update_riscv_SLT();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLT");
#endif
}
if (valid_riscv() && decode_riscv_SLTU()) {
  update_riscv_SLTU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTU");
#endif
}
if (valid_riscv() && decode_riscv_ADDI()) {
  update_riscv_ADDI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("ADDI");
#endif
}
if (valid_riscv() && decode_riscv_SLTI()) {
  update_riscv_SLTI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTI");
#endif
}
if (valid_riscv() && decode_riscv_SLTIU()) {
  update_riscv_SLTIU();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTIU");
#endif
}
if (valid_riscv() && decode_riscv_ANDI()) {
  update_riscv_ANDI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("ANDI");
#endif
}
if (valid_riscv() && decode_riscv_ORI()) {
  update_riscv_ORI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("ORI");
#endif
}
if (valid_riscv() && decode_riscv_XORI()) {
  update_riscv_XORI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("XORI");
#endif
}
if (valid_riscv() && decode_riscv_SLLI()) {
  update_riscv_SLLI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SLLI");
#endif
}
if (valid_riscv() && decode_riscv_SRLI()) {
  update_riscv_SRLI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SRLI");
#endif
}
if (valid_riscv() && decode_riscv_SRAI()) {
  update_riscv_SRAI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("SRAI");
#endif
}
if (valid_riscv() && decode_riscv_LUI()) {
  update_riscv_LUI();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LUI");
#endif
}
if (valid_riscv() && decode_riscv_AUIPC()) {
  update_riscv_AUIPC();
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("AUIPC");
#endif
}
while (1) {
  int schedule_counter = 0;
  if (schedule_counter == 0) {
    break;
  }
}
}
void riscv::compute(TandemController* v) {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
riscv_inst = riscv_inst_in;
if (valid_riscv() && decode_riscv_BEQ()) {
  update_riscv_BEQ();
      tandem_func_ptr = BEQ;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BEQ");
#endif
}
if (valid_riscv() && decode_riscv_BNE()) {
  update_riscv_BNE();
      tandem_func_ptr = BNE;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BNE");
#endif
}
if (valid_riscv() && decode_riscv_BLT()) {
  update_riscv_BLT();
      tandem_func_ptr = BLT;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BLT");
#endif
}
if (valid_riscv() && decode_riscv_BLTU()) {
  update_riscv_BLTU();
      tandem_func_ptr = BLTU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BLTU");
#endif
}
if (valid_riscv() && decode_riscv_BGE()) {
  update_riscv_BGE();
      tandem_func_ptr = BGE;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BGE");
#endif
}
if (valid_riscv() && decode_riscv_BGEU()) {
  update_riscv_BGEU();
      tandem_func_ptr = BGEU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("BGEU");
#endif
}
if (valid_riscv() && decode_riscv_JAL()) {
  update_riscv_JAL();
      tandem_func_ptr = JAL;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("JAL");
#endif
}
if (valid_riscv() && decode_riscv_JALR()) {
  update_riscv_JALR();
      tandem_func_ptr = JALR;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("JALR");
#endif
}
if (valid_riscv() && decode_riscv_LW()) {
  update_riscv_LW();
      tandem_func_ptr = LW;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LW");
#endif
}
if (valid_riscv() && decode_riscv_LH()) {
  update_riscv_LH();
      tandem_func_ptr = LH;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LH");
#endif
}
if (valid_riscv() && decode_riscv_LB()) {
  update_riscv_LB();
      tandem_func_ptr = LB;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LB");
#endif
}
if (valid_riscv() && decode_riscv_LHU()) {
  update_riscv_LHU();
      tandem_func_ptr = LHU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LHU");
#endif
}
if (valid_riscv() && decode_riscv_LBU()) {
  update_riscv_LBU();
      tandem_func_ptr = LBU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LBU");
#endif
}
if (valid_riscv() && decode_riscv_SW()) {
  update_riscv_SW();
      tandem_func_ptr = SW;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SW");
#endif
}
if (valid_riscv() && decode_riscv_SH()) {
  update_riscv_SH();
      tandem_func_ptr = SH;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SH");
#endif
}
if (valid_riscv() && decode_riscv_SB()) {
  update_riscv_SB();
      tandem_func_ptr = SB;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SB");
#endif
}
if (valid_riscv() && decode_riscv_ADD()) {
  update_riscv_ADD();
      tandem_func_ptr = ADD;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("ADD");
#endif
}
if (valid_riscv() && decode_riscv_AND()) {
  update_riscv_AND();
      tandem_func_ptr = AND;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("AND");
#endif
}
if (valid_riscv() && decode_riscv_OR()) {
  update_riscv_OR();
      tandem_func_ptr = OR;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("OR");
#endif
}
if (valid_riscv() && decode_riscv_XOR()) {
  update_riscv_XOR();
      tandem_func_ptr = XOR;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("XOR");
#endif
}
if (valid_riscv() && decode_riscv_SLL()) {
  update_riscv_SLL();
      tandem_func_ptr = SLL;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLL");
#endif
}
if (valid_riscv() && decode_riscv_SRL()) {
  update_riscv_SRL();
      tandem_func_ptr = SRL;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SRL");
#endif
}
if (valid_riscv() && decode_riscv_SUB()) {
  update_riscv_SUB();
      tandem_func_ptr = SUB;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SUB");
#endif
}
if (valid_riscv() && decode_riscv_SRA()) {
  update_riscv_SRA();
      tandem_func_ptr = SRA;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SRA");
#endif
}
if (valid_riscv() && decode_riscv_SLT()) {
  update_riscv_SLT();
      tandem_func_ptr = SLT;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLT");
#endif
}
if (valid_riscv() && decode_riscv_SLTU()) {
  update_riscv_SLTU();
      tandem_func_ptr = SLTU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTU");
#endif
}
if (valid_riscv() && decode_riscv_ADDI()) {
  update_riscv_ADDI();
      tandem_func_ptr = ADDI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("ADDI");
#endif
}
if (valid_riscv() && decode_riscv_SLTI()) {
  update_riscv_SLTI();
      tandem_func_ptr = SLTI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTI");
#endif
}
if (valid_riscv() && decode_riscv_SLTIU()) {
  update_riscv_SLTIU();
      tandem_func_ptr = SLTIU;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLTIU");
#endif
}
if (valid_riscv() && decode_riscv_ANDI()) {
  update_riscv_ANDI();
      tandem_func_ptr = ANDI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("ANDI");
#endif
}
if (valid_riscv() && decode_riscv_ORI()) {
  update_riscv_ORI();
      tandem_func_ptr = ORI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("ORI");
#endif
}
if (valid_riscv() && decode_riscv_XORI()) {
  update_riscv_XORI();
      tandem_func_ptr = XORI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("XORI");
#endif
}
if (valid_riscv() && decode_riscv_SLLI()) {
  update_riscv_SLLI();
      tandem_func_ptr = SLLI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SLLI");
#endif
}
if (valid_riscv() && decode_riscv_SRLI()) {
  update_riscv_SRLI();
      tandem_func_ptr = SRLI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SRLI");
#endif
}
if (valid_riscv() && decode_riscv_SRAI()) {
  update_riscv_SRAI();
      tandem_func_ptr = SRAI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("SRAI");
#endif
}
if (valid_riscv() && decode_riscv_LUI()) {
  update_riscv_LUI();
      tandem_func_ptr = LUI;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LUI");
#endif
}
if (valid_riscv() && decode_riscv_AUIPC()) {
  update_riscv_AUIPC();
      tandem_func_ptr = AUIPC;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("AUIPC");
#endif
}
while (1) {
  int schedule_counter = 0;
  if (schedule_counter == 0) {
    break;
  }
}
if ((tandem_func_ptr >= 0) && (tandem_func_ptr < 37)) {
  (this->*(tandem_func[tandem_func_ptr]))(v);
}
else {
  throw riscvException("Ran unspecified function!");
}
}

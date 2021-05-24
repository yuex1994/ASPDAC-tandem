#include <fstream>
#include <map>
#include <riscv_rtl_monitor.h>
#define BEQ 0
#define BNE 1
#define BLT 2
#define BLTU 3
#define BGE 4
#define BGEU 5
#define JAL 6
#define JALR 7
#define LW 8
#define LH 9
#define LB 10
#define LHU 11
#define LBU 12
#define SW 13
#define SH 14
#define SB 15
#define ADD 16
#define AND 17
#define OR 18
#define XOR 19
#define SLL 20
#define SRL 21
#define SUB 22
#define SRA 23
#define SLT 24
#define SLTU 25
#define ADDI 26
#define SLTI 27
#define SLTIU 28
#define ANDI 29
#define ORI 30
#define XORI 31
#define SLLI 32
#define SRLI 33
#define SRAI 34
#define LUI 35
#define AUIPC 36
class riscvException : public std::exception
{
  std::string _msg;
public:
  riscvException(const std::string& msg) : _msg(msg){}
  virtual const char* what() const noexcept override
  {
    return _msg.c_str();
  }
};

#include <boost/multiprecision/cpp_int.hpp>
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<1, 1,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint1_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<2, 2,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint2_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<3, 3,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint3_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<4, 4,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint4_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<5, 5,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint5_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<6, 6,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint6_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<7, 7,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint7_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<10, 10,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint10_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<11, 11,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint11_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<12, 12,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint12_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<13, 13,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint13_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<14, 14,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint14_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<20, 20,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint20_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<21, 21,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint21_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<24, 24,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint24_t;
class riscv {
public:
  std::ofstream instr_log;
  std::ofstream instr_update_log;
  int GetInstrCntr();
  void IncrementInstrCntr();
  void LogInstrSequence(const std::string& instr_name);
riscv();
int tandem_func_ptr;
void check_pc(TandemController* v);
void check_x0(TandemController* v);
void check_x1(TandemController* v);
void check_x2(TandemController* v);
void check_x3(TandemController* v);
void check_x4(TandemController* v);
void check_x5(TandemController* v);
void check_x6(TandemController* v);
void check_x7(TandemController* v);
void check_x8(TandemController* v);
void check_x9(TandemController* v);
void check_x10(TandemController* v);
void check_x11(TandemController* v);
void check_x12(TandemController* v);
void check_x13(TandemController* v);
void check_x14(TandemController* v);
void check_x15(TandemController* v);
void check_x16(TandemController* v);
void check_x17(TandemController* v);
void check_x18(TandemController* v);
void check_x19(TandemController* v);
void check_x20(TandemController* v);
void check_x21(TandemController* v);
void check_x22(TandemController* v);
void check_x23(TandemController* v);
void check_x24(TandemController* v);
void check_x25(TandemController* v);
void check_x26(TandemController* v);
void check_x27(TandemController* v);
void check_x28(TandemController* v);
void check_x29(TandemController* v);
void check_x30(TandemController* v);
void check_x31(TandemController* v);
void check_all_state(TandemController* v);
typedef void (riscv::*tandem_func_type)(TandemController* v);
tandem_func_type tandem_func[38];
void tandem_instr_BEQ(TandemController* v);
void tandem_instr_BNE(TandemController* v);
void tandem_instr_BLT(TandemController* v);
void tandem_instr_BLTU(TandemController* v);
void tandem_instr_BGE(TandemController* v);
void tandem_instr_BGEU(TandemController* v);
void tandem_instr_JAL(TandemController* v);
void tandem_instr_JALR(TandemController* v);
void tandem_instr_LW(TandemController* v);
void tandem_instr_LH(TandemController* v);
void tandem_instr_LB(TandemController* v);
void tandem_instr_LHU(TandemController* v);
void tandem_instr_LBU(TandemController* v);
void tandem_instr_SW(TandemController* v);
void tandem_instr_SH(TandemController* v);
void tandem_instr_SB(TandemController* v);
void tandem_instr_ADD(TandemController* v);
void tandem_instr_AND(TandemController* v);
void tandem_instr_OR(TandemController* v);
void tandem_instr_XOR(TandemController* v);
void tandem_instr_SLL(TandemController* v);
void tandem_instr_SRL(TandemController* v);
void tandem_instr_SUB(TandemController* v);
void tandem_instr_SRA(TandemController* v);
void tandem_instr_SLT(TandemController* v);
void tandem_instr_SLTU(TandemController* v);
void tandem_instr_ADDI(TandemController* v);
void tandem_instr_SLTI(TandemController* v);
void tandem_instr_SLTIU(TandemController* v);
void tandem_instr_ANDI(TandemController* v);
void tandem_instr_ORI(TandemController* v);
void tandem_instr_XORI(TandemController* v);
void tandem_instr_SLLI(TandemController* v);
void tandem_instr_SRLI(TandemController* v);
void tandem_instr_SRAI(TandemController* v);
void tandem_instr_LUI(TandemController* v);
void tandem_instr_AUIPC(TandemController* v);
  uint32_t riscv_inst_in;
  uint32_t riscv_inst;
  uint32_t riscv_x31;
  uint32_t riscv_x30;
  uint32_t riscv_x29;
  uint32_t riscv_x28;
  uint32_t riscv_x27;
  uint32_t riscv_x26;
  uint32_t riscv_x25;
  uint32_t riscv_x24;
  uint32_t riscv_x23;
  uint32_t riscv_x22;
  uint32_t riscv_x21;
  uint32_t riscv_x20;
  uint32_t riscv_x19;
  uint32_t riscv_x18;
  uint32_t riscv_x17;
  uint32_t riscv_x16;
  uint32_t riscv_x2;
  uint32_t riscv_x1;
  uint32_t riscv_x0;
  uint32_t riscv_x3;
  uint32_t riscv_x14;
  uint32_t riscv_pc;
  uint32_t riscv_x8;
  uint32_t riscv_x15;
  std::map<uint14_t, uint32_t> riscv_mem;
  uint32_t riscv_x9;
  uint32_t riscv_x4;
  uint32_t riscv_x5;
  uint32_t riscv_x6;
  uint32_t riscv_x7;
  uint32_t riscv_x10;
  uint32_t riscv_x11;
  uint32_t riscv_x12;
  uint32_t riscv_x13;
  uint12_t univ_var_24;
  uint5_t univ_var_2;
  uint11_t univ_var_3;
  uint12_t univ_var_4;
  uint13_t univ_var_5;
  uint32_t univ_var_53;
  uint11_t univ_var_12;
  uint12_t univ_var_13;
  uint20_t univ_var_14;
  uint21_t univ_var_15;
  uint32_t univ_var_27;
  uint32_t univ_var_32;
  uint24_t univ_var_31;
  uint16_t univ_var_30;
  void compute();
  bool decode_riscv_ADD();
  bool decode_riscv_ADDI();
  bool decode_riscv_AND();
  bool decode_riscv_ANDI();
  bool decode_riscv_AUIPC();
  bool decode_riscv_BEQ();
  bool decode_riscv_BGE();
  bool decode_riscv_BGEU();
  bool decode_riscv_BLT();
  bool decode_riscv_BLTU();
  bool decode_riscv_BNE();
  bool decode_riscv_JAL();
  bool decode_riscv_JALR();
  bool decode_riscv_LB();
  bool decode_riscv_LBU();
  bool decode_riscv_LH();
  bool decode_riscv_LHU();
  bool decode_riscv_LUI();
  bool decode_riscv_LW();
  bool decode_riscv_OR();
  bool decode_riscv_ORI();
  bool decode_riscv_SB();
  bool decode_riscv_SH();
  bool decode_riscv_SLL();
  bool decode_riscv_SLLI();
  bool decode_riscv_SLT();
  bool decode_riscv_SLTI();
  bool decode_riscv_SLTIU();
  bool decode_riscv_SLTU();
  bool decode_riscv_SRA();
  bool decode_riscv_SRAI();
  bool decode_riscv_SRL();
  bool decode_riscv_SRLI();
  bool decode_riscv_SUB();
  bool decode_riscv_SW();
  bool decode_riscv_XOR();
  bool decode_riscv_XORI();
  void setup_initial_condition();
  void update_riscv_ADD();
  void update_riscv_ADDI();
  void update_riscv_AND();
  void update_riscv_ANDI();
  void update_riscv_AUIPC();
  void update_riscv_BEQ();
  void update_riscv_BGE();
  void update_riscv_BGEU();
  void update_riscv_BLT();
  void update_riscv_BLTU();
  void update_riscv_BNE();
  void update_riscv_JAL();
  void update_riscv_JALR();
  void update_riscv_LB();
  void update_riscv_LBU();
  void update_riscv_LH();
  void update_riscv_LHU();
  void update_riscv_LUI();
  void update_riscv_LW();
  void update_riscv_OR();
  void update_riscv_ORI();
  void update_riscv_SB();
  void update_riscv_SH();
  void update_riscv_SLL();
  void update_riscv_SLLI();
  void update_riscv_SLT();
  void update_riscv_SLTI();
  void update_riscv_SLTIU();
  void update_riscv_SLTU();
  void update_riscv_SRA();
  void update_riscv_SRAI();
  void update_riscv_SRL();
  void update_riscv_SRLI();
  void update_riscv_SUB();
  void update_riscv_SW();
  void update_riscv_XOR();
  void update_riscv_XORI();
  bool valid_riscv();
  void store_23(std::map<uint14_t, uint32_t>& tmp_memory);
  void store_26(std::map<uint14_t, uint32_t>& tmp_memory);
  void store_29(std::map<uint14_t, uint32_t>& tmp_memory);
void compute(TandemController* v);
};

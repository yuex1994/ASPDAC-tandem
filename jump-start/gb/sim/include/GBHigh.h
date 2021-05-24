#include <fstream>
#include <map>
#include <GBHigh_rtl_monitor.h>
#define Write 0
#define Read 1
class GBHighException : public std::exception
{
  std::string _msg;
public:
  GBHighException(const std::string& msg) : _msg(msg){}
  virtual const char* what() const noexcept override
  {
    return _msg.c_str();
  }
};

#include <boost/multiprecision/cpp_int.hpp>
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<1, 1,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint1_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<3, 3,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint3_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<4, 4,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint4_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<9, 9,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint9_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<10, 10,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint10_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<24, 24,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint24_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<40, 40,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint40_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<48, 48,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint48_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<56, 56,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint56_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<72, 72,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint72_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<144, 144,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint144_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<216, 216,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint216_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<288, 288,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint288_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<360, 360,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint360_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<432, 432,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint432_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<504, 504,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint504_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<576, 576,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint576_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<648, 648,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint648_t;
class GBHigh {
public:
  std::ofstream instr_log;
  std::ofstream instr_update_log;
  int GetInstrCntr();
  void IncrementInstrCntr();
  void LogInstrSequence(const std::string& instr_name);
uint32_t GBHigh_pc;
GBHigh();
int tandem_func_ptr;
void swap_av(TandemController *v);
void reset_rtav(TandemController *v);
void hold_rtav(TandemController *v);
void av_converter(TandemController *v);
void check_arg_1_TREADY(TandemController* v);
void check_arg_0_TVALID(TandemController* v);
void check_arg_0_TDATA(TandemController* v);
void check_ram_x(TandemController* v);
void check_ram_y(TandemController* v);
void check_ram_w(TandemController* v);
void check_stencil0(TandemController* v);
void check_stencil1(TandemController* v);
void check_stencil2(TandemController* v);
void check_stencil3(TandemController* v);
void check_stencil4(TandemController* v);
void check_stencil5(TandemController* v);
void check_stencil6(TandemController* v);
void check_stencil7(TandemController* v);
void check_ram0(TandemController* v);
void check_ram1(TandemController* v);
void check_ram2(TandemController* v);
void check_ram3(TandemController* v);
void check_ram4(TandemController* v);
void check_ram5(TandemController* v);
void check_ram6(TandemController* v);
void check_ram7(TandemController* v);
void check_all_state(TandemController* v);
typedef void (GBHigh::*tandem_func_type)(TandemController* v);
tandem_func_type tandem_func[3];
void tandem_instr_Write(TandemController* v);
void tandem_instr_Read(TandemController* v);
  uint8_t GBHigh_arg_1_TDATA_in;
  uint8_t GBHigh_arg_1_TDATA;
  uint1_t GBHigh_arg_0_TREADY_in;
  uint1_t GBHigh_arg_0_TREADY;
  uint1_t GBHigh_arg_1_TVALID_in;
  uint1_t GBHigh_arg_1_TVALID;
  std::map<uint9_t, uint8_t> GBHigh_ram7;
  std::map<uint9_t, uint8_t> GBHigh_ram6;
  std::map<uint9_t, uint8_t> GBHigh_ram5;
  std::map<uint9_t, uint8_t> GBHigh_ram4;
  std::map<uint9_t, uint8_t> GBHigh_ram3;
  std::map<uint9_t, uint8_t> GBHigh_ram2;
  std::map<uint9_t, uint8_t> GBHigh_ram1;
  std::map<uint9_t, uint8_t> GBHigh_ram0;
  uint72_t GBHigh_stencil8;
  uint72_t GBHigh_stencil7;
  uint8_t GBHigh_cur_pic;
  uint72_t GBHigh_stencil6;
  uint1_t GBHigh_st_ready;
  uint72_t GBHigh_stencil5;
  uint648_t Propagate_proc_in;
  uint8_t GBHigh_arg_0_TDATA;
  uint72_t GBHigh_stencil4;
  uint1_t GBHigh_arg_1_TREADY;
  uint8_t Propagate_pre_pix;
  uint1_t GBHigh_arg_0_TVALID;
  uint72_t GBHigh_stencil2;
  uint3_t GBHigh_ram_w;
  uint72_t GBHigh_stencil3;
  uint4_t GBHigh_gbit;
  uint9_t GBHigh_ram_x;
  uint72_t GBHigh_stencil0;
  uint10_t GBHigh_ram_y;
  uint72_t GBHigh_stencil1;
  uint16_t univ_var_19;
  uint24_t univ_var_20;
  uint32_t univ_var_21;
  uint40_t univ_var_22;
  uint48_t univ_var_23;
  uint56_t univ_var_24;
  uint64_t univ_var_25;
  uint72_t univ_var_26;
  uint16_t univ_var_92;
  uint24_t univ_var_93;
  uint32_t univ_var_94;
  uint40_t univ_var_95;
  uint48_t univ_var_96;
  uint56_t univ_var_97;
  uint64_t univ_var_98;
  uint72_t univ_var_99;
  uint16_t univ_var_84;
  uint24_t univ_var_85;
  uint32_t univ_var_86;
  uint40_t univ_var_87;
  uint48_t univ_var_88;
  uint56_t univ_var_89;
  uint64_t univ_var_90;
  uint72_t univ_var_91;
  uint16_t univ_var_76;
  uint24_t univ_var_77;
  uint32_t univ_var_78;
  uint40_t univ_var_79;
  uint48_t univ_var_80;
  uint56_t univ_var_81;
  uint64_t univ_var_82;
  uint72_t univ_var_83;
  uint16_t univ_var_68;
  uint24_t univ_var_69;
  uint32_t univ_var_70;
  uint40_t univ_var_71;
  uint48_t univ_var_72;
  uint56_t univ_var_73;
  uint64_t univ_var_74;
  uint72_t univ_var_75;
  uint16_t univ_var_60;
  uint24_t univ_var_61;
  uint32_t univ_var_62;
  uint40_t univ_var_63;
  uint48_t univ_var_64;
  uint56_t univ_var_65;
  uint64_t univ_var_66;
  uint72_t univ_var_67;
  uint16_t univ_var_52;
  uint24_t univ_var_53;
  uint32_t univ_var_54;
  uint40_t univ_var_55;
  uint48_t univ_var_56;
  uint56_t univ_var_57;
  uint64_t univ_var_58;
  uint72_t univ_var_59;
  uint16_t univ_var_44;
  uint24_t univ_var_45;
  uint32_t univ_var_46;
  uint40_t univ_var_47;
  uint48_t univ_var_48;
  uint56_t univ_var_49;
  uint64_t univ_var_50;
  uint72_t univ_var_51;
  uint16_t univ_var_36;
  uint24_t univ_var_37;
  uint32_t univ_var_38;
  uint40_t univ_var_39;
  uint48_t univ_var_40;
  uint56_t univ_var_41;
  uint64_t univ_var_42;
  uint72_t univ_var_43;
  uint16_t univ_var_28;
  uint24_t univ_var_29;
  uint32_t univ_var_30;
  uint40_t univ_var_31;
  uint48_t univ_var_32;
  uint56_t univ_var_33;
  uint64_t univ_var_34;
  uint72_t univ_var_35;
  uint144_t univ_var_100;
  uint216_t univ_var_101;
  uint288_t univ_var_102;
  uint360_t univ_var_103;
  uint432_t univ_var_104;
  uint504_t univ_var_105;
  uint576_t univ_var_106;
  uint648_t univ_var_107;
  void compute();
  bool decode_GBHigh_Read();
  bool decode_GBHigh_Write();
  bool decode_Propagate_prop0();
  bool decode_Propagate_prop1();
  void setup_initial_condition();
  void update_GBHigh_Read();
  void update_GBHigh_Write();
  void update_Propagate_prop0();
  void update_Propagate_prop1();
  bool valid_GBHigh();
  bool valid_Propagate();
  uint8_t kernel(uint648_t);
  void ite_10(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_11(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_12(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_13(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_14(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_15(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_16(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_17(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_18(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_3(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_4(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_5(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_6(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_7(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_8(std::map<uint9_t, uint8_t>& tmp_memory);
  void ite_9(std::map<uint9_t, uint8_t>& tmp_memory);
void compute(TandemController* v);
};

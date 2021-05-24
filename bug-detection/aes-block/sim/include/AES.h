#include <fstream>
#include <map>
#include <AES_rtl_monitor.h>
#define WRITE_ADDRESS 0
#define START_ENCRYPT 1
#define READ_LENGTH 2
#define READ_ADDRESS 3
#define READ_KEY 4
#define READ_COUNTER 5
#define GET_STATUS 6
#define WRITE_LENGTH 7
#define WRITE_KEY 8
#define WRITE_COUNTER 9
class AESException : public std::exception
{
  std::string _msg;
public:
  AESException(const std::string& msg) : _msg(msg){}
  virtual const char* what() const noexcept override
  {
    return _msg.c_str();
  }
};

#include <boost/multiprecision/cpp_int.hpp>
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<2, 2,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint2_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<4, 4,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint4_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<24, 24,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint24_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<40, 40,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint40_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<48, 48,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint48_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<56, 56,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint56_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<72, 72,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint72_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<80, 80,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint80_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<88, 88,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint88_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<96, 96,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint96_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<104, 104,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint104_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<112, 112,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint112_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<120, 120,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint120_t;
typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<128, 128,boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void>> uint128_t;
class AES {
public:
  std::ofstream instr_log;
  std::ofstream instr_update_log;
  int GetInstrCntr();
  void IncrementInstrCntr();
  void LogInstrSequence(const std::string& instr_name);
uint32_t AES_pc;
AES();
int tandem_func_ptr;
std::map<uint32_t, uint8_t> tandem_XRAM_map;
void check_aes_status(TandemController* v);
void check_aes_address(TandemController* v);
void check_aes_length(TandemController* v);
void check_aes_counter(TandemController* v);
void check_aes_key(TandemController* v);
void check_XRAM(TandemController* v);
void check_all_state(TandemController* v);
typedef void (AES::*tandem_func_type)(TandemController* v);
tandem_func_type tandem_func[11];
void tandem_instr_WRITE_ADDRESS(TandemController* v);
void tandem_instr_START_ENCRYPT(TandemController* v);
void tandem_instr_READ_LENGTH(TandemController* v);
void tandem_instr_READ_ADDRESS(TandemController* v);
void tandem_instr_READ_KEY(TandemController* v);
void tandem_instr_READ_COUNTER(TandemController* v);
void tandem_instr_GET_STATUS(TandemController* v);
void tandem_instr_WRITE_LENGTH(TandemController* v);
void tandem_instr_WRITE_KEY(TandemController* v);
void tandem_instr_WRITE_COUNTER(TandemController* v);
  uint8_t AES_cmddata_in;
  uint8_t AES_cmddata;
  uint2_t AES_cmd_in;
  uint2_t AES_cmd;
  uint16_t AES_cmdaddr_in;
  uint16_t AES_cmdaddr;
  uint4_t AES_BLOCK_byte_cnt;
  uint128_t AES_BLOCK_enc_data;
  uint128_t AES_BLOCK_rd_data;
  uint8_t AES_outdata;
  uint16_t AES_aes_address;
  uint16_t AES_BLOCK_blk_cnt;
  uint2_t AES_aes_status;
  uint16_t AES_aes_length;
  uint128_t AES_aes_counter;
  uint128_t AES_aes_key;
  std::map<uint16_t, uint8_t> AES_XRAM;
  uint16_t univ_var_22;
  uint16_t univ_var_3;
  uint24_t univ_var_4;
  uint32_t univ_var_5;
  uint40_t univ_var_6;
  uint48_t univ_var_7;
  uint56_t univ_var_8;
  uint64_t univ_var_9;
  uint72_t univ_var_10;
  uint80_t univ_var_11;
  uint88_t univ_var_12;
  uint96_t univ_var_13;
  uint104_t univ_var_14;
  uint112_t univ_var_15;
  uint120_t univ_var_16;
  uint128_t univ_var_17;
  uint16_t univ_var_30;
  uint16_t univ_var_32;
  uint24_t univ_var_33;
  uint32_t univ_var_34;
  uint40_t univ_var_35;
  uint48_t univ_var_36;
  uint56_t univ_var_37;
  uint64_t univ_var_38;
  uint72_t univ_var_39;
  uint80_t univ_var_40;
  uint88_t univ_var_41;
  uint96_t univ_var_42;
  uint104_t univ_var_43;
  uint112_t univ_var_44;
  uint120_t univ_var_45;
  uint128_t univ_var_46;
  uint16_t univ_var_48;
  uint24_t univ_var_49;
  uint32_t univ_var_50;
  uint40_t univ_var_51;
  uint48_t univ_var_52;
  uint56_t univ_var_53;
  uint64_t univ_var_54;
  uint72_t univ_var_55;
  uint80_t univ_var_56;
  uint88_t univ_var_57;
  uint96_t univ_var_58;
  uint104_t univ_var_59;
  uint112_t univ_var_60;
  uint120_t univ_var_61;
  uint128_t univ_var_62;
  void compute();
  bool decode_AES_BLOCK_LOAD();
  bool decode_AES_BLOCK_OPERATE();
  bool decode_AES_BLOCK_STORE();
  bool decode_AES_GET_STATUS();
  bool decode_AES_READ_ADDRESS();
  bool decode_AES_READ_COUNTER();
  bool decode_AES_READ_KEY();
  bool decode_AES_READ_LENGTH();
  bool decode_AES_START_ENCRYPT();
  bool decode_AES_WRITE_ADDRESS();
  bool decode_AES_WRITE_COUNTER();
  bool decode_AES_WRITE_KEY();
  bool decode_AES_WRITE_LENGTH();
  void setup_initial_condition();
  void update_AES_BLOCK_LOAD();
  void update_AES_BLOCK_OPERATE();
  void update_AES_BLOCK_STORE();
  void update_AES_GET_STATUS();
  void update_AES_READ_ADDRESS();
  void update_AES_READ_COUNTER();
  void update_AES_READ_KEY();
  void update_AES_READ_LENGTH();
  void update_AES_START_ENCRYPT();
  void update_AES_WRITE_ADDRESS();
  void update_AES_WRITE_COUNTER();
  void update_AES_WRITE_KEY();
  void update_AES_WRITE_LENGTH();
  bool valid_AES();
  bool valid_AES_BLOCK();
  uint128_t aes128(uint128_t, uint128_t);
  uint2_t unknown0();
  uint2_t unknown1();
  uint128_t unknown2();
  void store_20(std::map<uint16_t, uint8_t>& tmp_memory);
void compute(TandemController* v);
};

#include <AES.h>
bool AES::decode_AES_WRITE_ADDRESS() {
uint2_t local_var_1 = 2;
bool local_var_2 = (AES_cmd == local_var_1);
uint16_t local_var_4 = 65282;
bool local_var_5 = (AES_cmdaddr == local_var_4);
bool local_var_6 = (AES_cmdaddr > local_var_4);
bool local_var_7 = (local_var_5 | local_var_6);
bool local_var_8 = (local_var_2 & local_var_7);
uint16_t local_var_9 = 65284;
bool local_var_10 = (AES_cmdaddr < local_var_9);
bool local_var_11 = (local_var_8 & local_var_10);
auto& univ_var_21 = local_var_11;
return univ_var_21;
}
void AES::update_AES_WRITE_ADDRESS() {
uint2_t local_var_1 = 0;
bool local_var_2 = (AES_aes_status == local_var_1);
uint16_t local_var_4 = 65283;
bool local_var_5 = (AES_cmdaddr == local_var_4);
auto local_var_8_shifted = AES_aes_address >> 8;
auto local_var_8_mask = AES_aes_address;
local_var_8_mask = (1 << (15 - 8 + 1)) - 1;
local_var_8_mask &= local_var_8_shifted;
uint8_t local_var_8 = boost::numeric_cast<uint8_t>(local_var_8_mask);
auto local_var_9 = (local_var_5) ? AES_cmddata : local_var_8;
uint16_t local_var_10 = 65282;
bool local_var_11 = (AES_cmdaddr == local_var_10);
auto local_var_12_shifted = AES_aes_address >> 0;
auto local_var_12_mask = AES_aes_address;
local_var_12_mask = (1 << (7 - 0 + 1)) - 1;
local_var_12_mask &= local_var_12_shifted;
uint8_t local_var_12 = boost::numeric_cast<uint8_t>(local_var_12_mask);
auto local_var_13 = (local_var_11) ? AES_cmddata : local_var_12;
univ_var_22 = (boost::numeric_cast<uint16_t>(local_var_9) << 8) + boost::numeric_cast<uint16_t>(local_var_13);
auto local_var_15 = (local_var_2) ? univ_var_22 : AES_aes_address;
auto local_var_15_nxt_holder = local_var_15;
auto AES_aes_counter_nxt_holder = AES_aes_counter;
auto AES_aes_key_nxt_holder = AES_aes_key;
auto AES_aes_length_nxt_holder = AES_aes_length;
AES_aes_address = local_var_15_nxt_holder;
AES_aes_counter = AES_aes_counter_nxt_holder;
AES_aes_key = AES_aes_key_nxt_holder;
AES_aes_length = AES_aes_length_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "WRITE_ADDRESS state updates:" << std::endl;
instr_update_log << "    AES_aes_address => " << std::hex << "0x" << AES_aes_address << std::endl; 
instr_update_log << "    AES_aes_counter => " << std::hex << "0x" << AES_aes_counter << std::endl; 
instr_update_log << "    AES_aes_key => " << std::hex << "0x" << AES_aes_key << std::endl; 
instr_update_log << "    AES_aes_length => " << std::hex << "0x" << AES_aes_length << std::endl; 
instr_update_log << std::endl;
#endif
}

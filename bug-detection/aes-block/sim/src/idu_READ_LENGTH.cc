#include <AES.h>
bool AES::decode_AES_READ_LENGTH() {
uint2_t local_var_1 = 1;
bool local_var_2 = (AES_cmd == local_var_1);
uint16_t local_var_4 = 65284;
bool local_var_5 = (AES_cmdaddr == local_var_4);
bool local_var_6 = (AES_cmdaddr > local_var_4);
bool local_var_7 = (local_var_5 | local_var_6);
bool local_var_8 = (local_var_2 & local_var_7);
uint16_t local_var_9 = 65286;
bool local_var_10 = (AES_cmdaddr < local_var_9);
bool local_var_11 = (local_var_8 & local_var_10);
auto& univ_var_24 = local_var_11;
return univ_var_24;
}
void AES::update_AES_READ_LENGTH() {
auto AES_aes_address_nxt_holder = AES_aes_address;
auto AES_aes_key_nxt_holder = AES_aes_key;
auto AES_aes_length_nxt_holder = AES_aes_length;
uint16_t local_var_4 = 65284;
uint16_t local_var_5 = (AES_cmdaddr - local_var_4);
uint16_t local_var_6 = 1;
bool local_var_7 = (local_var_5 == local_var_6);
auto local_var_8_shifted = AES_aes_length >> 8;
auto local_var_8_mask = AES_aes_length;
local_var_8_mask = (1 << (15 - 8 + 1)) - 1;
local_var_8_mask &= local_var_8_shifted;
uint8_t local_var_8 = boost::numeric_cast<uint8_t>(local_var_8_mask);
auto local_var_9_shifted = AES_aes_length >> 0;
auto local_var_9_mask = AES_aes_length;
local_var_9_mask = (1 << (7 - 0 + 1)) - 1;
local_var_9_mask &= local_var_9_shifted;
uint8_t local_var_9 = boost::numeric_cast<uint8_t>(local_var_9_mask);
auto local_var_10 = (local_var_7) ? local_var_8 : local_var_9;
auto local_var_10_nxt_holder = local_var_10;
AES_aes_address = AES_aes_address_nxt_holder;
AES_aes_key = AES_aes_key_nxt_holder;
AES_aes_length = AES_aes_length_nxt_holder;
AES_outdata = local_var_10_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "READ_LENGTH state updates:" << std::endl;
instr_update_log << "    AES_aes_address => " << std::hex << "0x" << AES_aes_address << std::endl; 
instr_update_log << "    AES_aes_key => " << std::hex << "0x" << AES_aes_key << std::endl; 
instr_update_log << "    AES_aes_length => " << std::hex << "0x" << AES_aes_length << std::endl; 
instr_update_log << "    AES_outdata => " << std::hex << "0x" << AES_outdata << std::endl; 
instr_update_log << std::endl;
#endif
}

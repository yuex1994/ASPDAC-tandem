#include <AES.h>
bool AES::decode_AES_WRITE_LENGTH() {
uint2_t local_var_1 = 2;
bool local_var_2 = (AES_cmd == local_var_1);
uint16_t local_var_4 = 65284;
bool local_var_5 = (AES_cmdaddr == local_var_4);
bool local_var_6 = (AES_cmdaddr > local_var_4);
bool local_var_7 = (local_var_5 | local_var_6);
bool local_var_8 = (local_var_2 & local_var_7);
uint16_t local_var_9 = 65286;
bool local_var_10 = (AES_cmdaddr < local_var_9);
bool local_var_11 = (local_var_8 & local_var_10);
auto& univ_var_29 = local_var_11;
return univ_var_29;
}
void AES::update_AES_WRITE_LENGTH() {
auto AES_aes_address_nxt_holder = AES_aes_address;
auto AES_aes_counter_nxt_holder = AES_aes_counter;
auto AES_aes_key_nxt_holder = AES_aes_key;
uint2_t local_var_4 = 0;
bool local_var_5 = (AES_aes_status == local_var_4);
uint16_t local_var_7 = 65284;
uint16_t local_var_8 = (AES_cmdaddr - local_var_7);
uint16_t local_var_9 = 1;
bool local_var_10 = (local_var_8 == local_var_9);
auto local_var_13_shifted = AES_aes_length >> 8;
auto local_var_13_mask = AES_aes_length;
local_var_13_mask = (1 << (15 - 8 + 1)) - 1;
local_var_13_mask &= local_var_13_shifted;
uint8_t local_var_13 = boost::numeric_cast<uint8_t>(local_var_13_mask);
auto local_var_14 = (local_var_10) ? AES_cmddata : local_var_13;
uint16_t local_var_15 = 65284;
uint16_t local_var_16 = (AES_cmdaddr - local_var_15);
uint16_t local_var_17 = 0;
bool local_var_18 = (local_var_16 == local_var_17);
auto local_var_19_shifted = AES_aes_length >> 0;
auto local_var_19_mask = AES_aes_length;
local_var_19_mask = (1 << (7 - 0 + 1)) - 1;
local_var_19_mask &= local_var_19_shifted;
uint8_t local_var_19 = boost::numeric_cast<uint8_t>(local_var_19_mask);
auto local_var_20 = (local_var_18) ? AES_cmddata : local_var_19;
univ_var_30 = (boost::numeric_cast<uint16_t>(local_var_14) << 8) + boost::numeric_cast<uint16_t>(local_var_20);
auto local_var_22 = (local_var_5) ? univ_var_30 : AES_aes_length;
auto local_var_22_nxt_holder = local_var_22;
auto local_var_23 = unknown1();
auto local_var_24 = (local_var_5) ? AES_aes_status : local_var_23;
auto local_var_24_nxt_holder = local_var_24;
AES_aes_address = AES_aes_address_nxt_holder;
AES_aes_counter = AES_aes_counter_nxt_holder;
AES_aes_key = AES_aes_key_nxt_holder;
AES_aes_length = local_var_22_nxt_holder;
AES_aes_status = local_var_24_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "WRITE_LENGTH state updates:" << std::endl;
instr_update_log << "    AES_aes_address => " << std::hex << "0x" << AES_aes_address << std::endl; 
instr_update_log << "    AES_aes_counter => " << std::hex << "0x" << AES_aes_counter << std::endl; 
instr_update_log << "    AES_aes_key => " << std::hex << "0x" << AES_aes_key << std::endl; 
instr_update_log << "    AES_aes_length => " << std::hex << "0x" << AES_aes_length << std::endl; 
instr_update_log << "    AES_aes_status => " << std::hex << "0x" << AES_aes_status << std::endl; 
instr_update_log << std::endl;
#endif
}

#include <AES.h>
bool AES::decode_AES_START_ENCRYPT() {
uint2_t local_var_1 = 2;
bool local_var_2 = (AES_cmd == local_var_1);
uint16_t local_var_4 = 65280;
bool local_var_5 = (AES_cmdaddr == local_var_4);
bool local_var_6 = (local_var_2 & local_var_5);
uint8_t local_var_8 = 1;
bool local_var_9 = (AES_cmddata == local_var_8);
bool local_var_10 = (local_var_6 & local_var_9);
auto& univ_var_23 = local_var_10;
return univ_var_23;
}
void AES::update_AES_START_ENCRYPT() {
uint2_t local_var_1 = 0;
bool local_var_2 = (AES_aes_status == local_var_1);
uint2_t local_var_3 = 1;
auto local_var_4 = unknown0();
auto local_var_5 = (local_var_2) ? local_var_3 : local_var_4;
auto local_var_5_nxt_holder = local_var_5;
AES_aes_status = local_var_5_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "START_ENCRYPT state updates:" << std::endl;
instr_update_log << "    AES_aes_status => " << std::hex << "0x" << AES_aes_status << std::endl; 
instr_update_log << std::endl;
#endif
}

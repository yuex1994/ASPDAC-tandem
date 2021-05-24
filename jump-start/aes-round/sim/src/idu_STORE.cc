#include <AES.h>
bool AES::decode_AES_BLOCK_STORE() {
uint2_t local_var_1 = 3;
bool local_var_2 = (AES_aes_status == local_var_1);
auto& univ_var_19 = local_var_2;
return univ_var_19;
}
void AES::update_AES_BLOCK_STORE() {
std::map<uint16_t, uint8_t> local_var_0;
store_20(local_var_0);
uint4_t local_var_2 = 15;
bool local_var_3 = (AES_BLOCK_byte_cnt == local_var_2);
uint16_t local_var_5 = 16;
uint16_t local_var_6 = (AES_BLOCK_blk_cnt + local_var_5);
bool local_var_8 = (local_var_6 < AES_aes_length);
uint2_t local_var_9 = 1;
uint2_t local_var_10 = 0;
auto local_var_11 = (local_var_8) ? local_var_9 : local_var_10;
auto local_var_13 = (local_var_3) ? local_var_11 : AES_aes_status;
auto local_var_13_nxt_holder = local_var_13;
uint4_t local_var_14 = 15;
bool local_var_15 = (AES_BLOCK_byte_cnt == local_var_14);
uint16_t local_var_16 = 16;
uint16_t local_var_17 = (AES_BLOCK_blk_cnt + local_var_16);
bool local_var_18 = (local_var_17 < AES_aes_length);
uint16_t local_var_19 = 16;
uint16_t local_var_20 = (AES_BLOCK_blk_cnt + local_var_19);
auto local_var_21 = (local_var_18) ? local_var_20 : AES_BLOCK_blk_cnt;
auto local_var_22 = (local_var_15) ? local_var_21 : AES_BLOCK_blk_cnt;
auto local_var_22_nxt_holder = local_var_22;
uint4_t local_var_23 = 1;
uint4_t local_var_24 = (AES_BLOCK_byte_cnt + local_var_23);
auto local_var_24_nxt_holder = local_var_24;
for (auto& it : local_var_0) {
  AES_XRAM[it.first] = it.second;
}
AES_aes_status = local_var_13_nxt_holder;
AES_BLOCK_blk_cnt = local_var_22_nxt_holder;
AES_BLOCK_byte_cnt = local_var_24_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "STORE state updates:" << std::endl;
instr_update_log << "    AES_XRAM get updated" << std::endl;
instr_update_log << "    AES_aes_status => " << std::hex << "0x" << AES_aes_status << std::endl; 
instr_update_log << "    AES_BLOCK_blk_cnt => " << std::hex << "0x" << AES_BLOCK_blk_cnt << std::endl; 
instr_update_log << "    AES_BLOCK_byte_cnt => " << std::hex << "0x" << AES_BLOCK_byte_cnt << std::endl; 
instr_update_log << std::endl;
#endif
}

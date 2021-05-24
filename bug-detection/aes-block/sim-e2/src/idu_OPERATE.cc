#include <AES.h>
bool AES::decode_AES_BLOCK_OPERATE() {
uint2_t local_var_1 = 2;
bool local_var_2 = (AES_aes_status == local_var_1);
auto& univ_var_18 = local_var_2;
return univ_var_18;
}
void AES::update_AES_BLOCK_OPERATE() {
uint2_t local_var_0 = 3;
auto local_var_0_nxt_holder = local_var_0;
auto AES_BLOCK_blk_cnt_nxt_holder = AES_BLOCK_blk_cnt;
uint128_t local_var_3 = boost::numeric_cast<uint128_t>(((AES_BLOCK_blk_cnt >> 15) == 1) ? (~AES_BLOCK_blk_cnt) : AES_BLOCK_blk_cnt);
local_var_3 = ((AES_BLOCK_blk_cnt >> 15) == 1) ? (~local_var_3) : local_var_3;
uint128_t local_var_4 = (AES_aes_counter + local_var_3);
auto local_var_6 = aes128(local_var_4, AES_aes_key);
uint128_t local_var_8 = (local_var_6 ^ AES_BLOCK_rd_data);
auto local_var_8_nxt_holder = local_var_8;
AES_aes_status = local_var_0_nxt_holder;
AES_BLOCK_blk_cnt = AES_BLOCK_blk_cnt_nxt_holder;
AES_BLOCK_enc_data = local_var_8_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "OPERATE state updates:" << std::endl;
instr_update_log << "    AES_aes_status => " << std::hex << "0x" << AES_aes_status << std::endl; 
instr_update_log << "    AES_BLOCK_blk_cnt => " << std::hex << "0x" << AES_BLOCK_blk_cnt << std::endl; 
instr_update_log << "    AES_BLOCK_enc_data => " << std::hex << "0x" << AES_BLOCK_enc_data << std::endl; 
instr_update_log << std::endl;
#endif
}

#include <riscv.h>
bool riscv::decode_riscv_SH() {
auto local_var_1_shifted = riscv_inst >> 0;
auto local_var_1_mask = riscv_inst;
local_var_1_mask = (1 << (6 - 0 + 1)) - 1;
local_var_1_mask &= local_var_1_shifted;
uint7_t local_var_1 = boost::numeric_cast<uint7_t>(local_var_1_mask);
uint7_t local_var_2 = 35;
bool local_var_3 = (local_var_1 == local_var_2);
auto local_var_4_shifted = riscv_inst >> 12;
auto local_var_4_mask = riscv_inst;
local_var_4_mask = (1 << (14 - 12 + 1)) - 1;
local_var_4_mask &= local_var_4_shifted;
uint3_t local_var_4 = boost::numeric_cast<uint3_t>(local_var_4_mask);
uint3_t local_var_5 = 1;
bool local_var_6 = (local_var_4 == local_var_5);
bool local_var_7 = (local_var_3 & local_var_6);
auto& univ_var_25 = local_var_7;
return univ_var_25;
}
void riscv::update_riscv_SH() {
std::map<uint14_t, uint32_t> local_var_0;
store_26(local_var_0);
uint32_t local_var_2 = 4;
uint32_t local_var_3 = (riscv_pc + local_var_2);
auto local_var_3_nxt_holder = local_var_3;
for (auto& it : local_var_0) {
  riscv_mem[it.first] = it.second;
}
riscv_pc = local_var_3_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "SH state updates:" << std::endl;
instr_update_log << "    riscv_mem get updated" << std::endl;
instr_update_log << "    riscv_pc => " << std::hex << "0x" << riscv_pc << std::endl; 
instr_update_log << std::endl;
#endif
}

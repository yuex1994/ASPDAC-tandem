#include <AES_ila_top.h>

void AES::check_aes_status(TandemController* v) {
if (((uint32_t) AES_aes_status) != v->v_top->aes_top->aes_reg_state)
  throw AESException("aes_status unequal.");
}
void AES::check_aes_address(TandemController* v) {
if (((uint32_t) AES_aes_address) != v->v_top->aes_top->aes_reg_opaddr_i->reg_out)
  throw AESException("aes_address unequal.");
}
void AES::check_aes_length(TandemController* v) {
if (((uint32_t) AES_aes_length) != v->v_top->aes_top->aes_reg_oplen_i->reg_out)
  throw AESException("aes_length unequal.");
}
void AES::check_aes_counter(TandemController* v) {
if ((AES_aes_counter >> 0) % (1ll << 32) != v->v_top->aes_top->aes_reg_ctr_i->reg_out[0])
  throw AESException("aes_counter unequal.");
if ((AES_aes_counter >> 32) % (1ll << 32) != v->v_top->aes_top->aes_reg_ctr_i->reg_out[1])
  throw AESException("aes_counter unequal.");
if ((AES_aes_counter >> 64) % (1ll << 32) != v->v_top->aes_top->aes_reg_ctr_i->reg_out[2])
  throw AESException("aes_counter unequal.");
if ((AES_aes_counter >> 96) % (1ll << 32) != v->v_top->aes_top->aes_reg_ctr_i->reg_out[3])
  throw AESException("aes_counter unequal.");
}
void AES::check_aes_key(TandemController* v) {
if ((AES_aes_key >> 0) % (1ll << 32) != v->v_top->aes_top->aes_reg_key0_i->reg_out[0])
  throw AESException("aes_key unequal.");
if ((AES_aes_key >> 32) % (1ll << 32) != v->v_top->aes_top->aes_reg_key0_i->reg_out[1])
  throw AESException("aes_key unequal.");
if ((AES_aes_key >> 64) % (1ll << 32) != v->v_top->aes_top->aes_reg_key0_i->reg_out[2])
  throw AESException("aes_key unequal.");
if ((AES_aes_key >> 96) % (1ll << 32) != v->v_top->aes_top->aes_reg_key0_i->reg_out[3])
  throw AESException("aes_key unequal.");
}
void AES::check_XRAM(TandemController* v) {
}
void AES::check_all_state(TandemController* v) {
    check_aes_status(v);
  check_aes_address(v);
  check_aes_length(v);
  check_aes_counter(v);
  check_aes_key(v);
  check_XRAM(v);
}
void AES::tandem_instr_WRITE_ADDRESS (TandemController* v) {
check_aes_address(v);
check_aes_counter(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_START_ENCRYPT (TandemController* v) {
check_aes_status(v);
}
void AES::tandem_instr_READ_LENGTH (TandemController* v) {
check_aes_address(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_READ_ADDRESS (TandemController* v) {
check_aes_address(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_READ_KEY (TandemController* v) {
check_aes_address(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_READ_COUNTER (TandemController* v) {
check_aes_address(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_GET_STATUS (TandemController* v) {
check_aes_address(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_WRITE_LENGTH (TandemController* v) {
check_aes_address(v);
check_aes_counter(v);
check_aes_key(v);
check_aes_length(v);
check_aes_status(v);
}
void AES::tandem_instr_WRITE_KEY (TandemController* v) {
check_aes_address(v);
check_aes_counter(v);
check_aes_key(v);
check_aes_length(v);
}
void AES::tandem_instr_WRITE_COUNTER (TandemController* v) {
check_aes_address(v);
check_aes_counter(v);
check_aes_key(v);
}
void AES::swap_av(TandemController* v) {
  v->v_top->aes_top->aes_reg_state = (uint32_t) AES_aes_status;
v->v_top->aes_top->aes_reg_opaddr_i->reg_out = (uint32_t) AES_aes_address;
v->v_top->aes_top->aes_reg_oplen_i->reg_out = (uint32_t) AES_aes_length;
v->v_top->aes_top->aes_reg_ctr_i->reg_out[0] = (uint32_t) (AES_aes_counter >> 0) % (1ll << 32);
v->v_top->aes_top->aes_reg_ctr_i->reg_out[1] = (uint32_t) (AES_aes_counter >> 32) % (1ll << 32);
v->v_top->aes_top->aes_reg_ctr_i->reg_out[2] = (uint32_t) (AES_aes_counter >> 64) % (1ll << 32);
v->v_top->aes_top->aes_reg_ctr_i->reg_out[3] = (uint32_t) (AES_aes_counter >> 96) % (1ll << 32);
v->v_top->aes_top->aes_reg_key0_i->reg_out[0] = (uint32_t) (AES_aes_key >> 0) % (1ll << 32);
v->v_top->aes_top->aes_reg_key0_i->reg_out[1] = (uint32_t) (AES_aes_key >> 32) % (1ll << 32);
v->v_top->aes_top->aes_reg_key0_i->reg_out[2] = (uint32_t) (AES_aes_key >> 64) % (1ll << 32);
v->v_top->aes_top->aes_reg_key0_i->reg_out[3] = (uint32_t) (AES_aes_key >> 96) % (1ll << 32);
for (int conv_i = 0; conv_i < 65536; conv_i++) {
  v->v_top->aes_top->xram[conv_i] = AES_XRAM[conv_i];
}
}
void AES::av_converter(TandemController *v) {
  swap_av(v);
}

#include <AES_ila_top.h>

void AES::check_aes_status(TandemController* v) {
}
void AES::check_aes_address(TandemController* v) {
  if (AES_aes_address != v->v_top->mmport.PlainTextPointer)
    throw AESException("aes_address unequal.");
}
void AES::check_aes_length(TandemController* v) {
  if (AES_aes_address != v->v_top->mmport.PlainTextPointer)
    throw AESException("aes_address unequal.");
}
void AES::check_aes_counter(TandemController* v) {
  if ((AES_aes_counter >> 0) % (1ll << 32) != v->v_top->mmport.EncryptCtr[0])
    throw AESException("aes_counter unequal.");
  if ((AES_aes_counter >> 32) % (1ll << 32) != v->v_top->mmport.EncryptCtr[1])
    throw AESException("aes_counter unequal.");
  if ((AES_aes_counter >> 64) % (1ll << 32) != v->v_top->mmport.EncryptCtr[2])
    throw AESException("aes_counter unequal.");
  if ((AES_aes_counter >> 96) % (1ll << 32) != v->v_top->mmport.EncryptCtr[3])
    throw AESException("aes_counter unequal.");
}
void AES::check_aes_key(TandemController* v) {
  if ((AES_aes_key >> 0) % (1ll << 32) != v->v_top->mmport.EncryptKey[0])
    throw AESException("aes_key unequal.");
  if ((AES_aes_key >> 32) % (1ll << 32) != v->v_top->mmport.EncryptKey[1])
    throw AESException("aes_key unequal.");
  if ((AES_aes_key >> 64) % (1ll << 32) != v->v_top->mmport.EncryptKey[2])
    throw AESException("aes_key unequal.");
  if ((AES_aes_key >> 96) % (1ll << 32) != v->v_top->mmport.EncryptKey[3])
    throw AESException("aes_key unequal.");
}
void AES::check_XRAM(TandemController* v) {
  // for (std::map<uint32_t, uint8_t>::iterator it = tandem_XRAM_map.begin(); it != tandem_XRAM_map.end(); it++) {
  //   if (v->v_top->buffer[it->first] != it->second)
  //     throw AESException("XRAM unequal.");
  // }  
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
  v->v_top->mmport.PlainTextPointer = AES_aes_address;
  v->v_top->mmport.EncryptLength = AES_aes_length;
  v->v_top->mmport.EncryptCtr[0] = (uint32_t)(AES_aes_counter >> 0) % (1ll << 32);
  v->v_top->mmport.EncryptCtr[1] = (uint32_t)(AES_aes_counter >> 32) % (1ll << 32);
  v->v_top->mmport.EncryptCtr[2] = (uint32_t)(AES_aes_counter >> 64) % (1ll << 32);
  v->v_top->mmport.EncryptCtr[3] = (uint32_t)(AES_aes_counter >> 96) % (1ll << 32);
  v->v_top->mmport.EncryptKey[0] = (uint32_t)(AES_aes_key >> 0) % (1ll << 32);
  v->v_top->mmport.EncryptKey[1] = (uint32_t)(AES_aes_key >> 32) % (1ll << 32);
  v->v_top->mmport.EncryptKey[2] = (uint32_t)(AES_aes_key >> 64) % (1ll << 32);
  v->v_top->mmport.EncryptKey[3] = (uint32_t)(AES_aes_key >> 96) % (1ll << 32);
  for (int i = 0; i < 65536; i++) {
    v->v_top->buffer[i] = AES_XRAM[i];
  }
}
void AES::av_converter(TandemController *v) {
  swap_av(v);
}

#include <iomanip>
#include <AES.h>
static int instr_cntr = 0;
int AES::GetInstrCntr() {
  return instr_cntr;
}
void AES::IncrementInstrCntr() {
  instr_cntr++;
}
void AES::LogInstrSequence(const std::string& instr_name) {
  instr_log << "Instr No." << std::setw(5) << GetInstrCntr() << '\t';
  instr_log << instr_name << " is activated\n";
  IncrementInstrCntr();
}
static bool g_initialized = false;
void AES::compute() {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
AES_cmd = AES_cmd_in;
AES_cmdaddr = AES_cmdaddr_in;
AES_cmddata = AES_cmddata_in;
if (valid_AES() && decode_AES_WRITE_ADDRESS()) {
  update_AES_WRITE_ADDRESS();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_ADDRESS");
#endif
}
if (valid_AES() && decode_AES_START_ENCRYPT()) {
  update_AES_START_ENCRYPT();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("START_ENCRYPT");
#endif
}
if (valid_AES() && decode_AES_READ_LENGTH()) {
  update_AES_READ_LENGTH();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_LENGTH");
#endif
}
if (valid_AES() && decode_AES_READ_ADDRESS()) {
  update_AES_READ_ADDRESS();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_ADDRESS");
#endif
}
if (valid_AES() && decode_AES_READ_KEY()) {
  update_AES_READ_KEY();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_KEY");
#endif
}
if (valid_AES() && decode_AES_READ_COUNTER()) {
  update_AES_READ_COUNTER();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_COUNTER");
#endif
}
if (valid_AES() && decode_AES_GET_STATUS()) {
  update_AES_GET_STATUS();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("GET_STATUS");
#endif
}
if (valid_AES() && decode_AES_WRITE_LENGTH()) {
  update_AES_WRITE_LENGTH();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_LENGTH");
#endif
}
if (valid_AES() && decode_AES_WRITE_KEY()) {
  update_AES_WRITE_KEY();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_KEY");
#endif
}
if (valid_AES() && decode_AES_WRITE_COUNTER()) {
  update_AES_WRITE_COUNTER();
  AES_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_COUNTER");
#endif
}
while (1) {
  int schedule_counter = 0;
if (valid_AES_BLOCK() && decode_AES_BLOCK_LOAD()) {
  update_AES_BLOCK_LOAD();
    schedule_counter++;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("LOAD");
#endif
}
if (valid_AES_BLOCK() && decode_AES_BLOCK_OPERATE()) {
  update_AES_BLOCK_OPERATE();
    schedule_counter++;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("OPERATE");
#endif
}
if (valid_AES_BLOCK() && decode_AES_BLOCK_STORE()) {
  update_AES_BLOCK_STORE();
    schedule_counter++;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("STORE");
#endif
}
  if (schedule_counter == 0) {
    break;
  }
}
}
void AES::compute(TandemController* v) {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
AES_cmd = AES_cmd_in;
AES_cmdaddr = AES_cmdaddr_in;
AES_cmddata = AES_cmddata_in;
if (valid_AES() && decode_AES_WRITE_ADDRESS()) {
  update_AES_WRITE_ADDRESS();
    AES_pc++;
  tandem_func_ptr = WRITE_ADDRESS;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_ADDRESS");
#endif
}
if (valid_AES() && decode_AES_START_ENCRYPT()) {
  update_AES_START_ENCRYPT();
    AES_pc++;
  tandem_func_ptr = START_ENCRYPT;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("START_ENCRYPT");
#endif
}
if (valid_AES() && decode_AES_READ_LENGTH()) {
  update_AES_READ_LENGTH();
    AES_pc++;
  tandem_func_ptr = READ_LENGTH;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_LENGTH");
#endif
}
if (valid_AES() && decode_AES_READ_ADDRESS()) {
  update_AES_READ_ADDRESS();
    AES_pc++;
  tandem_func_ptr = READ_ADDRESS;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_ADDRESS");
#endif
}
if (valid_AES() && decode_AES_READ_KEY()) {
  update_AES_READ_KEY();
    AES_pc++;
  tandem_func_ptr = READ_KEY;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_KEY");
#endif
}
if (valid_AES() && decode_AES_READ_COUNTER()) {
  update_AES_READ_COUNTER();
    AES_pc++;
  tandem_func_ptr = READ_COUNTER;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("READ_COUNTER");
#endif
}
if (valid_AES() && decode_AES_GET_STATUS()) {
  update_AES_GET_STATUS();
    AES_pc++;
  tandem_func_ptr = GET_STATUS;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("GET_STATUS");
#endif
}
if (valid_AES() && decode_AES_WRITE_LENGTH()) {
  update_AES_WRITE_LENGTH();
    AES_pc++;
  tandem_func_ptr = WRITE_LENGTH;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_LENGTH");
#endif
}
if (valid_AES() && decode_AES_WRITE_KEY()) {
  update_AES_WRITE_KEY();
    AES_pc++;
  tandem_func_ptr = WRITE_KEY;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_KEY");
#endif
}
if (valid_AES() && decode_AES_WRITE_COUNTER()) {
  update_AES_WRITE_COUNTER();
    AES_pc++;
  tandem_func_ptr = WRITE_COUNTER;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("WRITE_COUNTER");
#endif
}
while (1) {
  int schedule_counter = 0;
if (valid_AES_BLOCK() && decode_AES_BLOCK_LOAD()) {
  update_AES_BLOCK_LOAD();
  schedule_counter++;
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("LOAD");
#endif
}
if (valid_AES_BLOCK() && decode_AES_BLOCK_OPERATE()) {
  update_AES_BLOCK_OPERATE();
  schedule_counter++;
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("OPERATE");
#endif
}
if (valid_AES_BLOCK() && decode_AES_BLOCK_STORE()) {
  update_AES_BLOCK_STORE();
  schedule_counter++;
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("STORE");
#endif
}
  if (schedule_counter == 0) {
    break;
  }
}
if ((tandem_func_ptr >= 0) && (tandem_func_ptr < 10)) {
  (this->*(tandem_func[tandem_func_ptr]))(v);
}
else {
  throw AESException("Ran unspecified function!");
}
}

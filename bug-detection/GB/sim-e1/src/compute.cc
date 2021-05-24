#include <iomanip>
#include <GBHigh.h>
static int instr_cntr = 0;
int GBHigh::GetInstrCntr() {
  return instr_cntr;
}
void GBHigh::IncrementInstrCntr() {
  instr_cntr++;
}
void GBHigh::LogInstrSequence(const std::string& instr_name) {
  instr_log << "Instr No." << std::setw(5) << GetInstrCntr() << '\t';
  instr_log << instr_name << " is activated\n";
  IncrementInstrCntr();
}
// static bool g_initialized = false;
void GBHigh::compute() {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
GBHigh_arg_0_TREADY = GBHigh_arg_0_TREADY_in;
GBHigh_arg_1_TVALID = GBHigh_arg_1_TVALID_in;
GBHigh_arg_1_TDATA = GBHigh_arg_1_TDATA_in;
if (valid_GBHigh() && decode_GBHigh_Write()) {
  update_GBHigh_Write();
  GBHigh_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("Write");
#endif
}
if (valid_GBHigh() && decode_GBHigh_Read()) {
  update_GBHigh_Read();
  GBHigh_pc++;
  #ifdef ILATOR_VERBOSE
  LogInstrSequence("Read");
#endif
}
while (1) {
  int schedule_counter = 0;
if (valid_Propagate() && decode_Propagate_prop0()) {
  update_Propagate_prop0();
    schedule_counter++;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("prop0");
#endif
}
if (valid_Propagate() && decode_Propagate_prop1()) {
  update_Propagate_prop1();
    schedule_counter++;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("prop1");
#endif
}
  if (schedule_counter == 0) {
    break;
  }
}
}
void GBHigh::compute(TandemController* v) {
if (!g_initialized) {
  setup_initial_condition();
  g_initialized = true;
}
GBHigh_arg_0_TREADY = GBHigh_arg_0_TREADY_in;
GBHigh_arg_1_TVALID = GBHigh_arg_1_TVALID_in;
GBHigh_arg_1_TDATA = GBHigh_arg_1_TDATA_in;
if (valid_GBHigh() && decode_GBHigh_Write()) {
  update_GBHigh_Write();
    GBHigh_pc++;
  tandem_func_ptr = Write;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("Write");
#endif
}
if (valid_GBHigh() && decode_GBHigh_Read()) {
  update_GBHigh_Read();
    GBHigh_pc++;
  tandem_func_ptr = Read;
#ifdef ILATOR_VERBOSE
  LogInstrSequence("Read");
#endif
}
while (1) {
  int schedule_counter = 0;
if (valid_Propagate() && decode_Propagate_prop0()) {
  update_Propagate_prop0();
  schedule_counter++;
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("prop0");
#endif
}
if (valid_Propagate() && decode_Propagate_prop1()) {
  update_Propagate_prop1();
  schedule_counter++;
    #ifdef ILATOR_VERBOSE
  LogInstrSequence("prop1");
#endif
}
  if (schedule_counter == 0) {
    break;
  }
}
if ((tandem_func_ptr >= 0) && (tandem_func_ptr < 2)) {
  (this->*(tandem_func[tandem_func_ptr]))(v);
}
else {
  throw GBHighException("Ran unspecified function!");
}
}

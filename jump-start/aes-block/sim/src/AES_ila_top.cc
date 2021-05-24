#include <AES_ila_top.h>

i_in input_v_to_i(v_in& test_v) {
  i_in test_i;
test_i.AES_cmdaddr = test_v.addr;
test_i.AES_cmddata = test_v.data_in;
if (test_v.wr == 1)
  test_i.AES_cmd = 2;
if (test_v.wr == 0)
  test_i.AES_cmd = 1;
  return test_i;
}

Ilated::Ilated() {
  i_top = new AES();
}

Ilated::~Ilated() {
  delete i_top;
}

void Ilated::i_input(i_in t_i) {
  i_top->AES_cmd_in = t_i.AES_cmd;
  i_top->AES_cmdaddr_in = t_i.AES_cmdaddr;
  i_top->AES_cmddata_in = t_i.AES_cmddata;
}

void Ilated::v_input(v_in t_v) {
  i_in t_i = input_v_to_i(t_v);
  i_input(t_i);
}

void Ilated::next_instr(TandemController *v) {
  i_top->compute(v);
}

void Ilated::next_instr() {
  i_top->compute();
}

void Ilated::convert_to_rtav(TandemController* v) {
  i_top->av_converter(v);
}


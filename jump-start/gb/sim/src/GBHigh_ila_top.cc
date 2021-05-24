#include <GBHigh_ila_top.h>

i_in input_v_to_i(v_in& test_v) {
  i_in test_i;
  return test_i;
}

Ilated::Ilated() {
  i_top = new GBHigh();
}

Ilated::~Ilated() {
  delete i_top;
}

void Ilated::i_input(i_in t_i) {
  i_top->GBHigh_arg_0_TREADY_in = t_i.GBHigh_arg_0_TREADY;
  i_top->GBHigh_arg_1_TVALID_in = t_i.GBHigh_arg_1_TVALID;
  i_top->GBHigh_arg_1_TDATA_in = t_i.GBHigh_arg_1_TDATA;
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


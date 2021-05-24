#include <riscv_ila_top.h>

i_in input_v_to_i(v_in& test_v) {
  i_in test_i;
test_i.riscv_inst = test_v.mem_rdata;
  return test_i;
}

Ilated::Ilated() {
  i_top = new riscv();
}

Ilated::~Ilated() {
  delete i_top;
}

void Ilated::i_input(i_in t_i) {
  i_top->riscv_inst_in = t_i.riscv_inst;
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


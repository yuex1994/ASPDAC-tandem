#include <AES_ila_top.h>


TandemController::TandemController(Ilated* ilated) {
  v_top = new c_model;
  i = ilated;
}

bool TandemController::start_condition(v_in t_v) {
  bool cond = true;
  return cond;
}

void TandemController::v_input(v_in t_v) {
  if (start_condition(t_v)) {
    test_input = t_v;
  }
}

void TandemController::i_input(v_in t_v) {
  i->v_input(t_v);
}

TandemController::~TandemController() {
  delete v_top;
}

void TandemController::next_cycle() {
  auto t = input_v_to_i(test_input);
  v_top->c_run((uint8_t) t.AES_cmd, t.AES_cmdaddr, t.AES_cmddata);
}

void TandemController::next_instr() {
  i->next_instr();
}

void TandemController::av_converter() {
  i->convert_to_rtav(this);
}

TandemController::TandemController() {
  v_top = new c_model;
}

void TandemController::register_ilated(Ilated* ilated) {
  i = ilated;
}


#include <GBHigh_ila_top.h>


InstrMonitorRead::InstrMonitorRead(v_in t_v) {
t_v_ = t_v;
cycle_left = 2;

}

void InstrMonitorRead::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorRead::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorWrite::InstrMonitorWrite(v_in t_v) {
t_v_ = t_v;
cycle_left = 2;

}

void InstrMonitorWrite::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorWrite::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitor* TandemController::gen_monitor(v_in& t_v) {
i->v_input(t_v);
i->i_top->GBHigh_arg_0_TREADY = i->i_top->GBHigh_arg_0_TREADY_in;
i->i_top->GBHigh_arg_1_TVALID = i->i_top->GBHigh_arg_1_TVALID_in;
i->i_top->GBHigh_arg_1_TDATA = i->i_top->GBHigh_arg_1_TDATA_in;
if (i->i_top->decode_GBHigh_Write()) {
InstrMonitor* ret = new InstrMonitorWrite(t_v);
return ret;
}
if (i->i_top->decode_GBHigh_Read()) {
InstrMonitor* ret = new InstrMonitorRead(t_v);
return ret;
}
}

TandemController::TandemController(Ilated* ilated) {
  v_top = new Vhls_target("v_top");
  i = ilated;
}

bool TandemController::start_condition(v_in t_v) {
  bool cond = true;
cond = cond && ((v_top->arg_0_TVALID == 1) || (v_top->arg_1_TREADY == 1));
  return cond;
}

void TandemController::v_input(v_in t_v) {
  if (start_condition(t_v)) {
    InstrMonitor* i_m = gen_monitor(t_v);
    i_m_list.push_back(i_m);
    v_top->arg_0_TREADY = t_v.arg_0_TREADY;
    v_top->arg_1_TDATA = t_v.arg_1_TDATA;
    v_top->arg_1_TVALID = t_v.arg_1_TVALID;
  }
}

void TandemController::i_input(v_in t_v) {
  i->v_input(t_v);
}

TandemController::~TandemController() {
  delete v_top;
}

void TandemController::next_cycle_av_check() {
  v_top->ap_clk = 0;
  v_top->eval();
  v_top->ap_clk = 1;
  v_top->eval();
    for (auto i_m : i_m_list)
    i_m->pass_cycle(this);
  if (i_m_list.size() == 0)
    return;
  if (i_m_list.front()->is_finish(this)) {
    v_in t_v = i_m_list.front()->t_v_;
    curr_monitor = i_m_list.front();
    i_m_list.pop_front();
    i->v_input(t_v);
    i->next_instr(this);
  }
}

void TandemController::next_cycle() {
  v_top->ap_clk = 0;
  v_top->eval();
  v_top->ap_clk = 1;
  v_top->eval();
}

void TandemController::next_instr() {
  i->next_instr();
}

void TandemController::av_converter() {
  i->convert_to_rtav(this);
}
TandemController::TandemController() {
  v_top = new Vhls_target("v_top");
}

void TandemController::register_ilated(Ilated* ilated) {
  i = ilated;
}


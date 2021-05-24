#include <AES_ila_top.h>


InstrMonitorWRITE_ADDRESS::InstrMonitorWRITE_ADDRESS(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorWRITE_ADDRESS::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorWRITE_ADDRESS::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorWRITE_LENGTH::InstrMonitorWRITE_LENGTH(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorWRITE_LENGTH::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorWRITE_LENGTH::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorWRITE_KEY::InstrMonitorWRITE_KEY(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorWRITE_KEY::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorWRITE_KEY::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorWRITE_COUNTER::InstrMonitorWRITE_COUNTER(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorWRITE_COUNTER::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorWRITE_COUNTER::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorREAD_LENGTH::InstrMonitorREAD_LENGTH(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorREAD_LENGTH::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorREAD_LENGTH::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorREAD_ADDRESS::InstrMonitorREAD_ADDRESS(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorREAD_ADDRESS::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorREAD_ADDRESS::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorREAD_KEY::InstrMonitorREAD_KEY(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorREAD_KEY::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorREAD_KEY::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorREAD_COUNTER::InstrMonitorREAD_COUNTER(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorREAD_COUNTER::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorREAD_COUNTER::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorGET_STATUS::InstrMonitorGET_STATUS(v_in t_v) {
t_v_ = t_v;
cycle_left = 1;

}

void InstrMonitorGET_STATUS::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorGET_STATUS::is_finish(TandemController* v) {
return (cycle_left == 0);
}

InstrMonitorSTART_ENCRYPT::InstrMonitorSTART_ENCRYPT(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;

}

void InstrMonitorSTART_ENCRYPT::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
}

bool InstrMonitorSTART_ENCRYPT::is_finish(TandemController* v) {
bool cond = true;
cond = cond && (v->v_top->aes_top->aes_reg_state == 0);
return cond;
}

InstrMonitor* TandemController::gen_monitor(v_in& t_v) {
i->v_input(t_v);
i->i_top->AES_cmd = i->i_top->AES_cmd_in;
i->i_top->AES_cmdaddr = i->i_top->AES_cmdaddr_in;
i->i_top->AES_cmddata = i->i_top->AES_cmddata_in;
if (i->i_top->decode_AES_WRITE_ADDRESS()) {
InstrMonitor* ret = new InstrMonitorWRITE_ADDRESS(t_v);
return ret;
}
if (i->i_top->decode_AES_START_ENCRYPT()) {
InstrMonitor* ret = new InstrMonitorSTART_ENCRYPT(t_v);
return ret;
}
if (i->i_top->decode_AES_READ_LENGTH()) {
InstrMonitor* ret = new InstrMonitorREAD_LENGTH(t_v);
return ret;
}
if (i->i_top->decode_AES_READ_ADDRESS()) {
InstrMonitor* ret = new InstrMonitorREAD_ADDRESS(t_v);
return ret;
}
if (i->i_top->decode_AES_READ_KEY()) {
InstrMonitor* ret = new InstrMonitorREAD_KEY(t_v);
return ret;
}
if (i->i_top->decode_AES_READ_COUNTER()) {
InstrMonitor* ret = new InstrMonitorREAD_COUNTER(t_v);
return ret;
}
if (i->i_top->decode_AES_GET_STATUS()) {
InstrMonitor* ret = new InstrMonitorGET_STATUS(t_v);
return ret;
}
if (i->i_top->decode_AES_WRITE_LENGTH()) {
InstrMonitor* ret = new InstrMonitorWRITE_LENGTH(t_v);
return ret;
}
if (i->i_top->decode_AES_WRITE_KEY()) {
InstrMonitor* ret = new InstrMonitorWRITE_KEY(t_v);
return ret;
}
if (i->i_top->decode_AES_WRITE_COUNTER()) {
InstrMonitor* ret = new InstrMonitorWRITE_COUNTER(t_v);
return ret;
}
}

TandemController::TandemController(Ilated* ilated) {
  v_top = new Vaes_top("v_top");
  i = ilated;
}

bool TandemController::start_condition(v_in t_v) {
  bool cond = true;
  cond = cond && (v_top->aes_top->aes_reg_state == 0);
  return cond;
}

void TandemController::v_input(v_in t_v) {
  if (start_condition(t_v)) {
    InstrMonitor* i_m = gen_monitor(t_v);
    i_m_list.push_back(i_m);
    v_top->addr = t_v.addr;
    v_top->data_in = t_v.data_in;
    v_top->stb = t_v.stb;
    v_top->wr = t_v.wr;
  }
}

void TandemController::i_input(v_in t_v) {
  i->v_input(t_v);
}

TandemController::~TandemController() {
  delete v_top;
}

void TandemController::next_cycle_av_check() {
  v_top->clk = 0;
  v_top->eval();
  v_top->clk = 1;
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
  v_top->clk = 0;
  v_top->eval();
  v_top->clk = 1;
  v_top->eval();
}

void TandemController::next_instr() {
  i->next_instr();
}

TandemController::TandemController() {
  v_top = new Vaes_top("v_top");
}

void TandemController::register_ilated(Ilated* ilated) {
  i = ilated;
}


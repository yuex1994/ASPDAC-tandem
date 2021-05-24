#include <Vpicorv32_simple.h>
#include <Vpicorv32_simple_picorv32_simple.h>
#include <list>
class Ilated;
class TandemController;
class v_in {
public:
uint32_t mem_rdata;
bool mem_ready;
};

class InstrMonitor {
public:
virtual void pass_cycle(TandemController* v) = 0;
virtual bool is_finish(TandemController* v) = 0;
v_in t_v_;
;
};

class InstrMonitorBEQ : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBEQ(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorBNE : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBNE(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorBLT : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBLT(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorBLTU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBLTU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorBGE : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBGE(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorBGEU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorBGEU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorJAL : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorJAL(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorJALR : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorJALR(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLW : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLW(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLH : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLH(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLHU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLHU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLB : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLB(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLBU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLBU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSW : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSW(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSH : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSH(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSB : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSB(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorADD : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorADD(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorAND : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorAND(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorOR : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorOR(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorXOR : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorXOR(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLL : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLL(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSRL : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSRL(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSUB : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSUB(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSRA : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSRA(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLT : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLT(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLTU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLTU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorADDI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorADDI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLTIU : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLTIU(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLTI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLTI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorANDI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorANDI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorORI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorORI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorXORI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorXORI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSLLI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSLLI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSRLI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSRLI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSRAI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSRAI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorLUI : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorLUI(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorAUIPC : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorAUIPC(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class TandemController {
public:
Vpicorv32_simple* v_top;
Ilated* i;
TandemController();
TandemController(Ilated* ilated);
bool start_condition(v_in t_v);
void v_input(v_in t_v);
void i_input(v_in t_v);
~TandemController();
void next_cycle_av_check();
void next_cycle();
void next_instr();
void av_converter();
std::list<InstrMonitor*> i_m_list;
void register_ilated(Ilated* ilated);
InstrMonitor* gen_monitor(v_in& t_v);
InstrMonitor* curr_monitor;
};

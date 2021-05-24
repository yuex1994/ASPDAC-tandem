#include <Vaes_top.h>
#include <Vaes_top_aes_top.h>
#include <Vaes_top_reg2byte.h>
#include <Vaes_top_reg16byte.h>
#include <list>
class Ilated;
class TandemController;
class v_in {
public:
uint16_t addr;
uint8_t data_in;
bool stb;
bool wr;
};

class InstrMonitor {
public:
virtual void pass_cycle(TandemController* v) = 0;
virtual bool is_finish(TandemController* v) = 0;
v_in t_v_;
;
};

class InstrMonitorWRITE_ADDRESS : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorWRITE_ADDRESS(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorWRITE_LENGTH : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorWRITE_LENGTH(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorWRITE_KEY : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorWRITE_KEY(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorWRITE_COUNTER : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorWRITE_COUNTER(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorREAD_LENGTH : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorREAD_LENGTH(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorREAD_ADDRESS : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorREAD_ADDRESS(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorREAD_KEY : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorREAD_KEY(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorREAD_COUNTER : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorREAD_COUNTER(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorGET_STATUS : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorGET_STATUS(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorSTART_ENCRYPT : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorSTART_ENCRYPT(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class TandemController {
public:
Vaes_top* v_top;
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

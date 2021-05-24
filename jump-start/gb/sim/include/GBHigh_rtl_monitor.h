#include <Vhls_target.h>
#include <Vhls_target_hls_target.h>
#include <Vhls_target_FIFO_hls_target_p_p2_in_bounded_stencil_stream_s.h>
#include <Vhls_target_FIFO_hls_target_p_p2_in_bounded_stencil_stream_s_shiftReg.h>
#include <Vhls_target_hls_target_linebuffer_1.h>
#include <Vhls_target_hls_target_linebuffer.h>
#include <Vhls_target_hls_target_call.h>
#include <Vhls_target_hls_target_call_Loop_LB2D_buf_proc.h>
#include <Vhls_target_hls_target_linebuffer_Loop_1_proc.h>
#include <Vhls_target_hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V__pi16.h>
#include <Vhls_target_hls_target_call_Loop_LB2D_buf_proc_buffer_0_value_V_ram.h>
#include <Vhls_target_hls_target_call_Loop_LB2D_shift_proc.h>
#include <list>
class Ilated;
class TandemController;
class v_in {
public:
bool arg_0_TREADY;
uint8_t arg_1_TDATA;
bool arg_1_TVALID;
};

class InstrMonitor {
public:
virtual void pass_cycle(TandemController* v) = 0;
virtual bool is_finish(TandemController* v) = 0;
v_in t_v_;
;
};

class InstrMonitorRead : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorRead(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class InstrMonitorWrite : public InstrMonitor {
public:
uint32_t cycle_left;
InstrMonitorWrite(v_in t_v);
void pass_cycle(TandemController* v);
bool is_finish(TandemController* v);
};
class TandemController {
public:
Vhls_target* v_top;
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

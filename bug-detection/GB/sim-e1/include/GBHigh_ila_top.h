#include <GBHigh.h>

class i_in {
public:
uint1_t GBHigh_arg_0_TREADY;
uint1_t GBHigh_arg_1_TVALID;
uint8_t GBHigh_arg_1_TDATA;
};
class v_in;
i_in input_v_to_i(v_in& test_v);
class TandemController;
class Ilated {
public:
Ilated();
void i_input(i_in t_i);
void v_input(v_in t_v);
~Ilated();
void next_instr(TandemController *v);
void next_instr();

GBHigh* i_top;
};

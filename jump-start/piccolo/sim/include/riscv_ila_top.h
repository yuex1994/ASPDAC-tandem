#include <riscv.h>

class i_in {
public:
uint32_t riscv_inst;
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
void convert_to_rtav(TandemController* v);
riscv* i_top;
};

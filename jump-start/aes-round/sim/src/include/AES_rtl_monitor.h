#include <list>
#include "AES_impl.h"

class Ilated;
class TandemController;
class v_in {
public:
uint16_t addr;
uint8_t data_in;
bool stb;
bool wr;
};



class TandemController {
public:
c_model* v_top;
Ilated* i;
TandemController();
TandemController(Ilated* ilated);
v_in test_input;
bool start_condition(v_in t_v);
void v_input(v_in t_v);
void i_input(v_in t_v);
~TandemController();
void next_cycle();
void next_instr();
void av_converter();
void register_ilated(Ilated* ilated);
};

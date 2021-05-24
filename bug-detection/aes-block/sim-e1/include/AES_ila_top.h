#include <AES.h>

class i_in {
public:
uint2_t AES_cmd;
uint16_t AES_cmdaddr;
uint8_t AES_cmddata;
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

AES* i_top;
};

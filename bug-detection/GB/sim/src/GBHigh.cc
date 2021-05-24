#include <GBHigh.h>
GBHigh::GBHigh() {
  tandem_func[0] = &GBHigh::tandem_instr_Write;
  tandem_func[1] = &GBHigh::tandem_instr_Read;

GBHigh_pc = 0;
}


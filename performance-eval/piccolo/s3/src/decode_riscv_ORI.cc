#include "riscv.h"
bool riscv::decode_riscv_ORI() {
  if (!1) {
    return false;
  }
  uint7_t tmp_15 = 0 - 1;
  c_15 = static_cast<uint7_t> ((riscv_inst >> 0) & tmp_15);
  c_5445 = c_15 == 19;
  uint3_t tmp_23 = 0 - 1;
  c_23 = static_cast<uint3_t> ((riscv_inst >> 12) & tmp_23);
  c_5441 = c_23 == 6;
  c_5447 = (c_5445 & c_5441);
  return c_5447;
};

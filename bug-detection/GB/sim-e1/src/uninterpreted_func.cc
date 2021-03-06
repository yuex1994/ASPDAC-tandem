#include "GBHigh.h"

uint8_t GBHigh::kernel(uint648_t arg_0) {
  uint32_t sum = 0;
  const uint32_t multiplexer[81] = {
      1,    9,   27,   54,   67,   54,   27,    9,    1,
    9,   81,  243,  486,  603,  486,  243,   81,    9,
27,243,729,1458,1809,1458,729,243,27
,54,486,1458,2916,3618,2916,1458,486,54
,67,603,1809,3618,4489,3618,1809,603,67
,54,486,1458,2916,3618,2916,1458,486,54
,27,243,729,1458,1809,1458,729,243,27
,9,81,243,486,603,486,243,81,9
,1,9,27,54,67,54,27,9,1
  };
  for (int i = 0; i < 648/8; i++) {
    sum += ((uint32_t)((uint8_t) (arg_0 >> (i*8)))) * multiplexer[i]; 

    // std::cout << "data[" << std::to_string(i) << "]: " << ((uint32_t) ((uint8_t) (arg_0 >> (i*8)))) << std::endl;
  }
  sum = sum >> 16;
  return sum;
}
#include "AES.h"


void encrypt_128_key_expand_inline_no_branch_ilated(word state[], word key[]) {
    int nr = 10;
    int i;
    word k0 = key[0], k1 = key[1], k2 = key[2], k3 = key[3];
    state[0] ^= k0;
    state[1] ^= k1;
    state[2] ^= k2;
    state[3] ^= k3;
    word *t0 = (word *)table_0;
    word p0, p1, p2, p3;
    byte *b;
    byte rcon = 1;

    for(i=1; i<nr; i++) {
        word temp = k3;
        rot_down_8(temp);
        sub_byte(temp);
        temp ^= rcon;
        int j = (char)rcon;
        j <<= 1;
        j ^= (j >> 8) & 0x1B; // if (rcon&0x80 != 0) then (j ^= 0x1B)
        rcon = (byte)j;
        k0 ^= temp;
        k1 ^= k0;
        k2 ^= k1;
        k3 ^= k2;
        word z0 = k0, z1 = k1, z2 = k2, z3 = k3;
        b = (byte *)state; table_lookup; rot;
        z0 ^= p0, z3 ^= p1, z2 ^= p2, z1 ^= p3;
        b += 4; table_lookup; rot;
        z1 ^= p0, z0 ^= p1, z3 ^= p2, z2 ^= p3;
        b += 4; table_lookup; rot;
        z2 ^= p0, z1 ^= p1, z0 ^= p2, z3 ^= p3;
        b += 4; table_lookup; rot;
        state[0] = z0 ^ p3;
        state[1] = z1 ^ p2;
        state[2] = z2 ^ p1;
        state[3] = z3 ^ p0;
    }
    word temp = k3;
    rot_down_8(temp);
    sub_byte(temp);
    temp ^= rcon;
    k0 ^= temp;
    k1 ^= k0;
    k2 ^= k1;
    k3 ^= k2;
    byte *a = (byte *)state, *t = table_0;
    b = (byte *)&k0;
    b[0] ^= t[a[0]*4], b[1] ^= t[a[5]*4], b[2] ^= t[a[10]*4], b[3] ^= t[a[15]*4];
    b = (byte *)&k1;
    b[0] ^= t[a[4]*4], b[1] ^= t[a[9]*4], b[2] ^= t[a[14]*4], b[3] ^= t[a[3]*4];
    b = (byte *)&k2;
    b[0] ^= t[a[8]*4], b[1] ^= t[a[13]*4], b[2] ^= t[a[2]*4], b[3] ^= t[a[7]*4];
    b = (byte *)&k3;
    b[0] ^= t[a[12]*4], b[1] ^= t[a[1]*4], b[2] ^= t[a[6]*4], b[3] ^= t[a[11]*4];
    state[0] = k0;
    state[1] = k1;
    state[2] = k2;
    state[3] = k3;
}


uint128_t AES::aes128(uint128_t arg_0, uint128_t arg_1) {
  uint32_t output[4] = {0, 0, 0, 0};
  uint32_t key[4] = {0, 0, 0, 0};
  // std::cout << "arg0: " << arg_0 << std::endl;
  // std::cout << "arg1: " << arg_1 << std::endl;
  uint128_t mask = 0xff; 
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      uint32_t tmp = (uint32_t) ((arg_0 >> (i * 32 + j * 8)) & mask);
      output[3 - i] += (tmp << ((3 - j) * 8)); 
      // std::cout << "tmp[" << i << ", " << j << "] = " << tmp << std::endl; 
      tmp = (uint32_t) ((arg_1 >> (i * 32 + j * 8)) & mask);
      key[3 - i] += (tmp << ((3 - j) * 8));
    }
    // std::cout << "output[" << 3 - i << "] = " << output[3 - i] << std::endl;
  }
//   for (int i = 0; i < 4; i++) {
//     std::cout << "arg_0[" << i << "]: " << (uint32_t) ((arg_0 >> (32*i)) & (0xffffffff)) << std::endl;
//     std::cout << "arg_1[" << i << "]: " << (uint32_t) ((arg_1 >> (32*i)) & (0xffffffff)) << std::endl;
//     std::cout << "i output[" << i << "]: " << output[i] << std::endl;
//     std::cout << "i key[" << i << "]: " << key[i] << std::endl;
//   }
  encrypt_128_key_expand_inline_no_branch_ilated(output, key);
  uint128_t result;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      uint128_t tmp = output[i];
      tmp = tmp >> (j * 8);
      tmp = tmp & (0xff);
      result += tmp << ((3-i)*32 + (3-j)*8);

    }
  }
//   for (int i = 0; i < 4; i++) {
//     std::cout << "result[" << i << "]: " << (uint32_t) ((result_1 >> (32*i)) & (0xffffffff)) << std::endl;
//     std::cout << "i output[" << i << "]: " << output[i] << std::endl;
//   }  
  return result;
}
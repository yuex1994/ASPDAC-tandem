#include <AES.h>
bool AES::valid_AES_BLOCK() {
uint2_t local_var_1 = 0;
bool local_var_2 = (AES_aes_status == local_var_1);
bool local_var_3 = !local_var_2;
auto& univ_var_0 = local_var_3;
return univ_var_0;
}
bool AES::valid_AES() {
uint2_t local_var_1 = 1;
bool local_var_2 = (AES_cmd == local_var_1);
uint2_t local_var_3 = 2;
bool local_var_4 = (AES_cmd == local_var_3);
bool local_var_5 = (local_var_2 | local_var_4);
auto& univ_var_1 = local_var_5;
return univ_var_1;
}

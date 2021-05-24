#include <AES.h>
AES::AES() {
  tandem_func[0] = &AES::tandem_instr_WRITE_ADDRESS;
  tandem_func[1] = &AES::tandem_instr_START_ENCRYPT;
  tandem_func[2] = &AES::tandem_instr_READ_LENGTH;
  tandem_func[3] = &AES::tandem_instr_READ_ADDRESS;
  tandem_func[4] = &AES::tandem_instr_READ_KEY;
  tandem_func[5] = &AES::tandem_instr_READ_COUNTER;
  tandem_func[6] = &AES::tandem_instr_GET_STATUS;
  tandem_func[7] = &AES::tandem_instr_WRITE_LENGTH;
  tandem_func[8] = &AES::tandem_instr_WRITE_KEY;
  tandem_func[9] = &AES::tandem_instr_WRITE_COUNTER;

AES_pc = 0;
}


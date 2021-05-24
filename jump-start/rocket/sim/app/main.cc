// Include Ilated Model
#include "riscv_ila_top.h"

// Include library
// #include <fstream>
// #include <iostream>
#include <chrono>
#include "verilated.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

class Ilated;
class RTLVerilated;


std::vector<v_in> load_test_input(std::ifstream &tv_file)
{
  std::string t_input;
  std::vector<v_in> res;
  while (getline(tv_file, t_input))
  {
    v_in t_in;
    t_in.io_imem_resp_bits_data = std::stoul(t_input, 0, 16);
    res.push_back(t_in);
  }
  return res;
}

void print_x(Ilated* i) {
  if (i->i_top->riscv_x0 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x0 << std::endl;
  if (i->i_top->riscv_x1 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x1 << std::endl;
  if (i->i_top->riscv_x2 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x2 << std::endl;
  if (i->i_top->riscv_x3 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x3 << std::endl;
  if (i->i_top->riscv_x4 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x4 << std::endl;    
  if (i->i_top->riscv_x5 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x5 << std::endl;     
  if (i->i_top->riscv_x6 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x6 << std::endl;     
  if (i->i_top->riscv_x7 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x7 << std::endl;     
  if (i->i_top->riscv_x8 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x8 << std::endl;   
  if (i->i_top->riscv_x9 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x9 << std::endl; 
  if (i->i_top->riscv_x10 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x10 << std::endl;
  if (i->i_top->riscv_x11 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x11 << std::endl;
  if (i->i_top->riscv_x12 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x12 << std::endl;
  if (i->i_top->riscv_x13 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x13 << std::endl;
  if (i->i_top->riscv_x14 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x14 << std::endl;    
  if (i->i_top->riscv_x15 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x15 << std::endl;     
  if (i->i_top->riscv_x16 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x16 << std::endl;     
  if (i->i_top->riscv_x17 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x17 << std::endl;     
  if (i->i_top->riscv_x18 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x18 << std::endl;   
  if (i->i_top->riscv_x19 != 0) 
    std::cout << "yxdbg" << i->i_top->riscv_x19 << std::endl;                                           
}

void print_rtl(TandemController *v) {
  std::cout << "-----------------------" << std::endl;

  for (int i = 0; i < 31; i++) {
    std::cout << "x" << i << ": " << v->v_top->Rocket->_T_590[i] << std::endl;
  }
}


int main(int argc, char **argv) {

  // Instantiate Model -- i
  Ilated* i = new Ilated;
  // Initialize Model -- i 

  // Instantiate Implementation -- v
  TandemController *v = new TandemController(i);
  // Initialize Implementation -- v
  v->v_top->reset = 1;
  for (int i = 0; i < 2; i++) {
    v->next_cycle();
  }
  v->v_top->reset = 0;
  v->next_cycle();
  v->next_cycle();
  for (int i = 0; i < 10; i++) {
    v->next_cycle();
  }
  // tmps
  i->i_top->riscv_pc = 4;
  std::ifstream tv_fp;
  tv_fp.open(argv[1]);
  std::vector<v_in> tv_in;
  tv_in = load_test_input(tv_fp);  

  float p = std::stof(argv[2]);
  long long unsigned int duration = 0;    
  auto timer1 = std::chrono::high_resolution_clock::now();
  if (p > 0) {
    while (i->i_top->riscv_pc < p * tv_in.size() * 4) {
      auto t_v = tv_in[i->i_top->riscv_pc / 4];
      i->v_input(t_v);
      i->next_instr();
    }
    v->av_converter();
    v->next_cycle();
    v->next_cycle();
  }  
  while((v->v_top->io_imem_req_bits_pc != 4 * tv_in.size())) {
    auto t_v = tv_in[v->v_top->io_imem_req_bits_pc / 4 ];
    v->v_top->io_imem_resp_bits_pc = v->v_top->io_imem_req_bits_pc;
    v->v_top->io_imem_resp_valid = v->v_top->io_imem_resp_ready;
    v->v_input(t_v);
    v->next_cycle();
  }
  auto timer2 = std::chrono::high_resolution_clock::now();
  duration += std::chrono::duration_cast<std::chrono::nanoseconds>( timer2 - timer1 ).count();  
  std::cout << "duration: " << duration << std::endl; 

}  
  
  


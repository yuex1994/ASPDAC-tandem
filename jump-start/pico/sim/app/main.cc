// Include Verilated Impl
#include "riscv_ila_top.h"
#include <chrono>


class Ilated;
class RTLVerilated;
// Decl
std::vector<v_in> load_test_input(std::ifstream &tv_file)
{
  std::string t_input;
  std::vector<v_in> res;
  while (getline(tv_file, t_input))
  {
    v_in t_in;
    t_in.mem_ready = 1;
    t_in.mem_rdata = std::stoul(t_input, 0, 16);
    res.push_back(t_in);
  }
  return res;
}


int main(int argc, char **argv) {
  bool run_ilator = (argc > 2);
  bool tandem_enable = (argc > 3);
  // Instantiate Model -- i
  Ilated* i = new Ilated;
  // Initialize Model -- i 
  i->i_top->riscv_x1 = 1;

  // Instantiate Implementation -- v
  TandemController *v = new TandemController(i);
  // Initialize Implementation -- v
  v->v_top->resetn = 0;
  v->next_cycle();
  v->next_cycle();
  v->v_top->resetn = 1;
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->next_cycle();
  v->v_top->picorv32_simple->cpuregs[1] = 1;
  
  if (argc < 2) 
    std::cout << "Need test-vector input." << std::endl;
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
  }
  
  while(v->v_top->picorv32_simple->reg_pc !=  4 * tv_in.size()) {
    auto t_v = tv_in[v->v_top->picorv32_simple->mem_addr / 4];
    v->v_input(t_v);
    v->next_cycle();
    // std::cout << "pc:" << v->v_top->picorv32_simple->reg_pc << std::endl;
    // sleep(1);  
  }
  auto timer2 = std::chrono::high_resolution_clock::now();
  duration += std::chrono::duration_cast<std::chrono::nanoseconds>( timer2 - timer1 ).count();  
  std::cout << "duration: " << duration << std::endl;   
}  
  
  


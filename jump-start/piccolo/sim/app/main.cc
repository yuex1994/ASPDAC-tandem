#include "riscv_ila_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <chrono>


class Ilated;
class RTLVerilated;

vluint64_t main_time = 0;
// VerilatedVcdC* tfp = new VerilatedVcdC;
double sc_time_stamp () {
  return main_time;
}

// Decl
std::vector<v_in> load_test_input(std::ifstream &tv_file)
{
  std::string t_input;
  std::vector<v_in> res;
  while (getline(tv_file, t_input))
  {
    v_in t_in;
    t_in.prob_imem_instr = std::stoul(t_input, 0, 16);
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

  // Instantiate Implementation -- v
  TandemController *v = new TandemController(i);


  
  if (argc < 2) 
    std::cout << "Need test-vector input." << std::endl;
  std::ifstream tv_fp;
  tv_fp.open(argv[1]);
  std::vector<v_in> tv_in;
  tv_in = load_test_input(tv_fp);
  i->i_top->setup_initial_condition();
  float p = std::stof(argv[2]);

  long long unsigned int duration = 0;    
  auto timer1 = std::chrono::high_resolution_clock::now();
  if (p > 0) {
    while (i->i_top->riscv_pc < p * tv_in.size() * 4) {
      auto t_v = tv_in[(i->i_top->riscv_pc - 4096) / 4];
      i->v_input(t_v);
      i->next_instr();
    }
    // Initialize Implementation -- v
    v->v_top->ila_pc_reset_value = i->i_top->riscv_pc;  
    v->v_top->RST_N = 0;
    for (int i = 0; i < 2; i ++) {  
      v->next_cycle();
    }   
    v->v_top->RST_N = 1;
    v->next_cycle();
    v->v_top->hart0_server_reset_request_put = 1;
    v->v_top->EN_hart0_server_reset_request_put = 1;
    v->next_cycle();
    v->v_top->EN_hart0_server_reset_request_put = 0;
    for (int i = 0; i < 133; i ++) {  
      v->next_cycle();
    }    
    v->av_converter();    
  } else {
    v->v_top->RST_N = 0;
    v->v_top->ila_pc_reset_value = 4096;
    for (int i = 0; i < 2; i ++) {  
      v->next_cycle();
    }   
    v->v_top->RST_N = 1;
    v->next_cycle();
    v->v_top->hart0_server_reset_request_put = 1;
    v->v_top->EN_hart0_server_reset_request_put = 1;
    v->next_cycle();
    v->v_top->EN_hart0_server_reset_request_put = 0;
    for (int i = 0; i < 133; i ++) {  
      v->next_cycle();
    }        
  }




  while(v->v_top->mkCPU->yxdbg_pc < 4 * tv_in.size()) {
    auto t_v = tv_in[(v->v_top->mkCPU->yxdbg_pc - 4096) / 4];
    v->v_input(t_v);
    v->next_cycle();
    // std::cout << "pc: " << v->v_top->mkCPU->yxdbg_pc << std::endl;
  }
  auto timer2 = std::chrono::high_resolution_clock::now();
  duration += std::chrono::duration_cast<std::chrono::nanoseconds>( timer2 - timer1 ).count();  
  std::cout << "duration: " << duration << std::endl; 
}  
  
  



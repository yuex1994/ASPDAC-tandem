#include "riscv_ila_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

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
  // Initialize Implementation -- v
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

  
  if (argc < 2) 
    std::cout << "Need test-vector input." << std::endl;
  std::ifstream tv_fp;
  tv_fp.open(argv[1]);
  std::vector<v_in> tv_in;
  tv_in = load_test_input(tv_fp);


  
  long long unsigned int duration;
  while(v->v_top->mkCPU->yxdbg_pc < 4 * tv_in.size()) {
    auto t_v = tv_in[(v->v_top->mkCPU->yxdbg_pc - 4096) / 4];
    v->v_input(t_v);
    v->next_cycle_av_check();
    // std::cout << "pc: " << v->v_top->mkCPU->yxdbg_pc << std::endl;
    // std::cout << "r16: " << i->i_top->riscv_x16 << std::endl;
    // std::cout << "r2: "  << i->i_top->riscv_x2 << std::endl;
    // sleep(1);  
  }
}  
  
  



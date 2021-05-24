#include <GBHigh_ila_top.h>

#include <fstream>
#include <iostream>
#include <exception>
#include <chrono>

std::vector<v_in> load_test_v_input(std::ifstream &tv_file) {
 std::string t_input;
  int j = 0;
  std::vector<v_in> res;
  while (getline(tv_file, t_input))
  {
    v_in t_in;
    std::stringstream t_input_ss(t_input);
    std::string t_input_tt;
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.arg_0_TREADY = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.arg_1_TVALID = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.arg_1_TDATA = std::stoul(t_input_tt, 0, 16);
    }
    res.push_back(t_in);
  }
  return res;  
}

std::vector<i_in> load_test_i_input(std::ifstream &tv_file) {
 std::string t_input;
  int j = 0;
  std::vector<i_in> res;
  while (getline(tv_file, t_input))
  {
    i_in t_in;
    std::stringstream t_input_ss(t_input);
    std::string t_input_tt;
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.GBHigh_arg_0_TREADY = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.GBHigh_arg_1_TVALID = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.GBHigh_arg_1_TDATA = std::stoul(t_input_tt, 0, 16);
    }
    res.push_back(t_in);
  }
  return res;  
}



int main(int argc, char **argv)
{

  // float p = std::stof(argv[2]);
  // Instantiate ILA Execution Model -- i
  Ilated *i = new Ilated();

  // Instantiate Tandem+RTL Execution Model -- v
  TandemController *v = new TandemController(i);

  int swap_time;
  std::istringstream argv_3(argv[3]);
  argv_3 >> swap_time;
  // RTL test vector
  std::vector<v_in> tv_v_in;
  std::vector<i_in> tv_i_in;
  if (argc < 2)
    std::cout << "Need test-vector input." << std::endl;

  std::ifstream tv_v_fp, tv_i_fp;
  tv_i_fp.open(argv[1]);
  tv_v_fp.open(argv[2]);
  tv_i_in = load_test_i_input(tv_i_fp);
  tv_v_in = load_test_v_input(tv_v_fp);
  float p = std::stof(argv[3]);
  long long unsigned int duration = 0;    
  auto timer1 = std::chrono::high_resolution_clock::now();  


  for (int j = 0; j < 500; j++) {
    while (i->i_top->GBHigh_pc < tv_i_in.size() * p) {
      auto t_i = tv_i_in[i->i_top->GBHigh_pc];
      i->i_input(t_i);
      i->next_instr();
      // std::cout << "i_pc: " << i->i_top->GBHigh_pc << std::endl;
    }
    v->v_top->ap_rst_n = 0;
    v->next_cycle();
    v->next_cycle();
    v->v_top->ap_rst_n = 1;
    v->v_top->hls_target->ap_start = 1;  
    i->convert_to_rtav(v);
    v->v_top->hls_target->GB_pc = i->i_top->GBHigh_pc;
    while (v->v_top->hls_target->GB_pc < tv_v_in.size()) {
      auto t_v = tv_v_in[v->v_top->hls_target->GB_pc];
      v->v_input(t_v);
      do {
        v->next_cycle();
      } while (!v->start_condition(t_v));
      // std::cout << "v_pc: " << v->v_top->hls_target->GB_pc << std::endl;
    }
  }
  auto timer2 = std::chrono::high_resolution_clock::now();
  duration += std::chrono::duration_cast<std::chrono::nanoseconds>( timer2 - timer1 ).count();  
  std::cout << "duration: " << duration << std::endl;    
  return 0;
}

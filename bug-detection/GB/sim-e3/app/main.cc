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
  Ilated* i;
  TandemController* v;
  uint32_t pc_pass = 0;
  for (int j = 0; j < 200; j++) {
  // float p = std::stof(argv[2]);
  // Instantiate ILA Execution Model -- i
  i = new Ilated();

  // Instantiate Tandem+RTL Execution Model -- v
  v = new TandemController(i);    
  v->v_top->ap_rst_n = 0;
  v->next_cycle();
  v->next_cycle();

  v->v_top->ap_rst_n = 1;
  v->v_top->hls_target->ap_start = 1;

  // ila tv
  auto t1 = std::chrono::high_resolution_clock::now();

  // auto t_v = tv_v_in[v->v_top->hls_target->GB_pc];
  // v->v_input(t_v);
  // do {
  //   v->next_cycle();
  // } while (!v->start_condition(t_v));

  // t_v = tv_v_in[v->v_top->hls_target->GB_pc];
  // v->v_input(t_v);
  // do {
  //   v->next_cycle();
  // } while (!v->start_condition(t_v));

  while (v->v_top->hls_target->GB_pc < 4867) {
    
    auto t_v = tv_v_in[v->v_top->hls_target->GB_pc + pc_pass];
    v->v_input(t_v);
    do {
      v->next_cycle();
    } while (!v->start_condition(t_v));
    // std::cout << "v_pc:" << v->v_top->hls_target->GB_pc << std::endl;

    if ((v->v_top->hls_target->GB_pc > 3) && (v->v_top->hls_target->GB_pc < 3916)) {
      auto t_i = tv_v_in[v->v_top->hls_target->GB_pc + pc_pass - 4];
      if (i->i_top->GBHigh_pc != v->v_top->hls_target->GB_pc - 1) {
        i->v_input(t_i);
        i->next_instr(v);      
        i->i_top->GBHigh_pc = v->v_top->hls_target->GB_pc - 1;
      }
    }
    if (v->v_top->hls_target->GB_pc > 3921) {
      auto t_i = tv_v_in[v->v_top->hls_target->GB_pc + pc_pass-2];
      if (i->i_top->GBHigh_pc != v->v_top->hls_target->GB_pc - 1) {
        i->v_input(t_i);
        i->next_instr(v);      
        i->i_top->GBHigh_pc = v->v_top->hls_target->GB_pc - 1;
      }
    }
  }
  delete v;
  delete i;
  pc_pass += 4867;
  }


  return 0;
}

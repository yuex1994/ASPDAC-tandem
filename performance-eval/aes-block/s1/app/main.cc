// Include Ilated Model
#include "AES_ila_top.h"

// Include Verilated Impl
#include <fstream>
#include <iostream>
#include <exception>
#include <chrono>


#define AES_START 0xff00
#define AES_STATE 0xff01
#define AES_ADDR 0xff02
#define AES_LENGTH 0xff04
#define AES_KEY 0xff10
#define AES_CNT 0xff20

#define CMD_NOP 0
#define CMD_READ 1
#define CMD_WRITE 2

#define AES_STATE_IDLE 0
#define AES_STATE_READ_DATA 1
#define AES_STATE_OPERATE 2
#define AES_STATE_WRITE_DATA 3
// Util function
//
//

std::vector<v_in> load_testbench(std::ifstream& tv_file) {
  std::vector<v_in> tv_v;
  std::string t_input;

  while (getline(tv_file, t_input)) {
    v_in t_in;
    std::stringstream t_input_ss(t_input);
    std::string t_input_tt;
    if (getline(t_input_ss, t_input_tt, ',')) {
      t_in.wr = std::stoul(t_input_tt, 0, 16); 
    } 
    if (getline(t_input_ss, t_input_tt, ',')) {
      t_in.stb = std::stoul(t_input_tt, 0, 16); 
    } 
    if (getline(t_input_ss, t_input_tt, ',')) {
      t_in.addr = std::stoul(t_input_tt, 0, 16); 
    } 
    if (getline(t_input_ss, t_input_tt, ',')) {
      t_in.data_in = std::stoul(t_input_tt, 0, 16); 
    } 
    tv_v.push_back(t_in);
  }

  return tv_v; 
}

int main(int argc, char **argv) {
  // Instantiate Model -- i
  Ilated* i = new Ilated;
  // Initialize Model -- i 

  // Instantiate Implementation -- v
  TandemController* tc = new TandemController(i);

  // verilog tv
  std::vector<v_in> tv_v;

  // Initialize Implementation -- v
  // tmps
  
  if (argc < 2) 
    std::cout << "Need test-vector input." << std::endl;
  std::ifstream tv_file;
  tv_file.open(argv[1]);
  
  tv_v = load_testbench(tv_file);
 
  // ila tv  
  auto t1 = std::chrono::high_resolution_clock::now();

  while (tc->i->i_top->AES_pc < tv_v.size()) {
    auto t_v = tv_v[tc->i->i_top->AES_pc]; 
    tc->v_input(t_v);
    tc->next_cycle_av_check();
  }  
  auto t2 = std::chrono::high_resolution_clock::now();
  // YUEX: uncomment the following two lines to measure the execution time
  // auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
  // std::cout << "duration: " << duration << std::endl;
  return 0;
}  

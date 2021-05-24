// Include For Tandem Simulation
#include "AES_ila_top.h"

#include <fstream>
#include <iostream>
#include <exception>
#include <chrono>

class Ilated;
class TandemController;

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

std::vector<v_in> load_test_input(std::ifstream &tv_file)
{
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
      t_in.wr = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.stb = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.addr = std::stoul(t_input_tt, 0, 16);
    }
    if (getline(t_input_ss, t_input_tt, ','))
    {
      t_in.data_in = std::stoul(t_input_tt, 0, 16);
    }
    res.push_back(t_in);
  }
  return res;
}

int main(int argc, char **argv)
{
  bool run_ilator = (argc > 2);
  bool tandem_enable = (argc > 3);

  // Instantiate ILA Execution Model -- i
  Ilated *i = new Ilated();

  // Instantiate Tandem+RTL Execution Model -- v
  TandemController *v = new TandemController(i);

  // RTL test vector
  std::vector<v_in> tv_in;
  if (argc < 2)
    std::cout << "Need test-vector input." << std::endl;

  std::ifstream tv_fp;
  tv_fp.open(argv[1]);
  tv_in = load_test_input(tv_fp);

  // ila tv
  auto t1 = std::chrono::high_resolution_clock::now();

  while (v->v_top->aes_top->pc < tv_in.size())
  {
    auto t_v = tv_in[v->v_top->aes_top->pc];
    v->v_input(t_v);
    v->next_cycle_av_check();
    // std::cout << "pc: " << v->v_top->aes_top->pc << std::endl;
  }
  auto t2 = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();
  std::cout << "duration: " << duration << std::endl;

  return 0;
}

#include <aes_128.h>
#include <aes_ila.h>
#include "ilang/ilang++.h"

int main(int argc, char **argv) {
  // extract the configurations

  // build the aes model
  AES aes_ila_model;
  ExportTandemSimChecker(aes_ila_model.model, "../../verilog/", "../../verilog/aes_top.v", "../refinement/ref_map.json", "./s1/", false);
  // ExportCXXSim(aes_ila_model.model, "./s1/");
  // ila_sim.sim_gen("./sim/", false, true, true, true, true, "../refinement/ref-rel-var-map.json");
  // build the aes128 model

  return 0;
}




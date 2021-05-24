#include <riscv_ila_top.h>


InstrMonitorBEQ::InstrMonitorBEQ(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBEQ::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBEQ::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorBNE::InstrMonitorBNE(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBNE::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBNE::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorBLT::InstrMonitorBLT(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBLT::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBLT::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorBLTU::InstrMonitorBLTU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBLTU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBLTU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorBGE::InstrMonitorBGE(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBGE::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBGE::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorBGEU::InstrMonitorBGEU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorBGEU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorBGEU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorJAL::InstrMonitorJAL(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorJAL::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorJAL::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorJALR::InstrMonitorJALR(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorJALR::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorJALR::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLW::InstrMonitorLW(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLW::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLW::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLH::InstrMonitorLH(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLH::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLH::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLHU::InstrMonitorLHU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLHU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLHU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLBU::InstrMonitorLBU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLBU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLBU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLB::InstrMonitorLB(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLB::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLB::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSW::InstrMonitorSW(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSW::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSW::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSH::InstrMonitorSH(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSH::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSH::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSB::InstrMonitorSB(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSB::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSB::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorADD::InstrMonitorADD(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorADD::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorADD::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorAND::InstrMonitorAND(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorAND::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorAND::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorOR::InstrMonitorOR(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorOR::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorOR::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorXOR::InstrMonitorXOR(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorXOR::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorXOR::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLL::InstrMonitorSLL(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLL::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLL::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSRL::InstrMonitorSRL(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSRL::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSRL::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSUB::InstrMonitorSUB(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSUB::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSUB::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSRA::InstrMonitorSRA(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSRA::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSRA::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLT::InstrMonitorSLT(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLT::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLT::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLTU::InstrMonitorSLTU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLTU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLTU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLTIU::InstrMonitorSLTIU(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLTIU::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLTIU::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorADDI::InstrMonitorADDI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorADDI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorADDI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLTI::InstrMonitorSLTI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLTI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLTI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorANDI::InstrMonitorANDI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorANDI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorANDI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorORI::InstrMonitorORI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorORI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorORI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorXORI::InstrMonitorXORI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorXORI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorXORI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSLLI::InstrMonitorSLLI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSLLI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSLLI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSRLI::InstrMonitorSRLI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSRLI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSRLI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorSRAI::InstrMonitorSRAI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorSRAI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorSRAI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorLUI::InstrMonitorLUI(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorLUI::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorLUI::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitorAUIPC::InstrMonitorAUIPC(v_in t_v) {
t_v_ = t_v;
cycle_left = -1;
mon[2] = 0;
mon[1] = 0;
mon[0] = 0;

}

void InstrMonitorAUIPC::pass_cycle(TandemController* v) {
cycle_left = (cycle_left > 0) ? cycle_left - 1 : cycle_left;
mon[2] = mon[1];
mon[1] = mon[0];
mon[0] = (v->v_top->io_imem_req_valid && v->v_top->io_imem_req_bits_pc != 0);
if (mon[2]) p_m[2] = p_m[1];
if (mon[1]) p_m[1] = p_m[0];
if (mon[0]) p_m[0] = v->v_top->io_imem_req_bits_pc_tandem;
}

bool InstrMonitorAUIPC::is_finish(TandemController* v) {
bool cond = true;
cond = cond && mon[2];return cond;
}

InstrMonitor* TandemController::gen_monitor(v_in& t_v) {
i->v_input(t_v);
i->i_top->riscv_inst = i->i_top->riscv_inst_in;
if (i->i_top->decode_riscv_BEQ()) {
InstrMonitor* ret = new InstrMonitorBEQ(t_v);
return ret;
}
if (i->i_top->decode_riscv_BNE()) {
InstrMonitor* ret = new InstrMonitorBNE(t_v);
return ret;
}
if (i->i_top->decode_riscv_BLT()) {
InstrMonitor* ret = new InstrMonitorBLT(t_v);
return ret;
}
if (i->i_top->decode_riscv_BLTU()) {
InstrMonitor* ret = new InstrMonitorBLTU(t_v);
return ret;
}
if (i->i_top->decode_riscv_BGE()) {
InstrMonitor* ret = new InstrMonitorBGE(t_v);
return ret;
}
if (i->i_top->decode_riscv_BGEU()) {
InstrMonitor* ret = new InstrMonitorBGEU(t_v);
return ret;
}
if (i->i_top->decode_riscv_JAL()) {
InstrMonitor* ret = new InstrMonitorJAL(t_v);
return ret;
}
if (i->i_top->decode_riscv_JALR()) {
InstrMonitor* ret = new InstrMonitorJALR(t_v);
return ret;
}
if (i->i_top->decode_riscv_LW()) {
InstrMonitor* ret = new InstrMonitorLW(t_v);
return ret;
}
if (i->i_top->decode_riscv_LH()) {
InstrMonitor* ret = new InstrMonitorLH(t_v);
return ret;
}
if (i->i_top->decode_riscv_LB()) {
InstrMonitor* ret = new InstrMonitorLB(t_v);
return ret;
}
if (i->i_top->decode_riscv_LHU()) {
InstrMonitor* ret = new InstrMonitorLHU(t_v);
return ret;
}
if (i->i_top->decode_riscv_LBU()) {
InstrMonitor* ret = new InstrMonitorLBU(t_v);
return ret;
}
if (i->i_top->decode_riscv_SW()) {
InstrMonitor* ret = new InstrMonitorSW(t_v);
return ret;
}
if (i->i_top->decode_riscv_SH()) {
InstrMonitor* ret = new InstrMonitorSH(t_v);
return ret;
}
if (i->i_top->decode_riscv_SB()) {
InstrMonitor* ret = new InstrMonitorSB(t_v);
return ret;
}
if (i->i_top->decode_riscv_ADD()) {
InstrMonitor* ret = new InstrMonitorADD(t_v);
return ret;
}
if (i->i_top->decode_riscv_AND()) {
InstrMonitor* ret = new InstrMonitorAND(t_v);
return ret;
}
if (i->i_top->decode_riscv_OR()) {
InstrMonitor* ret = new InstrMonitorOR(t_v);
return ret;
}
if (i->i_top->decode_riscv_XOR()) {
InstrMonitor* ret = new InstrMonitorXOR(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLL()) {
InstrMonitor* ret = new InstrMonitorSLL(t_v);
return ret;
}
if (i->i_top->decode_riscv_SRL()) {
InstrMonitor* ret = new InstrMonitorSRL(t_v);
return ret;
}
if (i->i_top->decode_riscv_SUB()) {
InstrMonitor* ret = new InstrMonitorSUB(t_v);
return ret;
}
if (i->i_top->decode_riscv_SRA()) {
InstrMonitor* ret = new InstrMonitorSRA(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLT()) {
InstrMonitor* ret = new InstrMonitorSLT(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLTU()) {
InstrMonitor* ret = new InstrMonitorSLTU(t_v);
return ret;
}
if (i->i_top->decode_riscv_ADDI()) {
InstrMonitor* ret = new InstrMonitorADDI(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLTI()) {
InstrMonitor* ret = new InstrMonitorSLTI(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLTIU()) {
InstrMonitor* ret = new InstrMonitorSLTIU(t_v);
return ret;
}
if (i->i_top->decode_riscv_ANDI()) {
InstrMonitor* ret = new InstrMonitorANDI(t_v);
return ret;
}
if (i->i_top->decode_riscv_ORI()) {
InstrMonitor* ret = new InstrMonitorORI(t_v);
return ret;
}
if (i->i_top->decode_riscv_XORI()) {
InstrMonitor* ret = new InstrMonitorXORI(t_v);
return ret;
}
if (i->i_top->decode_riscv_SLLI()) {
InstrMonitor* ret = new InstrMonitorSLLI(t_v);
return ret;
}
if (i->i_top->decode_riscv_SRLI()) {
InstrMonitor* ret = new InstrMonitorSRLI(t_v);
return ret;
}
if (i->i_top->decode_riscv_SRAI()) {
InstrMonitor* ret = new InstrMonitorSRAI(t_v);
return ret;
}
if (i->i_top->decode_riscv_LUI()) {
InstrMonitor* ret = new InstrMonitorLUI(t_v);
return ret;
}
if (i->i_top->decode_riscv_AUIPC()) {
InstrMonitor* ret = new InstrMonitorAUIPC(t_v);
return ret;
}
}

TandemController::TandemController(Ilated* ilated) {
  v_top = new VRocket("v_top");
  i = ilated;
}

bool TandemController::start_condition(v_in t_v) {
  bool cond = true;
  cond = cond && ((v_top->io_imem_req_bits_pc != 0) == 1);
  cond = cond && (v_top->io_imem_req_valid == 1);
  return cond;
}

void TandemController::v_input(v_in t_v) {
  if (start_condition(t_v)) {
    InstrMonitor* i_m = gen_monitor(t_v);
    i_m_list.push_back(i_m);
    v_top->io_imem_resp_bits_data = t_v.io_imem_resp_bits_data;
    v_top->io_imem_resp_bits_pc = t_v.io_imem_resp_bits_pc;
    v_top->io_imem_resp_valid = t_v.io_imem_resp_valid;
  }
}

void TandemController::i_input(v_in t_v) {
  i->v_input(t_v);
}

TandemController::~TandemController() {
  delete v_top;
}

void TandemController::next_cycle_av_check() {
  v_top->clock = 0;
  v_top->eval();
  v_top->clock = 1;
  v_top->eval();
    for (auto i_m : i_m_list)
    i_m->pass_cycle(this);
  if (i_m_list.size() == 0)
    return;
  if (i_m_list.front()->is_finish(this)) {
    v_in t_v = i_m_list.front()->t_v_;
    curr_monitor = i_m_list.front();
    i_m_list.pop_front();
    i->v_input(t_v);
    i->next_instr(this);
  }
}

void TandemController::next_cycle() {
  v_top->clock = 0;
  v_top->eval();
  v_top->clock = 1;
  v_top->eval();
}

void TandemController::next_instr() {
  i->next_instr();
}

TandemController::TandemController() {
  v_top = new VRocket("v_top");
}

void TandemController::register_ilated(Ilated* ilated) {
  i = ilated;
}


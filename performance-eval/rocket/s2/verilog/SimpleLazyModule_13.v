module SimpleLazyModule_13( // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75910.2]
  input         clock, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75911.4]
  input         reset, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75912.4]
  output        auto_widget_in_a_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [2:0]  auto_widget_in_a_bits_opcode, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [2:0]  auto_widget_in_a_bits_param, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [2:0]  auto_widget_in_a_bits_size, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [1:0]  auto_widget_in_a_bits_source, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [31:0] auto_widget_in_a_bits_address, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_bufferable, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_modifiable, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_readalloc, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_writealloc, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_privileged, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_secure, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_user_amba_prot_fetch, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [3:0]  auto_widget_in_a_bits_mask, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [31:0] auto_widget_in_a_bits_data, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_a_bits_corrupt, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_widget_in_d_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_widget_in_d_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_widget_in_d_bits_opcode, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_widget_in_d_bits_size, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [1:0]  auto_widget_in_d_bits_source, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_widget_in_d_bits_denied, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [31:0] auto_widget_in_d_bits_data, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_widget_in_d_bits_corrupt, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_aw_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_aw_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_aw_bits_id, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [31:0] auto_axi4yank_out_aw_bits_addr, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [7:0]  auto_axi4yank_out_aw_bits_len, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_axi4yank_out_aw_bits_size, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [1:0]  auto_axi4yank_out_aw_bits_burst, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_aw_bits_lock, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_aw_bits_cache, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_axi4yank_out_aw_bits_prot, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_aw_bits_qos, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_w_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_w_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [31:0] auto_axi4yank_out_w_bits_data, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_w_bits_strb, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_w_bits_last, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_b_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_b_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [3:0]  auto_axi4yank_out_b_bits_id, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [1:0]  auto_axi4yank_out_b_bits_resp, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_ar_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_ar_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_ar_bits_id, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [31:0] auto_axi4yank_out_ar_bits_addr, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [7:0]  auto_axi4yank_out_ar_bits_len, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_axi4yank_out_ar_bits_size, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [1:0]  auto_axi4yank_out_ar_bits_burst, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_ar_bits_lock, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_ar_bits_cache, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [2:0]  auto_axi4yank_out_ar_bits_prot, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output [3:0]  auto_axi4yank_out_ar_bits_qos, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  output        auto_axi4yank_out_r_ready, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_r_valid, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [3:0]  auto_axi4yank_out_r_bits_id, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [31:0] auto_axi4yank_out_r_bits_data, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input  [1:0]  auto_axi4yank_out_r_bits_resp, // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
  input         auto_axi4yank_out_r_bits_last // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75913.4]
);
  wire  axi4yank_clock; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_reset; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_aw_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_aw_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_aw_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_in_aw_bits_addr; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [7:0] axi4yank_auto_in_aw_bits_len; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_in_aw_bits_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_aw_bits_burst; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_aw_bits_lock; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_aw_bits_cache; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_in_aw_bits_prot; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_aw_bits_qos; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_aw_bits_echo_tl_state_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_aw_bits_echo_tl_state_source; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_w_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_w_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_in_w_bits_data; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_w_bits_strb; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_w_bits_last; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_b_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_b_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_b_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_b_bits_resp; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_b_bits_echo_tl_state_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_b_bits_echo_tl_state_source; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_ar_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_ar_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_ar_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_in_ar_bits_addr; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [7:0] axi4yank_auto_in_ar_bits_len; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_in_ar_bits_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_ar_bits_burst; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_ar_bits_lock; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_ar_bits_cache; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_in_ar_bits_prot; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_ar_bits_qos; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_ar_bits_echo_tl_state_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_ar_bits_echo_tl_state_source; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_r_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_r_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_r_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_in_r_bits_data; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_r_bits_resp; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_in_r_bits_echo_tl_state_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_in_r_bits_echo_tl_state_source; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_in_r_bits_last; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_aw_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_aw_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_aw_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_out_aw_bits_addr; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [7:0] axi4yank_auto_out_aw_bits_len; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_out_aw_bits_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_out_aw_bits_burst; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_aw_bits_lock; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_aw_bits_cache; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_out_aw_bits_prot; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_aw_bits_qos; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_w_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_w_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_out_w_bits_data; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_w_bits_strb; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_w_bits_last; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_b_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_b_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_b_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_out_b_bits_resp; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_ar_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_ar_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_ar_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_out_ar_bits_addr; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [7:0] axi4yank_auto_out_ar_bits_len; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_out_ar_bits_size; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_out_ar_bits_burst; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_ar_bits_lock; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_ar_bits_cache; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [2:0] axi4yank_auto_out_ar_bits_prot; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_ar_bits_qos; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_r_ready; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_r_valid; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [3:0] axi4yank_auto_out_r_bits_id; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [31:0] axi4yank_auto_out_r_bits_data; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire [1:0] axi4yank_auto_out_r_bits_resp; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4yank_auto_out_r_bits_last; // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
  wire  axi4index_auto_in_aw_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_aw_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_aw_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_in_aw_bits_addr; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [7:0] axi4index_auto_in_aw_bits_len; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_in_aw_bits_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_aw_bits_burst; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_aw_bits_lock; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_aw_bits_cache; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_in_aw_bits_prot; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_aw_bits_qos; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_aw_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_aw_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_w_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_w_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_in_w_bits_data; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_w_bits_strb; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_w_bits_last; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_b_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_b_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_b_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_b_bits_resp; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_b_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_b_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_ar_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_ar_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_ar_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_in_ar_bits_addr; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [7:0] axi4index_auto_in_ar_bits_len; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_in_ar_bits_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_ar_bits_burst; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_ar_bits_lock; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_ar_bits_cache; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_in_ar_bits_prot; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_ar_bits_qos; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_ar_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_ar_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_r_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_r_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_r_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_in_r_bits_data; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_r_bits_resp; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_in_r_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_in_r_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_in_r_bits_last; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_aw_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_aw_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_aw_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_out_aw_bits_addr; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [7:0] axi4index_auto_out_aw_bits_len; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_out_aw_bits_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_aw_bits_burst; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_aw_bits_lock; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_aw_bits_cache; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_out_aw_bits_prot; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_aw_bits_qos; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_aw_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_aw_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_w_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_w_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_out_w_bits_data; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_w_bits_strb; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_w_bits_last; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_b_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_b_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_b_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_b_bits_resp; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_b_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_b_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_ar_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_ar_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_ar_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_out_ar_bits_addr; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [7:0] axi4index_auto_out_ar_bits_len; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_out_ar_bits_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_ar_bits_burst; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_ar_bits_lock; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_ar_bits_cache; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [2:0] axi4index_auto_out_ar_bits_prot; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_ar_bits_qos; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_ar_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_ar_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_r_ready; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_r_valid; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_r_bits_id; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [31:0] axi4index_auto_out_r_bits_data; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_r_bits_resp; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [3:0] axi4index_auto_out_r_bits_echo_tl_state_size; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire [1:0] axi4index_auto_out_r_bits_echo_tl_state_source; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  axi4index_auto_out_r_bits_last; // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
  wire  tl2axi4_clock; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_reset; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_in_a_bits_opcode; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_in_a_bits_param; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_in_a_bits_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_in_a_bits_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_in_a_bits_address; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_bufferable; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_modifiable; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_readalloc; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_writealloc; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_privileged; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_secure; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_user_amba_prot_fetch; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_in_a_bits_mask; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_in_a_bits_data; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_a_bits_corrupt; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_d_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_d_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_in_d_bits_opcode; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_in_d_bits_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_in_d_bits_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_d_bits_denied; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_in_d_bits_data; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_in_d_bits_corrupt; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_aw_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_aw_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_aw_bits_id; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_out_aw_bits_addr; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [7:0] tl2axi4_auto_out_aw_bits_len; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_out_aw_bits_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_aw_bits_burst; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_aw_bits_lock; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_aw_bits_cache; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_out_aw_bits_prot; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_aw_bits_qos; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_aw_bits_echo_tl_state_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_aw_bits_echo_tl_state_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_w_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_w_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_out_w_bits_data; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_w_bits_strb; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_w_bits_last; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_b_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_b_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_b_bits_id; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_b_bits_resp; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_b_bits_echo_tl_state_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_b_bits_echo_tl_state_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_ar_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_ar_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_ar_bits_id; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_out_ar_bits_addr; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [7:0] tl2axi4_auto_out_ar_bits_len; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_out_ar_bits_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_ar_bits_burst; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_ar_bits_lock; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_ar_bits_cache; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [2:0] tl2axi4_auto_out_ar_bits_prot; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_ar_bits_qos; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_ar_bits_echo_tl_state_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_ar_bits_echo_tl_state_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_r_ready; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_r_valid; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_r_bits_id; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [31:0] tl2axi4_auto_out_r_bits_data; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_r_bits_resp; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [3:0] tl2axi4_auto_out_r_bits_echo_tl_state_size; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire [1:0] tl2axi4_auto_out_r_bits_echo_tl_state_source; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  tl2axi4_auto_out_r_bits_last; // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
  wire  widget_clock; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_reset; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_ready; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_valid; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_in_a_bits_opcode; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_in_a_bits_param; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_in_a_bits_size; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [1:0] widget_auto_in_a_bits_source; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_in_a_bits_address; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_bufferable; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_modifiable; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_readalloc; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_writealloc; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_privileged; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_secure; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_user_amba_prot_fetch; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [3:0] widget_auto_in_a_bits_mask; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_in_a_bits_data; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_a_bits_corrupt; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_d_ready; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_d_valid; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_in_d_bits_opcode; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_in_d_bits_size; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [1:0] widget_auto_in_d_bits_source; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_d_bits_denied; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_in_d_bits_data; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_in_d_bits_corrupt; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_ready; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_valid; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_out_a_bits_opcode; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_out_a_bits_param; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_out_a_bits_size; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [1:0] widget_auto_out_a_bits_source; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_out_a_bits_address; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_bufferable; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_modifiable; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_readalloc; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_writealloc; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_privileged; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_secure; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_user_amba_prot_fetch; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [3:0] widget_auto_out_a_bits_mask; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_out_a_bits_data; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_a_bits_corrupt; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_d_ready; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_d_valid; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_out_d_bits_opcode; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [2:0] widget_auto_out_d_bits_size; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [1:0] widget_auto_out_d_bits_source; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_d_bits_denied; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire [31:0] widget_auto_out_d_bits_data; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  wire  widget_auto_out_d_bits_corrupt; // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
  AXI4UserYanker_2 axi4yank ( // @[UserYanker.scala 97:30:freechips.rocketchip.system.DefaultRV32Config.fir@75918.4]
    .clock(axi4yank_clock),
    .reset(axi4yank_reset),
    .auto_in_aw_ready(axi4yank_auto_in_aw_ready),
    .auto_in_aw_valid(axi4yank_auto_in_aw_valid),
    .auto_in_aw_bits_id(axi4yank_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(axi4yank_auto_in_aw_bits_addr),
    .auto_in_aw_bits_len(axi4yank_auto_in_aw_bits_len),
    .auto_in_aw_bits_size(axi4yank_auto_in_aw_bits_size),
    .auto_in_aw_bits_burst(axi4yank_auto_in_aw_bits_burst),
    .auto_in_aw_bits_lock(axi4yank_auto_in_aw_bits_lock),
    .auto_in_aw_bits_cache(axi4yank_auto_in_aw_bits_cache),
    .auto_in_aw_bits_prot(axi4yank_auto_in_aw_bits_prot),
    .auto_in_aw_bits_qos(axi4yank_auto_in_aw_bits_qos),
    .auto_in_aw_bits_echo_tl_state_size(axi4yank_auto_in_aw_bits_echo_tl_state_size),
    .auto_in_aw_bits_echo_tl_state_source(axi4yank_auto_in_aw_bits_echo_tl_state_source),
    .auto_in_w_ready(axi4yank_auto_in_w_ready),
    .auto_in_w_valid(axi4yank_auto_in_w_valid),
    .auto_in_w_bits_data(axi4yank_auto_in_w_bits_data),
    .auto_in_w_bits_strb(axi4yank_auto_in_w_bits_strb),
    .auto_in_w_bits_last(axi4yank_auto_in_w_bits_last),
    .auto_in_b_ready(axi4yank_auto_in_b_ready),
    .auto_in_b_valid(axi4yank_auto_in_b_valid),
    .auto_in_b_bits_id(axi4yank_auto_in_b_bits_id),
    .auto_in_b_bits_resp(axi4yank_auto_in_b_bits_resp),
    .auto_in_b_bits_echo_tl_state_size(axi4yank_auto_in_b_bits_echo_tl_state_size),
    .auto_in_b_bits_echo_tl_state_source(axi4yank_auto_in_b_bits_echo_tl_state_source),
    .auto_in_ar_ready(axi4yank_auto_in_ar_ready),
    .auto_in_ar_valid(axi4yank_auto_in_ar_valid),
    .auto_in_ar_bits_id(axi4yank_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(axi4yank_auto_in_ar_bits_addr),
    .auto_in_ar_bits_len(axi4yank_auto_in_ar_bits_len),
    .auto_in_ar_bits_size(axi4yank_auto_in_ar_bits_size),
    .auto_in_ar_bits_burst(axi4yank_auto_in_ar_bits_burst),
    .auto_in_ar_bits_lock(axi4yank_auto_in_ar_bits_lock),
    .auto_in_ar_bits_cache(axi4yank_auto_in_ar_bits_cache),
    .auto_in_ar_bits_prot(axi4yank_auto_in_ar_bits_prot),
    .auto_in_ar_bits_qos(axi4yank_auto_in_ar_bits_qos),
    .auto_in_ar_bits_echo_tl_state_size(axi4yank_auto_in_ar_bits_echo_tl_state_size),
    .auto_in_ar_bits_echo_tl_state_source(axi4yank_auto_in_ar_bits_echo_tl_state_source),
    .auto_in_r_ready(axi4yank_auto_in_r_ready),
    .auto_in_r_valid(axi4yank_auto_in_r_valid),
    .auto_in_r_bits_id(axi4yank_auto_in_r_bits_id),
    .auto_in_r_bits_data(axi4yank_auto_in_r_bits_data),
    .auto_in_r_bits_resp(axi4yank_auto_in_r_bits_resp),
    .auto_in_r_bits_echo_tl_state_size(axi4yank_auto_in_r_bits_echo_tl_state_size),
    .auto_in_r_bits_echo_tl_state_source(axi4yank_auto_in_r_bits_echo_tl_state_source),
    .auto_in_r_bits_last(axi4yank_auto_in_r_bits_last),
    .auto_out_aw_ready(axi4yank_auto_out_aw_ready),
    .auto_out_aw_valid(axi4yank_auto_out_aw_valid),
    .auto_out_aw_bits_id(axi4yank_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(axi4yank_auto_out_aw_bits_addr),
    .auto_out_aw_bits_len(axi4yank_auto_out_aw_bits_len),
    .auto_out_aw_bits_size(axi4yank_auto_out_aw_bits_size),
    .auto_out_aw_bits_burst(axi4yank_auto_out_aw_bits_burst),
    .auto_out_aw_bits_lock(axi4yank_auto_out_aw_bits_lock),
    .auto_out_aw_bits_cache(axi4yank_auto_out_aw_bits_cache),
    .auto_out_aw_bits_prot(axi4yank_auto_out_aw_bits_prot),
    .auto_out_aw_bits_qos(axi4yank_auto_out_aw_bits_qos),
    .auto_out_w_ready(axi4yank_auto_out_w_ready),
    .auto_out_w_valid(axi4yank_auto_out_w_valid),
    .auto_out_w_bits_data(axi4yank_auto_out_w_bits_data),
    .auto_out_w_bits_strb(axi4yank_auto_out_w_bits_strb),
    .auto_out_w_bits_last(axi4yank_auto_out_w_bits_last),
    .auto_out_b_ready(axi4yank_auto_out_b_ready),
    .auto_out_b_valid(axi4yank_auto_out_b_valid),
    .auto_out_b_bits_id(axi4yank_auto_out_b_bits_id),
    .auto_out_b_bits_resp(axi4yank_auto_out_b_bits_resp),
    .auto_out_ar_ready(axi4yank_auto_out_ar_ready),
    .auto_out_ar_valid(axi4yank_auto_out_ar_valid),
    .auto_out_ar_bits_id(axi4yank_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(axi4yank_auto_out_ar_bits_addr),
    .auto_out_ar_bits_len(axi4yank_auto_out_ar_bits_len),
    .auto_out_ar_bits_size(axi4yank_auto_out_ar_bits_size),
    .auto_out_ar_bits_burst(axi4yank_auto_out_ar_bits_burst),
    .auto_out_ar_bits_lock(axi4yank_auto_out_ar_bits_lock),
    .auto_out_ar_bits_cache(axi4yank_auto_out_ar_bits_cache),
    .auto_out_ar_bits_prot(axi4yank_auto_out_ar_bits_prot),
    .auto_out_ar_bits_qos(axi4yank_auto_out_ar_bits_qos),
    .auto_out_r_ready(axi4yank_auto_out_r_ready),
    .auto_out_r_valid(axi4yank_auto_out_r_valid),
    .auto_out_r_bits_id(axi4yank_auto_out_r_bits_id),
    .auto_out_r_bits_data(axi4yank_auto_out_r_bits_data),
    .auto_out_r_bits_resp(axi4yank_auto_out_r_bits_resp),
    .auto_out_r_bits_last(axi4yank_auto_out_r_bits_last)
  );
  AXI4IdIndexer_2 axi4index ( // @[IdIndexer.scala 84:31:freechips.rocketchip.system.DefaultRV32Config.fir@75924.4]
    .auto_in_aw_ready(axi4index_auto_in_aw_ready),
    .auto_in_aw_valid(axi4index_auto_in_aw_valid),
    .auto_in_aw_bits_id(axi4index_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(axi4index_auto_in_aw_bits_addr),
    .auto_in_aw_bits_len(axi4index_auto_in_aw_bits_len),
    .auto_in_aw_bits_size(axi4index_auto_in_aw_bits_size),
    .auto_in_aw_bits_burst(axi4index_auto_in_aw_bits_burst),
    .auto_in_aw_bits_lock(axi4index_auto_in_aw_bits_lock),
    .auto_in_aw_bits_cache(axi4index_auto_in_aw_bits_cache),
    .auto_in_aw_bits_prot(axi4index_auto_in_aw_bits_prot),
    .auto_in_aw_bits_qos(axi4index_auto_in_aw_bits_qos),
    .auto_in_aw_bits_echo_tl_state_size(axi4index_auto_in_aw_bits_echo_tl_state_size),
    .auto_in_aw_bits_echo_tl_state_source(axi4index_auto_in_aw_bits_echo_tl_state_source),
    .auto_in_w_ready(axi4index_auto_in_w_ready),
    .auto_in_w_valid(axi4index_auto_in_w_valid),
    .auto_in_w_bits_data(axi4index_auto_in_w_bits_data),
    .auto_in_w_bits_strb(axi4index_auto_in_w_bits_strb),
    .auto_in_w_bits_last(axi4index_auto_in_w_bits_last),
    .auto_in_b_ready(axi4index_auto_in_b_ready),
    .auto_in_b_valid(axi4index_auto_in_b_valid),
    .auto_in_b_bits_id(axi4index_auto_in_b_bits_id),
    .auto_in_b_bits_resp(axi4index_auto_in_b_bits_resp),
    .auto_in_b_bits_echo_tl_state_size(axi4index_auto_in_b_bits_echo_tl_state_size),
    .auto_in_b_bits_echo_tl_state_source(axi4index_auto_in_b_bits_echo_tl_state_source),
    .auto_in_ar_ready(axi4index_auto_in_ar_ready),
    .auto_in_ar_valid(axi4index_auto_in_ar_valid),
    .auto_in_ar_bits_id(axi4index_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(axi4index_auto_in_ar_bits_addr),
    .auto_in_ar_bits_len(axi4index_auto_in_ar_bits_len),
    .auto_in_ar_bits_size(axi4index_auto_in_ar_bits_size),
    .auto_in_ar_bits_burst(axi4index_auto_in_ar_bits_burst),
    .auto_in_ar_bits_lock(axi4index_auto_in_ar_bits_lock),
    .auto_in_ar_bits_cache(axi4index_auto_in_ar_bits_cache),
    .auto_in_ar_bits_prot(axi4index_auto_in_ar_bits_prot),
    .auto_in_ar_bits_qos(axi4index_auto_in_ar_bits_qos),
    .auto_in_ar_bits_echo_tl_state_size(axi4index_auto_in_ar_bits_echo_tl_state_size),
    .auto_in_ar_bits_echo_tl_state_source(axi4index_auto_in_ar_bits_echo_tl_state_source),
    .auto_in_r_ready(axi4index_auto_in_r_ready),
    .auto_in_r_valid(axi4index_auto_in_r_valid),
    .auto_in_r_bits_id(axi4index_auto_in_r_bits_id),
    .auto_in_r_bits_data(axi4index_auto_in_r_bits_data),
    .auto_in_r_bits_resp(axi4index_auto_in_r_bits_resp),
    .auto_in_r_bits_echo_tl_state_size(axi4index_auto_in_r_bits_echo_tl_state_size),
    .auto_in_r_bits_echo_tl_state_source(axi4index_auto_in_r_bits_echo_tl_state_source),
    .auto_in_r_bits_last(axi4index_auto_in_r_bits_last),
    .auto_out_aw_ready(axi4index_auto_out_aw_ready),
    .auto_out_aw_valid(axi4index_auto_out_aw_valid),
    .auto_out_aw_bits_id(axi4index_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(axi4index_auto_out_aw_bits_addr),
    .auto_out_aw_bits_len(axi4index_auto_out_aw_bits_len),
    .auto_out_aw_bits_size(axi4index_auto_out_aw_bits_size),
    .auto_out_aw_bits_burst(axi4index_auto_out_aw_bits_burst),
    .auto_out_aw_bits_lock(axi4index_auto_out_aw_bits_lock),
    .auto_out_aw_bits_cache(axi4index_auto_out_aw_bits_cache),
    .auto_out_aw_bits_prot(axi4index_auto_out_aw_bits_prot),
    .auto_out_aw_bits_qos(axi4index_auto_out_aw_bits_qos),
    .auto_out_aw_bits_echo_tl_state_size(axi4index_auto_out_aw_bits_echo_tl_state_size),
    .auto_out_aw_bits_echo_tl_state_source(axi4index_auto_out_aw_bits_echo_tl_state_source),
    .auto_out_w_ready(axi4index_auto_out_w_ready),
    .auto_out_w_valid(axi4index_auto_out_w_valid),
    .auto_out_w_bits_data(axi4index_auto_out_w_bits_data),
    .auto_out_w_bits_strb(axi4index_auto_out_w_bits_strb),
    .auto_out_w_bits_last(axi4index_auto_out_w_bits_last),
    .auto_out_b_ready(axi4index_auto_out_b_ready),
    .auto_out_b_valid(axi4index_auto_out_b_valid),
    .auto_out_b_bits_id(axi4index_auto_out_b_bits_id),
    .auto_out_b_bits_resp(axi4index_auto_out_b_bits_resp),
    .auto_out_b_bits_echo_tl_state_size(axi4index_auto_out_b_bits_echo_tl_state_size),
    .auto_out_b_bits_echo_tl_state_source(axi4index_auto_out_b_bits_echo_tl_state_source),
    .auto_out_ar_ready(axi4index_auto_out_ar_ready),
    .auto_out_ar_valid(axi4index_auto_out_ar_valid),
    .auto_out_ar_bits_id(axi4index_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(axi4index_auto_out_ar_bits_addr),
    .auto_out_ar_bits_len(axi4index_auto_out_ar_bits_len),
    .auto_out_ar_bits_size(axi4index_auto_out_ar_bits_size),
    .auto_out_ar_bits_burst(axi4index_auto_out_ar_bits_burst),
    .auto_out_ar_bits_lock(axi4index_auto_out_ar_bits_lock),
    .auto_out_ar_bits_cache(axi4index_auto_out_ar_bits_cache),
    .auto_out_ar_bits_prot(axi4index_auto_out_ar_bits_prot),
    .auto_out_ar_bits_qos(axi4index_auto_out_ar_bits_qos),
    .auto_out_ar_bits_echo_tl_state_size(axi4index_auto_out_ar_bits_echo_tl_state_size),
    .auto_out_ar_bits_echo_tl_state_source(axi4index_auto_out_ar_bits_echo_tl_state_source),
    .auto_out_r_ready(axi4index_auto_out_r_ready),
    .auto_out_r_valid(axi4index_auto_out_r_valid),
    .auto_out_r_bits_id(axi4index_auto_out_r_bits_id),
    .auto_out_r_bits_data(axi4index_auto_out_r_bits_data),
    .auto_out_r_bits_resp(axi4index_auto_out_r_bits_resp),
    .auto_out_r_bits_echo_tl_state_size(axi4index_auto_out_r_bits_echo_tl_state_size),
    .auto_out_r_bits_echo_tl_state_source(axi4index_auto_out_r_bits_echo_tl_state_source),
    .auto_out_r_bits_last(axi4index_auto_out_r_bits_last)
  );
  TLToAXI4_1 tl2axi4 ( // @[ToAXI4.scala 276:29:freechips.rocketchip.system.DefaultRV32Config.fir@75930.4]
    .clock(tl2axi4_clock),
    .reset(tl2axi4_reset),
    .auto_in_a_ready(tl2axi4_auto_in_a_ready),
    .auto_in_a_valid(tl2axi4_auto_in_a_valid),
    .auto_in_a_bits_opcode(tl2axi4_auto_in_a_bits_opcode),
    .auto_in_a_bits_param(tl2axi4_auto_in_a_bits_param),
    .auto_in_a_bits_size(tl2axi4_auto_in_a_bits_size),
    .auto_in_a_bits_source(tl2axi4_auto_in_a_bits_source),
    .auto_in_a_bits_address(tl2axi4_auto_in_a_bits_address),
    .auto_in_a_bits_user_amba_prot_bufferable(tl2axi4_auto_in_a_bits_user_amba_prot_bufferable),
    .auto_in_a_bits_user_amba_prot_modifiable(tl2axi4_auto_in_a_bits_user_amba_prot_modifiable),
    .auto_in_a_bits_user_amba_prot_readalloc(tl2axi4_auto_in_a_bits_user_amba_prot_readalloc),
    .auto_in_a_bits_user_amba_prot_writealloc(tl2axi4_auto_in_a_bits_user_amba_prot_writealloc),
    .auto_in_a_bits_user_amba_prot_privileged(tl2axi4_auto_in_a_bits_user_amba_prot_privileged),
    .auto_in_a_bits_user_amba_prot_secure(tl2axi4_auto_in_a_bits_user_amba_prot_secure),
    .auto_in_a_bits_user_amba_prot_fetch(tl2axi4_auto_in_a_bits_user_amba_prot_fetch),
    .auto_in_a_bits_mask(tl2axi4_auto_in_a_bits_mask),
    .auto_in_a_bits_data(tl2axi4_auto_in_a_bits_data),
    .auto_in_a_bits_corrupt(tl2axi4_auto_in_a_bits_corrupt),
    .auto_in_d_ready(tl2axi4_auto_in_d_ready),
    .auto_in_d_valid(tl2axi4_auto_in_d_valid),
    .auto_in_d_bits_opcode(tl2axi4_auto_in_d_bits_opcode),
    .auto_in_d_bits_size(tl2axi4_auto_in_d_bits_size),
    .auto_in_d_bits_source(tl2axi4_auto_in_d_bits_source),
    .auto_in_d_bits_denied(tl2axi4_auto_in_d_bits_denied),
    .auto_in_d_bits_data(tl2axi4_auto_in_d_bits_data),
    .auto_in_d_bits_corrupt(tl2axi4_auto_in_d_bits_corrupt),
    .auto_out_aw_ready(tl2axi4_auto_out_aw_ready),
    .auto_out_aw_valid(tl2axi4_auto_out_aw_valid),
    .auto_out_aw_bits_id(tl2axi4_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(tl2axi4_auto_out_aw_bits_addr),
    .auto_out_aw_bits_len(tl2axi4_auto_out_aw_bits_len),
    .auto_out_aw_bits_size(tl2axi4_auto_out_aw_bits_size),
    .auto_out_aw_bits_burst(tl2axi4_auto_out_aw_bits_burst),
    .auto_out_aw_bits_lock(tl2axi4_auto_out_aw_bits_lock),
    .auto_out_aw_bits_cache(tl2axi4_auto_out_aw_bits_cache),
    .auto_out_aw_bits_prot(tl2axi4_auto_out_aw_bits_prot),
    .auto_out_aw_bits_qos(tl2axi4_auto_out_aw_bits_qos),
    .auto_out_aw_bits_echo_tl_state_size(tl2axi4_auto_out_aw_bits_echo_tl_state_size),
    .auto_out_aw_bits_echo_tl_state_source(tl2axi4_auto_out_aw_bits_echo_tl_state_source),
    .auto_out_w_ready(tl2axi4_auto_out_w_ready),
    .auto_out_w_valid(tl2axi4_auto_out_w_valid),
    .auto_out_w_bits_data(tl2axi4_auto_out_w_bits_data),
    .auto_out_w_bits_strb(tl2axi4_auto_out_w_bits_strb),
    .auto_out_w_bits_last(tl2axi4_auto_out_w_bits_last),
    .auto_out_b_ready(tl2axi4_auto_out_b_ready),
    .auto_out_b_valid(tl2axi4_auto_out_b_valid),
    .auto_out_b_bits_id(tl2axi4_auto_out_b_bits_id),
    .auto_out_b_bits_resp(tl2axi4_auto_out_b_bits_resp),
    .auto_out_b_bits_echo_tl_state_size(tl2axi4_auto_out_b_bits_echo_tl_state_size),
    .auto_out_b_bits_echo_tl_state_source(tl2axi4_auto_out_b_bits_echo_tl_state_source),
    .auto_out_ar_ready(tl2axi4_auto_out_ar_ready),
    .auto_out_ar_valid(tl2axi4_auto_out_ar_valid),
    .auto_out_ar_bits_id(tl2axi4_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(tl2axi4_auto_out_ar_bits_addr),
    .auto_out_ar_bits_len(tl2axi4_auto_out_ar_bits_len),
    .auto_out_ar_bits_size(tl2axi4_auto_out_ar_bits_size),
    .auto_out_ar_bits_burst(tl2axi4_auto_out_ar_bits_burst),
    .auto_out_ar_bits_lock(tl2axi4_auto_out_ar_bits_lock),
    .auto_out_ar_bits_cache(tl2axi4_auto_out_ar_bits_cache),
    .auto_out_ar_bits_prot(tl2axi4_auto_out_ar_bits_prot),
    .auto_out_ar_bits_qos(tl2axi4_auto_out_ar_bits_qos),
    .auto_out_ar_bits_echo_tl_state_size(tl2axi4_auto_out_ar_bits_echo_tl_state_size),
    .auto_out_ar_bits_echo_tl_state_source(tl2axi4_auto_out_ar_bits_echo_tl_state_source),
    .auto_out_r_ready(tl2axi4_auto_out_r_ready),
    .auto_out_r_valid(tl2axi4_auto_out_r_valid),
    .auto_out_r_bits_id(tl2axi4_auto_out_r_bits_id),
    .auto_out_r_bits_data(tl2axi4_auto_out_r_bits_data),
    .auto_out_r_bits_resp(tl2axi4_auto_out_r_bits_resp),
    .auto_out_r_bits_echo_tl_state_size(tl2axi4_auto_out_r_bits_echo_tl_state_size),
    .auto_out_r_bits_echo_tl_state_source(tl2axi4_auto_out_r_bits_echo_tl_state_source),
    .auto_out_r_bits_last(tl2axi4_auto_out_r_bits_last)
  );
  TLWidthWidget_6 widget ( // @[WidthWidget.scala 210:28:freechips.rocketchip.system.DefaultRV32Config.fir@75936.4]
    .clock(widget_clock),
    .reset(widget_reset),
    .auto_in_a_ready(widget_auto_in_a_ready),
    .auto_in_a_valid(widget_auto_in_a_valid),
    .auto_in_a_bits_opcode(widget_auto_in_a_bits_opcode),
    .auto_in_a_bits_param(widget_auto_in_a_bits_param),
    .auto_in_a_bits_size(widget_auto_in_a_bits_size),
    .auto_in_a_bits_source(widget_auto_in_a_bits_source),
    .auto_in_a_bits_address(widget_auto_in_a_bits_address),
    .auto_in_a_bits_user_amba_prot_bufferable(widget_auto_in_a_bits_user_amba_prot_bufferable),
    .auto_in_a_bits_user_amba_prot_modifiable(widget_auto_in_a_bits_user_amba_prot_modifiable),
    .auto_in_a_bits_user_amba_prot_readalloc(widget_auto_in_a_bits_user_amba_prot_readalloc),
    .auto_in_a_bits_user_amba_prot_writealloc(widget_auto_in_a_bits_user_amba_prot_writealloc),
    .auto_in_a_bits_user_amba_prot_privileged(widget_auto_in_a_bits_user_amba_prot_privileged),
    .auto_in_a_bits_user_amba_prot_secure(widget_auto_in_a_bits_user_amba_prot_secure),
    .auto_in_a_bits_user_amba_prot_fetch(widget_auto_in_a_bits_user_amba_prot_fetch),
    .auto_in_a_bits_mask(widget_auto_in_a_bits_mask),
    .auto_in_a_bits_data(widget_auto_in_a_bits_data),
    .auto_in_a_bits_corrupt(widget_auto_in_a_bits_corrupt),
    .auto_in_d_ready(widget_auto_in_d_ready),
    .auto_in_d_valid(widget_auto_in_d_valid),
    .auto_in_d_bits_opcode(widget_auto_in_d_bits_opcode),
    .auto_in_d_bits_size(widget_auto_in_d_bits_size),
    .auto_in_d_bits_source(widget_auto_in_d_bits_source),
    .auto_in_d_bits_denied(widget_auto_in_d_bits_denied),
    .auto_in_d_bits_data(widget_auto_in_d_bits_data),
    .auto_in_d_bits_corrupt(widget_auto_in_d_bits_corrupt),
    .auto_out_a_ready(widget_auto_out_a_ready),
    .auto_out_a_valid(widget_auto_out_a_valid),
    .auto_out_a_bits_opcode(widget_auto_out_a_bits_opcode),
    .auto_out_a_bits_param(widget_auto_out_a_bits_param),
    .auto_out_a_bits_size(widget_auto_out_a_bits_size),
    .auto_out_a_bits_source(widget_auto_out_a_bits_source),
    .auto_out_a_bits_address(widget_auto_out_a_bits_address),
    .auto_out_a_bits_user_amba_prot_bufferable(widget_auto_out_a_bits_user_amba_prot_bufferable),
    .auto_out_a_bits_user_amba_prot_modifiable(widget_auto_out_a_bits_user_amba_prot_modifiable),
    .auto_out_a_bits_user_amba_prot_readalloc(widget_auto_out_a_bits_user_amba_prot_readalloc),
    .auto_out_a_bits_user_amba_prot_writealloc(widget_auto_out_a_bits_user_amba_prot_writealloc),
    .auto_out_a_bits_user_amba_prot_privileged(widget_auto_out_a_bits_user_amba_prot_privileged),
    .auto_out_a_bits_user_amba_prot_secure(widget_auto_out_a_bits_user_amba_prot_secure),
    .auto_out_a_bits_user_amba_prot_fetch(widget_auto_out_a_bits_user_amba_prot_fetch),
    .auto_out_a_bits_mask(widget_auto_out_a_bits_mask),
    .auto_out_a_bits_data(widget_auto_out_a_bits_data),
    .auto_out_a_bits_corrupt(widget_auto_out_a_bits_corrupt),
    .auto_out_d_ready(widget_auto_out_d_ready),
    .auto_out_d_valid(widget_auto_out_d_valid),
    .auto_out_d_bits_opcode(widget_auto_out_d_bits_opcode),
    .auto_out_d_bits_size(widget_auto_out_d_bits_size),
    .auto_out_d_bits_source(widget_auto_out_d_bits_source),
    .auto_out_d_bits_denied(widget_auto_out_d_bits_denied),
    .auto_out_d_bits_data(widget_auto_out_d_bits_data),
    .auto_out_d_bits_corrupt(widget_auto_out_d_bits_corrupt)
  );
  assign auto_widget_in_a_ready = widget_auto_in_a_ready; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_valid = widget_auto_in_d_valid; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_opcode = widget_auto_in_d_bits_opcode; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_size = widget_auto_in_d_bits_size; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_source = widget_auto_in_d_bits_source; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_denied = widget_auto_in_d_bits_denied; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_data = widget_auto_in_d_bits_data; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_widget_in_d_bits_corrupt = widget_auto_in_d_bits_corrupt; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign auto_axi4yank_out_aw_valid = axi4yank_auto_out_aw_valid; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_id = axi4yank_auto_out_aw_bits_id; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_addr = axi4yank_auto_out_aw_bits_addr; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_len = axi4yank_auto_out_aw_bits_len; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_size = axi4yank_auto_out_aw_bits_size; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_burst = axi4yank_auto_out_aw_bits_burst; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_lock = axi4yank_auto_out_aw_bits_lock; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_cache = axi4yank_auto_out_aw_bits_cache; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_prot = axi4yank_auto_out_aw_bits_prot; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_aw_bits_qos = axi4yank_auto_out_aw_bits_qos; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_w_valid = axi4yank_auto_out_w_valid; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_w_bits_data = axi4yank_auto_out_w_bits_data; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_w_bits_strb = axi4yank_auto_out_w_bits_strb; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_w_bits_last = axi4yank_auto_out_w_bits_last; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_b_ready = axi4yank_auto_out_b_ready; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_valid = axi4yank_auto_out_ar_valid; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_id = axi4yank_auto_out_ar_bits_id; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_addr = axi4yank_auto_out_ar_bits_addr; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_len = axi4yank_auto_out_ar_bits_len; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_size = axi4yank_auto_out_ar_bits_size; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_burst = axi4yank_auto_out_ar_bits_burst; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_lock = axi4yank_auto_out_ar_bits_lock; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_cache = axi4yank_auto_out_ar_bits_cache; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_prot = axi4yank_auto_out_ar_bits_prot; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_ar_bits_qos = axi4yank_auto_out_ar_bits_qos; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign auto_axi4yank_out_r_ready = axi4yank_auto_out_r_ready; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_clock = clock; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75922.4]
  assign axi4yank_reset = reset; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75923.4]
  assign axi4yank_auto_in_aw_valid = axi4index_auto_out_aw_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_id = axi4index_auto_out_aw_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_addr = axi4index_auto_out_aw_bits_addr; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_len = axi4index_auto_out_aw_bits_len; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_size = axi4index_auto_out_aw_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_burst = axi4index_auto_out_aw_bits_burst; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_lock = axi4index_auto_out_aw_bits_lock; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_cache = axi4index_auto_out_aw_bits_cache; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_prot = axi4index_auto_out_aw_bits_prot; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_qos = axi4index_auto_out_aw_bits_qos; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_echo_tl_state_size = axi4index_auto_out_aw_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_aw_bits_echo_tl_state_source = axi4index_auto_out_aw_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_w_valid = axi4index_auto_out_w_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_w_bits_data = axi4index_auto_out_w_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_w_bits_strb = axi4index_auto_out_w_bits_strb; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_w_bits_last = axi4index_auto_out_w_bits_last; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_b_ready = axi4index_auto_out_b_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_valid = axi4index_auto_out_ar_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_id = axi4index_auto_out_ar_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_addr = axi4index_auto_out_ar_bits_addr; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_len = axi4index_auto_out_ar_bits_len; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_size = axi4index_auto_out_ar_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_burst = axi4index_auto_out_ar_bits_burst; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_lock = axi4index_auto_out_ar_bits_lock; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_cache = axi4index_auto_out_ar_bits_cache; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_prot = axi4index_auto_out_ar_bits_prot; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_qos = axi4index_auto_out_ar_bits_qos; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_echo_tl_state_size = axi4index_auto_out_ar_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_ar_bits_echo_tl_state_source = axi4index_auto_out_ar_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_in_r_ready = axi4index_auto_out_r_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4yank_auto_out_aw_ready = auto_axi4yank_out_aw_ready; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_w_ready = auto_axi4yank_out_w_ready; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_b_valid = auto_axi4yank_out_b_valid; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_b_bits_id = auto_axi4yank_out_b_bits_id; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_b_bits_resp = auto_axi4yank_out_b_bits_resp; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_ar_ready = auto_axi4yank_out_ar_ready; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_r_valid = auto_axi4yank_out_r_valid; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_r_bits_id = auto_axi4yank_out_r_bits_id; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_r_bits_data = auto_axi4yank_out_r_bits_data; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_r_bits_resp = auto_axi4yank_out_r_bits_resp; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4yank_auto_out_r_bits_last = auto_axi4yank_out_r_bits_last; // @[LazyModule.scala 305:12:freechips.rocketchip.system.DefaultRV32Config.fir@75945.4]
  assign axi4index_auto_in_aw_valid = tl2axi4_auto_out_aw_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_id = tl2axi4_auto_out_aw_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_addr = tl2axi4_auto_out_aw_bits_addr; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_len = tl2axi4_auto_out_aw_bits_len; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_size = tl2axi4_auto_out_aw_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_burst = tl2axi4_auto_out_aw_bits_burst; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_lock = tl2axi4_auto_out_aw_bits_lock; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_cache = tl2axi4_auto_out_aw_bits_cache; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_prot = tl2axi4_auto_out_aw_bits_prot; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_qos = tl2axi4_auto_out_aw_bits_qos; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_echo_tl_state_size = tl2axi4_auto_out_aw_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_aw_bits_echo_tl_state_source = tl2axi4_auto_out_aw_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_w_valid = tl2axi4_auto_out_w_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_w_bits_data = tl2axi4_auto_out_w_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_w_bits_strb = tl2axi4_auto_out_w_bits_strb; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_w_bits_last = tl2axi4_auto_out_w_bits_last; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_b_ready = tl2axi4_auto_out_b_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_valid = tl2axi4_auto_out_ar_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_id = tl2axi4_auto_out_ar_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_addr = tl2axi4_auto_out_ar_bits_addr; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_len = tl2axi4_auto_out_ar_bits_len; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_size = tl2axi4_auto_out_ar_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_burst = tl2axi4_auto_out_ar_bits_burst; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_lock = tl2axi4_auto_out_ar_bits_lock; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_cache = tl2axi4_auto_out_ar_bits_cache; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_prot = tl2axi4_auto_out_ar_bits_prot; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_qos = tl2axi4_auto_out_ar_bits_qos; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_echo_tl_state_size = tl2axi4_auto_out_ar_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_ar_bits_echo_tl_state_source = tl2axi4_auto_out_ar_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_in_r_ready = tl2axi4_auto_out_r_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign axi4index_auto_out_aw_ready = axi4yank_auto_in_aw_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_w_ready = axi4yank_auto_in_w_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_b_valid = axi4yank_auto_in_b_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_b_bits_id = axi4yank_auto_in_b_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_b_bits_resp = axi4yank_auto_in_b_bits_resp; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_b_bits_echo_tl_state_size = axi4yank_auto_in_b_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_b_bits_echo_tl_state_source = axi4yank_auto_in_b_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_ar_ready = axi4yank_auto_in_ar_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_valid = axi4yank_auto_in_r_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_id = axi4yank_auto_in_r_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_data = axi4yank_auto_in_r_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_resp = axi4yank_auto_in_r_bits_resp; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_echo_tl_state_size = axi4yank_auto_in_r_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_echo_tl_state_source = axi4yank_auto_in_r_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign axi4index_auto_out_r_bits_last = axi4yank_auto_in_r_bits_last; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75942.4]
  assign tl2axi4_clock = clock; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75934.4]
  assign tl2axi4_reset = reset; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75935.4]
  assign tl2axi4_auto_in_a_valid = widget_auto_out_a_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_opcode = widget_auto_out_a_bits_opcode; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_param = widget_auto_out_a_bits_param; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_size = widget_auto_out_a_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_source = widget_auto_out_a_bits_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_address = widget_auto_out_a_bits_address; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_bufferable = widget_auto_out_a_bits_user_amba_prot_bufferable; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_modifiable = widget_auto_out_a_bits_user_amba_prot_modifiable; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_readalloc = widget_auto_out_a_bits_user_amba_prot_readalloc; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_writealloc = widget_auto_out_a_bits_user_amba_prot_writealloc; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_privileged = widget_auto_out_a_bits_user_amba_prot_privileged; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_secure = widget_auto_out_a_bits_user_amba_prot_secure; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_user_amba_prot_fetch = widget_auto_out_a_bits_user_amba_prot_fetch; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_mask = widget_auto_out_a_bits_mask; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_data = widget_auto_out_a_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_a_bits_corrupt = widget_auto_out_a_bits_corrupt; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_in_d_ready = widget_auto_out_d_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign tl2axi4_auto_out_aw_ready = axi4index_auto_in_aw_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_w_ready = axi4index_auto_in_w_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_b_valid = axi4index_auto_in_b_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_b_bits_id = axi4index_auto_in_b_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_b_bits_resp = axi4index_auto_in_b_bits_resp; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_b_bits_echo_tl_state_size = axi4index_auto_in_b_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_b_bits_echo_tl_state_source = axi4index_auto_in_b_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_ar_ready = axi4index_auto_in_ar_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_valid = axi4index_auto_in_r_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_id = axi4index_auto_in_r_bits_id; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_data = axi4index_auto_in_r_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_resp = axi4index_auto_in_r_bits_resp; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_echo_tl_state_size = axi4index_auto_in_r_bits_echo_tl_state_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_echo_tl_state_source = axi4index_auto_in_r_bits_echo_tl_state_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign tl2axi4_auto_out_r_bits_last = axi4index_auto_in_r_bits_last; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75943.4]
  assign widget_clock = clock; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75940.4]
  assign widget_reset = reset; // @[:freechips.rocketchip.system.DefaultRV32Config.fir@75941.4]
  assign widget_auto_in_a_valid = auto_widget_in_a_valid; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_opcode = auto_widget_in_a_bits_opcode; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_param = auto_widget_in_a_bits_param; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_size = auto_widget_in_a_bits_size; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_source = auto_widget_in_a_bits_source; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_address = auto_widget_in_a_bits_address; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_bufferable = auto_widget_in_a_bits_user_amba_prot_bufferable; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_modifiable = auto_widget_in_a_bits_user_amba_prot_modifiable; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_readalloc = auto_widget_in_a_bits_user_amba_prot_readalloc; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_writealloc = auto_widget_in_a_bits_user_amba_prot_writealloc; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_privileged = auto_widget_in_a_bits_user_amba_prot_privileged; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_secure = auto_widget_in_a_bits_user_amba_prot_secure; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_user_amba_prot_fetch = auto_widget_in_a_bits_user_amba_prot_fetch; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_mask = auto_widget_in_a_bits_mask; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_data = auto_widget_in_a_bits_data; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_a_bits_corrupt = auto_widget_in_a_bits_corrupt; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_in_d_ready = auto_widget_in_d_ready; // @[LazyModule.scala 303:16:freechips.rocketchip.system.DefaultRV32Config.fir@75946.4]
  assign widget_auto_out_a_ready = tl2axi4_auto_in_a_ready; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_valid = tl2axi4_auto_in_d_valid; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_opcode = tl2axi4_auto_in_d_bits_opcode; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_size = tl2axi4_auto_in_d_bits_size; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_source = tl2axi4_auto_in_d_bits_source; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_denied = tl2axi4_auto_in_d_bits_denied; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_data = tl2axi4_auto_in_d_bits_data; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
  assign widget_auto_out_d_bits_corrupt = tl2axi4_auto_in_d_bits_corrupt; // @[LazyModule.scala 290:16:freechips.rocketchip.system.DefaultRV32Config.fir@75944.4]
endmodule

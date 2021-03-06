

module aes_top
(
  clk,
  rst,
  wr,
  addr,
  data_in,
  data_out,
  ack,
  stb,
  xram_addr,
  xram_data_out,
  xram_stb,
  xram_wr,
  pc,
  aes_state,
  aes_addr,
  aes_len,
  aes_ctr,
  aes_key0,
  aes_step
);

reg [7:0] xram [0:65535]/*verilator public*/;
reg [7:0] xram_data_in /*verilator public*/;
reg xram_ack /*verilator public*/;

  always @(posedge clk) begin
    if(xram_wr && xram_stb) begin
      xram[xram_addr] <= xram_data_out;
    end 
  end


  always @(posedge clk) begin
    if(!xram_wr && xram_stb) begin
      xram_data_in <= xram[xram_addr];
    end 
  end


  always @(posedge clk) begin
    if(xram_stb & !xram_ack) xram_ack <= 1; 
    else xram_ack <= 0;
  end

  input clk;input wr;input stb;input rst;
  input [7:0] data_in;
  input [15:0] addr;
  output [7:0] data_out;
  output ack;
  output [31:0] pc;
  output [15:0] xram_addr /*verilator public*/;
  output [7:0] xram_data_out /*verilator public*/;
  output xram_stb /*verilator public*/;
  output xram_wr /*verilator public*/;
  output [1:0] aes_state;
  output [15:0] aes_addr;output [15:0] aes_len;
  output [127:0] aes_ctr;output [127:0] aes_key0;
  output aes_step;
  localparam AES_ADDR_START = 16'hff00;
  localparam AES_REG_START = 16'hff00;
  localparam AES_REG_STATE = 16'hff01;
  localparam AES_REG_ADDR = 37282;
  localparam AES_REG_LEN = 16'hff04;
  localparam AES_REG_KEY0 = 16'hff10;
  localparam AES_REG_CTR = 16'hff20;
  localparam AES_ADDR_END = 16'hff30;
  localparam AES_STATE_IDLE = 2'd0;
  localparam AES_STATE_READ_DATA = 2'd1;
  localparam AES_STATE_OPERATE = 2'd2;
  localparam AES_STATE_WRITE_DATA = 2'd3;
  wire in_addr_range;assign in_addr_range = (addr >= AES_ADDR_START) && (addr < AES_ADDR_END);
  wire ack;assign ack = stb && in_addr_range;
  wire sel_reg_start;assign sel_reg_start = addr == AES_REG_START;
  wire sel_reg_state;assign sel_reg_state = addr == AES_REG_STATE;
  wire sel_reg_addr;assign sel_reg_addr = { addr[15:1], 1'b0 } == AES_REG_ADDR;
  wire sel_reg_len;assign sel_reg_len = { addr[15:1], 1'b0 } == AES_REG_LEN;
  wire sel_reg_ctr;assign sel_reg_ctr = { addr[15:4], 4'b0 } == AES_REG_CTR;
  wire sel_reg_key0;assign sel_reg_key0 = { addr[15:4], 4'b0 } == AES_REG_KEY0;
  reg [1:0]  aes_reg_state/*verilator public*/;
  wire [1:0] aes_state;assign aes_state = aes_reg_state;
  wire [7:0] data_out;assign data_out = (sel_reg_state)? { 6'b0, aes_reg_state } : 
                    (sel_reg_addr)? aes_addr_dataout : 
                    (sel_reg_len)? aes_len_dataout : 
                    (sel_reg_ctr)? aes_ctr_dataout : 
                    (sel_reg_key0)? aes_key0_dataout : 8'd0;
  wire aes_state_idle;assign aes_state_idle = aes_reg_state == AES_STATE_IDLE;
  wire aes_state_read_data;assign aes_state_read_data = aes_reg_state == AES_STATE_READ_DATA;
  wire aes_state_operate;assign aes_state_operate = aes_reg_state == AES_STATE_OPERATE;
  wire aes_state_write_data;assign aes_state_write_data = aes_reg_state == AES_STATE_WRITE_DATA;
  wire wren;assign wren = wr && aes_state_idle;
  wire start_op;assign start_op = sel_reg_start && data_in[0] && wren;
  wire [15:0] aes_reg_opaddr;
  wire [7:0] aes_addr_dataout;

  reg2byte
  aes_reg_opaddr_i
  (
    .clk(clk),
    .rst(rst),
    .en(sel_reg_addr),
    .wr(sel_reg_addr && wren),
    .addr(addr[0]),
    .data_in(data_in),
    .data_out(aes_addr_dataout),
    .reg_out(aes_reg_opaddr)
  );

  wire [15:0] aes_reg_oplen;
  wire [7:0] aes_len_dataout;

  reg2byte
  aes_reg_oplen_i
  (
    .clk(clk),
    .rst(rst),
    .en(sel_reg_len),
    .wr(sel_reg_len && wren),
    .addr(addr[0]),
    .data_in(data_in),
    .data_out(aes_len_dataout),
    .reg_out(aes_reg_oplen)
  );

  wire [15:0] aes_addr;assign aes_addr = aes_reg_opaddr;
  wire [15:0] aes_len;assign aes_len = aes_reg_oplen;
  wire [127:0] aes_reg_ctr;
  wire [7:0] aes_ctr_dataout;

  reg16byte
  aes_reg_ctr_i
  (
    .clk(clk),
    .rst(rst),
    .en(sel_reg_ctr),
    .wr(sel_reg_ctr && wren),
    .addr(addr[3:0]),
    .data_in(data_in),
    .data_out(aes_ctr_dataout),
    .reg_out(aes_reg_ctr)
  );

  wire [127:0] aes_reg_key0;
  wire [7:0] aes_key0_dataout;

  reg16byte
  aes_reg_key0_i
  (
    .clk(clk),
    .rst(rst),
    .en(sel_reg_key0),
    .wr(sel_reg_key0 && wren),
    .addr(addr[3:0]),
    .data_in(data_in),
    .data_out(aes_key0_dataout),
    .reg_out(aes_reg_key0)
  );

  wire [127:0] aes_ctr;assign aes_ctr = aes_reg_ctr;
  wire [127:0] aes_key0;assign aes_key0 = aes_reg_key0;
  reg [15:0] operated_bytes_count;
  wire [15:0] operated_bytes_count_next;
  assign operated_bytes_count_next = (start_op)? 0 : 
                                     (last_byte_acked && aes_state_write_data)? operated_bytes_count + 16 : operated_bytes_count;
  reg [15:0] block_counter;
  wire [15:0] block_counter_next;assign block_counter_next = (start_op)? 0 : 
                              (more_blocks)? block_counter + 16 : block_counter;
  reg [3:0] byte_counter /*verilator public*/;
  wire reset_byte_counter;assign reset_byte_counter = start_op;
  wire incr_byte_counter;assign incr_byte_counter = xram_ack;
  wire [3:0] byte_counter_next;assign byte_counter_next = (reset_byte_counter)? 0 : 
                             (incr_byte_counter)? byte_counter + 1 : byte_counter;
  wire last_byte_acked;assign last_byte_acked = (byte_counter == 15) && xram_ack;
  wire more_blocks;assign more_blocks = last_byte_acked && aes_state_write_data && (operated_bytes_count_next < aes_reg_oplen);
  wire [15:0] xram_addr;assign xram_addr = aes_reg_opaddr + block_counter + { 12'b0, byte_counter };
  wire xram_stb;assign xram_stb = aes_state_read_data || aes_state_write_data;
  wire xram_wr;assign xram_wr = aes_state_write_data;
  wire [1:0] aes_reg_state_next_idle;assign aes_reg_state_next_idle = (start_op)? AES_STATE_READ_DATA : AES_STATE_IDLE;
  wire [1:0] aes_reg_state_next_read_data;assign aes_reg_state_next_read_data = (last_byte_acked)? AES_STATE_OPERATE : AES_STATE_READ_DATA;
  wire [1:0] aes_reg_state_next_operate;assign aes_reg_state_next_operate = (aes_time_enough)? AES_STATE_WRITE_DATA : AES_STATE_OPERATE;
  wire [1:0] aes_reg_state_next_write_data;assign aes_reg_state_next_write_data = (last_byte_acked && more_blocks)? AES_STATE_READ_DATA : 
                                         (last_byte_acked)? AES_STATE_IDLE : AES_STATE_WRITE_DATA;
  wire [1:0] aes_reg_state_next;assign aes_reg_state_next = (aes_state_idle)? aes_reg_state_next_idle : 
                              (aes_state_read_data)? aes_reg_state_next_read_data : 
                              (aes_state_operate)? aes_reg_state_next_operate : 
                              (aes_state_write_data)? aes_reg_state_next_write_data : AES_STATE_IDLE;
  wire aes_step;assign aes_step = aes_reg_state != aes_reg_state_next;
  reg [127:0] mem_data_buf;
  wire [127:0] mem_data_buf_next;
  assign mem_data_buf_next[7:0] = (xram_ack && (byte_counter == 0))? xram_data_in : mem_data_buf[7:0];
  assign mem_data_buf_next[15:8] = (xram_ack && (byte_counter == 1))? xram_data_in : mem_data_buf[15:8];
  assign mem_data_buf_next[23:16] = (xram_ack && (byte_counter == 2))? xram_data_in : mem_data_buf[23:16];
  assign mem_data_buf_next[31:24] = (xram_ack && (byte_counter == 3))? xram_data_in : mem_data_buf[31:24];
  assign mem_data_buf_next[39:32] = (xram_ack && (byte_counter == 4))? xram_data_in : mem_data_buf[39:32];
  assign mem_data_buf_next[47:40] = (xram_ack && (byte_counter == 5))? xram_data_in : mem_data_buf[47:40];
  assign mem_data_buf_next[55:48] = (xram_ack && (byte_counter == 6))? xram_data_in : mem_data_buf[55:48];
  assign mem_data_buf_next[63:56] = (xram_ack && (byte_counter == 7))? xram_data_in : mem_data_buf[63:56];
  assign mem_data_buf_next[71:64] = (xram_ack && (byte_counter == 8))? xram_data_in : mem_data_buf[71:64];
  assign mem_data_buf_next[79:72] = (xram_ack && (byte_counter == 9))? xram_data_in : mem_data_buf[79:72];
  assign mem_data_buf_next[87:80] = (xram_ack && (byte_counter == 10))? xram_data_in : mem_data_buf[87:80];
  assign mem_data_buf_next[95:88] = (xram_ack && (byte_counter == 11))? xram_data_in : mem_data_buf[95:88];
  assign mem_data_buf_next[103:96] = (xram_ack && (byte_counter == 12))? xram_data_in : mem_data_buf[103:96];
  assign mem_data_buf_next[111:104] = (xram_ack && (byte_counter == 13))? xram_data_in : mem_data_buf[111:104];
  assign mem_data_buf_next[119:112] = (xram_ack && (byte_counter == 14))? xram_data_in : mem_data_buf[119:112];
  assign mem_data_buf_next[127:120] = (xram_ack && (byte_counter == 15))? xram_data_in : mem_data_buf[127:120];
  reg [127:0] uaes_ctr;
  wire [127:0] uaes_ctr_nxt;
  assign uaes_ctr_nxt = (start_op)? aes_reg_ctr : 
                        (more_blocks)? uaes_ctr + 128'd16 : uaes_ctr;

  always @(posedge clk) begin
    if(rst) uaes_ctr <= 0; 
    else uaes_ctr <= uaes_ctr_nxt;
  end

  reg [4:0] aes_time_counter;
  wire [4:0] aes_time_counter_next;
  wire aes_time_enough;
  assign aes_time_counter_next = (more_blocks || start_op)? 5'd0 : 
                                 (aes_time_counter < 5'd31)? aes_time_counter + 5'd1 : aes_time_counter;

  always @(posedge clk) begin
    if(rst) aes_time_counter <= 0; 
    else begin
      aes_time_counter <= aes_time_counter_next;
    end
  end

  assign aes_time_enough = aes_time_counter >= 5'd10;
  wire [127:0] aes_out /*verilator public*/;
  wire [127:0] encrypted_data /*verilator public*/;
  assign encrypted_data = aes_out ^ mem_data_buf;
  wire [127:0] aes_curr_key;
  assign aes_curr_key = aes_reg_key0;

  aes_128
  aes_128_i
  (
    .clk(clk),
    .state(uaes_ctr),
    .key(aes_curr_key),
    .out(aes_out)
  );

  reg [127:0] encrypted_data_buf;
  wire [127:0] encrypted_data_buf_next;assign encrypted_data_buf_next = (aes_state_operate)? encrypted_data : encrypted_data_buf;
  wire [7:0] xram_data_out;
  assign xram_data_out = (byte_counter == 0)? encrypted_data_buf[7:0] : 
                         (byte_counter == 1)? encrypted_data_buf[15:8] : 
                         (byte_counter == 2)? encrypted_data_buf[23:16] : 
                         (byte_counter == 3)? encrypted_data_buf[31:24] : 
                         (byte_counter == 4)? encrypted_data_buf[39:32] : 
                         (byte_counter == 5)? encrypted_data_buf[47:40] : 
                         (byte_counter == 6)? encrypted_data_buf[55:48] : 
                         (byte_counter == 7)? encrypted_data_buf[63:56] : 
                         (byte_counter == 8)? encrypted_data_buf[71:64] : 
                         (byte_counter == 9)? encrypted_data_buf[79:72] : 
                         (byte_counter == 10)? encrypted_data_buf[87:80] : 
                         (byte_counter == 11)? encrypted_data_buf[95:88] : 
                         (byte_counter == 12)? encrypted_data_buf[103:96] : 
                         (byte_counter == 13)? encrypted_data_buf[111:104] : 
                         (byte_counter == 14)? encrypted_data_buf[119:112] : encrypted_data_buf[127:120];

  always @(posedge clk) begin
    if(rst) begin
      aes_reg_state <= AES_STATE_IDLE;
      block_counter <= 0;
      byte_counter <= 0;
      operated_bytes_count <= 0;
    end else begin
      block_counter <= block_counter_next;
      byte_counter <= byte_counter_next;
      aes_reg_state <= aes_reg_state_next;
      mem_data_buf <= mem_data_buf_next;
      encrypted_data_buf <= encrypted_data_buf_next;
      operated_bytes_count <= operated_bytes_count_next;
    end
  end

  reg [7:0] data_out_reg /*verilator public*/;

  always @(posedge clk) begin
    data_out_reg <= data_out;
  end

  reg xram_ack_delay_1 /*verilator public*/;

  always @(posedge clk) begin
    xram_ack_delay_1 <= xram_ack;
  end

  reg [31:0] pc /*verilator public*/;

  always @(posedge clk) begin
    if(rst) begin
      pc <= 0;
    end else if(in_addr_range && (!wr || (aes_reg_state == AES_STATE_IDLE))) begin
      pc <= pc + 1;
    end 
  end


endmodule



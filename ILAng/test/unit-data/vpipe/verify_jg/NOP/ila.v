module simplePipe__DOT__NOP(
__START__,
clk,
inst,
rst,
__ILA_simplePipe_decode_of_NOP__,
__ILA_simplePipe_valid__,
r0,
r1,
r2,
r3,
__COUNTER_start__n3
);
input            __START__;
input            clk;
input      [7:0] inst;
input            rst;
output            __ILA_simplePipe_decode_of_NOP__;
output            __ILA_simplePipe_valid__;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] __COUNTER_start__n3;
wire            __ILA_simplePipe_decode_of_NOP__;
wire            __ILA_simplePipe_valid__;
wire            __START__;
wire      [1:0] bv_2_0_n1;
wire            clk;
wire      [7:0] inst;
wire      [1:0] n0;
wire            n2;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
wire            rst;
assign __ILA_simplePipe_valid__ = 1'b1 ;
assign n0 = inst[7:6] ;
assign bv_2_0_n1 = 2'h0 ;
assign n2 =  ( n0 ) == ( bv_2_0_n1 )  ;
assign __ILA_simplePipe_decode_of_NOP__ = n2 ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       __COUNTER_start__n3 <= 0;
   end
   else if(__START__ && __ILA_simplePipe_valid__) begin
       if ( __ILA_simplePipe_decode_of_NOP__ ) begin 
           __COUNTER_start__n3 <= 1; end
       else if( (__COUNTER_start__n3 >= 1 ) && ( __COUNTER_start__n3 < 255 )) begin
           __COUNTER_start__n3 <= __COUNTER_start__n3 + 1; end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r0 <= r0 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r1 <= r1 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r2 <= r2 ;
       end
       if (__ILA_simplePipe_decode_of_NOP__) begin
           r3 <= r3 ;
       end
   end
end
endmodule

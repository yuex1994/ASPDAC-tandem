module simplePipe__DOT__ADD(
__START__,
clk,
inst,
rst,
__ILA_simplePipe_decode_of_ADD__,
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
output            __ILA_simplePipe_decode_of_ADD__;
output            __ILA_simplePipe_valid__;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] __COUNTER_start__n3;
wire            __ILA_simplePipe_decode_of_ADD__;
wire            __ILA_simplePipe_valid__;
wire            __START__;
wire      [1:0] bv_2_0_n5;
wire      [1:0] bv_2_1_n1;
wire      [1:0] bv_2_2_n10;
wire      [1:0] bv_2_3_n28;
wire            clk;
wire      [7:0] inst;
wire      [1:0] n0;
wire            n11;
wire      [7:0] n12;
wire      [7:0] n13;
wire      [7:0] n14;
wire      [1:0] n15;
wire            n16;
wire            n17;
wire            n18;
wire      [7:0] n19;
wire            n2;
wire      [7:0] n20;
wire      [7:0] n21;
wire      [7:0] n22;
wire      [7:0] n23;
wire            n24;
wire      [7:0] n25;
wire            n26;
wire      [7:0] n27;
wire            n29;
wire      [7:0] n30;
wire      [1:0] n4;
wire            n6;
wire      [1:0] n7;
wire            n8;
wire            n9;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
wire            rst;
assign __ILA_simplePipe_valid__ = 1'b1 ;
assign n0 = inst[7:6] ;
assign bv_2_1_n1 = 2'h1 ;
assign n2 =  ( n0 ) == ( bv_2_1_n1 )  ;
assign __ILA_simplePipe_decode_of_ADD__ = n2 ;
assign n4 = inst[1:0] ;
assign bv_2_0_n5 = 2'h0 ;
assign n6 =  ( n4 ) == ( bv_2_0_n5 )  ;
assign n7 = inst[5:4] ;
assign n8 =  ( n7 ) == ( bv_2_0_n5 )  ;
assign n9 =  ( n7 ) == ( bv_2_1_n1 )  ;
assign bv_2_2_n10 = 2'h2 ;
assign n11 =  ( n7 ) == ( bv_2_2_n10 )  ;
assign n12 =  ( n11 ) ? ( r2 ) : ( r3 ) ;
assign n13 =  ( n9 ) ? ( r1 ) : ( n12 ) ;
assign n14 =  ( n8 ) ? ( r0 ) : ( n13 ) ;
assign n15 = inst[3:2] ;
assign n16 =  ( n15 ) == ( bv_2_0_n5 )  ;
assign n17 =  ( n15 ) == ( bv_2_1_n1 )  ;
assign n18 =  ( n15 ) == ( bv_2_2_n10 )  ;
assign n19 =  ( n18 ) ? ( r2 ) : ( r3 ) ;
assign n20 =  ( n17 ) ? ( r1 ) : ( n19 ) ;
assign n21 =  ( n16 ) ? ( r0 ) : ( n20 ) ;
assign n22 =  ( n14 ) + ( n21 )  ;
assign n23 =  ( n6 ) ? ( n22 ) : ( r0 ) ;
assign n24 =  ( n4 ) == ( bv_2_1_n1 )  ;
assign n25 =  ( n24 ) ? ( n22 ) : ( r1 ) ;
assign n26 =  ( n4 ) == ( bv_2_2_n10 )  ;
assign n27 =  ( n26 ) ? ( n22 ) : ( r2 ) ;
assign bv_2_3_n28 = 2'h3 ;
assign n29 =  ( n4 ) == ( bv_2_3_n28 )  ;
assign n30 =  ( n29 ) ? ( n22 ) : ( r3 ) ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       __COUNTER_start__n3 <= 0;
   end
   else if(__START__ && __ILA_simplePipe_valid__) begin
       if ( __ILA_simplePipe_decode_of_ADD__ ) begin 
           __COUNTER_start__n3 <= 1; end
       else if( (__COUNTER_start__n3 >= 1 ) && ( __COUNTER_start__n3 < 255 )) begin
           __COUNTER_start__n3 <= __COUNTER_start__n3 + 1; end
       if (__ILA_simplePipe_decode_of_ADD__) begin
           r0 <= n23 ;
       end
       if (__ILA_simplePipe_decode_of_ADD__) begin
           r1 <= n25 ;
       end
       if (__ILA_simplePipe_decode_of_ADD__) begin
           r2 <= n27 ;
       end
       if (__ILA_simplePipe_decode_of_ADD__) begin
           r3 <= n30 ;
       end
   end
end
endmodule

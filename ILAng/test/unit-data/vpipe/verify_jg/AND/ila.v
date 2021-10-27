module simplePipe__DOT__AND(
__START__,
clk,
inst,
rst,
__ILA_simplePipe_decode_of_AND__,
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
output            __ILA_simplePipe_decode_of_AND__;
output            __ILA_simplePipe_valid__;
output reg      [7:0] r0;
output reg      [7:0] r1;
output reg      [7:0] r2;
output reg      [7:0] r3;
output reg      [7:0] __COUNTER_start__n3;
wire            __ILA_simplePipe_decode_of_AND__;
wire            __ILA_simplePipe_valid__;
wire            __START__;
wire      [1:0] bv_2_0_n5;
wire      [1:0] bv_2_1_n9;
wire      [1:0] bv_2_2_n11;
wire      [1:0] bv_2_3_n1;
wire            clk;
wire      [7:0] inst;
wire      [1:0] n0;
wire            n10;
wire            n12;
wire      [7:0] n13;
wire      [7:0] n14;
wire      [7:0] n15;
wire      [1:0] n16;
wire            n17;
wire            n18;
wire            n19;
wire            n2;
wire      [7:0] n20;
wire      [7:0] n21;
wire      [7:0] n22;
wire      [7:0] n23;
wire      [7:0] n24;
wire            n25;
wire      [7:0] n26;
wire            n27;
wire      [7:0] n28;
wire            n29;
wire      [7:0] n30;
wire      [1:0] n4;
wire            n6;
wire      [1:0] n7;
wire            n8;
(* keep *) wire      [7:0] r0_randinit;
(* keep *) wire      [7:0] r1_randinit;
(* keep *) wire      [7:0] r2_randinit;
(* keep *) wire      [7:0] r3_randinit;
wire            rst;
assign __ILA_simplePipe_valid__ = 1'b1 ;
assign n0 = inst[7:6] ;
assign bv_2_3_n1 = 2'h3 ;
assign n2 =  ( n0 ) == ( bv_2_3_n1 )  ;
assign __ILA_simplePipe_decode_of_AND__ = n2 ;
assign n4 = inst[1:0] ;
assign bv_2_0_n5 = 2'h0 ;
assign n6 =  ( n4 ) == ( bv_2_0_n5 )  ;
assign n7 = inst[5:4] ;
assign n8 =  ( n7 ) == ( bv_2_0_n5 )  ;
assign bv_2_1_n9 = 2'h1 ;
assign n10 =  ( n7 ) == ( bv_2_1_n9 )  ;
assign bv_2_2_n11 = 2'h2 ;
assign n12 =  ( n7 ) == ( bv_2_2_n11 )  ;
assign n13 =  ( n12 ) ? ( r2 ) : ( r3 ) ;
assign n14 =  ( n10 ) ? ( r1 ) : ( n13 ) ;
assign n15 =  ( n8 ) ? ( r0 ) : ( n14 ) ;
assign n16 = inst[3:2] ;
assign n17 =  ( n16 ) == ( bv_2_0_n5 )  ;
assign n18 =  ( n16 ) == ( bv_2_1_n9 )  ;
assign n19 =  ( n16 ) == ( bv_2_2_n11 )  ;
assign n20 =  ( n19 ) ? ( r2 ) : ( r3 ) ;
assign n21 =  ( n18 ) ? ( r1 ) : ( n20 ) ;
assign n22 =  ( n17 ) ? ( r0 ) : ( n21 ) ;
assign n23 =  ( n15 ) & ( n22 )  ;
assign n24 =  ( n6 ) ? ( n23 ) : ( r0 ) ;
assign n25 =  ( n4 ) == ( bv_2_1_n9 )  ;
assign n26 =  ( n25 ) ? ( n23 ) : ( r1 ) ;
assign n27 =  ( n4 ) == ( bv_2_2_n11 )  ;
assign n28 =  ( n27 ) ? ( n23 ) : ( r2 ) ;
assign n29 =  ( n4 ) == ( bv_2_3_n1 )  ;
assign n30 =  ( n29 ) ? ( n23 ) : ( r3 ) ;
always @(posedge clk) begin
   if(rst) begin
       r0 <= r0_randinit ;
       r1 <= r1_randinit ;
       r2 <= r2_randinit ;
       r3 <= r3_randinit ;
       __COUNTER_start__n3 <= 0;
   end
   else if(__START__ && __ILA_simplePipe_valid__) begin
       if ( __ILA_simplePipe_decode_of_AND__ ) begin 
           __COUNTER_start__n3 <= 1; end
       else if( (__COUNTER_start__n3 >= 1 ) && ( __COUNTER_start__n3 < 255 )) begin
           __COUNTER_start__n3 <= __COUNTER_start__n3 + 1; end
       if (__ILA_simplePipe_decode_of_AND__) begin
           r0 <= n24 ;
       end
       if (__ILA_simplePipe_decode_of_AND__) begin
           r1 <= n26 ;
       end
       if (__ILA_simplePipe_decode_of_AND__) begin
           r2 <= n28 ;
       end
       if (__ILA_simplePipe_decode_of_AND__) begin
           r3 <= n30 ;
       end
   end
end
endmodule

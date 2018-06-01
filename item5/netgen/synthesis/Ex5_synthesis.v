////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.49d
//  \   \         Application: netgen
//  /   /         Filename: Ex5_synthesis.v
// /___/   /\     Timestamp: Mon May 22 11:38:59 2017
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim Ex5.ngc Ex5_synthesis.v 
// Device	: xc6slx16-3-csg324
// Input file	: Ex5.ngc
// Output file	: D:\JZ_experiment\Ex5\netgen\synthesis\Ex5_synthesis.v
// # of Modules	: 1
// Design Name	: Ex5
// Xilinx        : D:\Xilinx\14.4\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Ex5 (
  Write, Clk, Add, SW, LED
)/* synthesis syn_black_box syn_noprune=1 */;
  input Write;
  input Clk;
  input [5 : 0] Add;
  input [1 : 0] SW;
  output [7 : 0] LED;
  
  // synthesis translate_off
  
  wire Add_5_IBUF_0;
  wire Add_4_IBUF_1;
  wire Add_3_IBUF_2;
  wire Add_2_IBUF_3;
  wire Add_1_IBUF_4;
  wire Add_0_IBUF_5;
  wire SW_1_IBUF_6;
  wire SW_0_IBUF_7;
  wire Write_IBUF_BUFG_8;
  wire Clk_BUFGP_9;
  wire write_30_42;
  wire write_16_43;
  wire write_0_44;
  wire LED_7_45;
  wire LED_6_46;
  wire LED_5_47;
  wire LED_4_48;
  wire LED_3_49;
  wire LED_2_50;
  wire LED_1_51;
  wire LED_0_52;
  wire write_31_53;
  wire \SW[1]_out[31]_wide_mux_2_OUT<7> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<6> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<5> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<4> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<3> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<2> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<1> ;
  wire \SW[1]_out[31]_wide_mux_2_OUT<0> ;
  wire _n0101;
  wire Write_IBUF_83;
  wire [31 : 0] out;
  wire [3 : 2] _n0096;
  LD   write_16 (
    .D(_n0096[2]),
    .G(Write_IBUF_BUFG_8),
    .Q(write_16_43)
  );
  LD   write_30 (
    .D(SW_0_IBUF_7),
    .G(Write_IBUF_BUFG_8),
    .Q(write_30_42)
  );
  LD   write_0 (
    .D(_n0096[3]),
    .G(Write_IBUF_BUFG_8),
    .Q(write_0_44)
  );
  LD   write_31 (
    .D(_n0101),
    .G(Write_IBUF_BUFG_8),
    .Q(write_31_53)
  );
  LD_1   LED_6 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<6> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_6_46)
  );
  LD_1   LED_7 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<7> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_7_45)
  );
  LD_1   LED_3 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<3> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_3_49)
  );
  LD_1   LED_5 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<5> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_5_47)
  );
  LD_1   LED_4 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<4> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_4_48)
  );
  LD_1   LED_2 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<2> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_2_50)
  );
  LD_1   LED_1 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<1> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_1_51)
  );
  LD_1   LED_0 (
    .D(\SW[1]_out[31]_wide_mux_2_OUT<0> ),
    .G(Write_IBUF_BUFG_8),
    .Q(LED_0_52)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \_n0101<1>1  (
    .I0(SW_1_IBUF_6),
    .I1(SW_0_IBUF_7),
    .O(_n0101)
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \_n0096<2>1  (
    .I0(SW_1_IBUF_6),
    .I1(SW_0_IBUF_7),
    .O(_n0096[2])
  );
  LUT2 #(
    .INIT ( 4'hD ))
  \_n0096<3>1  (
    .I0(SW_1_IBUF_6),
    .I1(SW_0_IBUF_7),
    .O(_n0096[3])
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<0>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[8]),
    .I3(out[24]),
    .I4(out[16]),
    .I5(out[0]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<0> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<1>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[9]),
    .I3(out[25]),
    .I4(out[17]),
    .I5(out[1]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<1> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<2>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[10]),
    .I3(out[26]),
    .I4(out[18]),
    .I5(out[2]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<2> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<3>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[11]),
    .I3(out[27]),
    .I4(out[19]),
    .I5(out[3]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<3> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<4>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[12]),
    .I3(out[28]),
    .I4(out[20]),
    .I5(out[4]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<4> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<5>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[13]),
    .I3(out[29]),
    .I4(out[21]),
    .I5(out[5]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<5> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<6>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[14]),
    .I3(out[30]),
    .I4(out[22]),
    .I5(out[6]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<6> )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \Mmux_SW[1]_out[31]_wide_mux_2_OUT<7>11  (
    .I0(SW_0_IBUF_7),
    .I1(SW_1_IBUF_6),
    .I2(out[15]),
    .I3(out[31]),
    .I4(out[23]),
    .I5(out[7]),
    .O(\SW[1]_out[31]_wide_mux_2_OUT<7> )
  );
  IBUF   Write_IBUF (
    .I(Write),
    .O(Write_IBUF_83)
  );
  IBUF   Add_5_IBUF (
    .I(Add[5]),
    .O(Add_5_IBUF_0)
  );
  IBUF   Add_4_IBUF (
    .I(Add[4]),
    .O(Add_4_IBUF_1)
  );
  IBUF   Add_3_IBUF (
    .I(Add[3]),
    .O(Add_3_IBUF_2)
  );
  IBUF   Add_2_IBUF (
    .I(Add[2]),
    .O(Add_2_IBUF_3)
  );
  IBUF   Add_1_IBUF (
    .I(Add[1]),
    .O(Add_1_IBUF_4)
  );
  IBUF   Add_0_IBUF (
    .I(Add[0]),
    .O(Add_0_IBUF_5)
  );
  IBUF   SW_1_IBUF (
    .I(SW[1]),
    .O(SW_1_IBUF_6)
  );
  IBUF   SW_0_IBUF (
    .I(SW[0]),
    .O(SW_0_IBUF_7)
  );
  OBUF   LED_7_OBUF (
    .I(LED_7_45),
    .O(LED[7])
  );
  OBUF   LED_6_OBUF (
    .I(LED_6_46),
    .O(LED[6])
  );
  OBUF   LED_5_OBUF (
    .I(LED_5_47),
    .O(LED[5])
  );
  OBUF   LED_4_OBUF (
    .I(LED_4_48),
    .O(LED[4])
  );
  OBUF   LED_3_OBUF (
    .I(LED_3_49),
    .O(LED[3])
  );
  OBUF   LED_2_OBUF (
    .I(LED_2_50),
    .O(LED[2])
  );
  OBUF   LED_1_OBUF (
    .I(LED_1_51),
    .O(LED[1])
  );
  OBUF   LED_0_OBUF (
    .I(LED_0_52),
    .O(LED[0])
  );
  BUFG   Write_IBUF_BUFG (
    .O(Write_IBUF_BUFG_8),
    .I(Write_IBUF_83)
  );
  BUFGP   Clk_BUFGP (
    .I(Clk),
    .O(Clk_BUFGP_9)
  );
  RAM   ram (
    .clka(Clk_BUFGP_9),
    .wea({Write_IBUF_83}),
    .addra({Add_5_IBUF_0, Add_4_IBUF_1, Add_3_IBUF_2, Add_2_IBUF_3, Add_1_IBUF_4, Add_0_IBUF_5}),
    .dina({write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, 
write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_16_43, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, 
write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_30_42, write_31_53, write_0_44}),
    .douta({out[31], out[30], out[29], out[28], out[27], out[26], out[25], out[24], out[23], out[22], out[21], out[20], out[19], out[18], out[17], 
out[16], out[15], out[14], out[13], out[12], out[11], out[10], out[9], out[8], out[7], out[6], out[5], out[4], out[3], out[2], out[1], out[0]})
  );

// synthesis translate_on

endmodule

// synthesis translate_off

`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

// synthesis translate_on

`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:44:44 06/14/2018
// Design Name:   JZ_4
// Module Name:   C:/Users/fatdoge/Desktop/ise/item4/item4.v
// Project Name:  JZ_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JZ_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module item4;

	// Inputs
	reg [4:0] Addr;
	reg Write_Reg;
	reg [1:0] C1;
	reg C2;
	reg Clk;
	reg Reset;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	JZ_4 uut (
		.Addr(Addr), 
		.Write_Reg(Write_Reg), 
		.C1(C1), 
		.C2(C2), 
		.Clk(Clk), 
		.Reset(Reset), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		Addr = 0;
		Write_Reg = 0;
		C1 = 00;
		C2 = 0;
		Clk = 0;
		Reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		Addr = 00000;
		Write_Reg = 0;
		C1 = 00;
		C2 = 0;
		Clk = 0;
		Reset = 0;
		#100;
		// Add stimulus here
		Addr = 00000;
		Write_Reg = 1;
		C1 = 00;
		C2 = 0;
		Clk = 0;
		Reset = 0;
		#100;
		Clk=1;
		#100;
		// Add stimulus here
		Addr = 00000;
		Write_Reg = 0;
		C1 = 00;
		C2 = 0;
		Clk = 0;
		Reset = 0;
	end
      
endmodule


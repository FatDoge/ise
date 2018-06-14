`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:51:52 04/20/2017
// Design Name:   Ex5
// Module Name:   E:/ISEP2/Ex5/test.v
// Project Name:  Ex5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ex5
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [7:2] Add;
	reg [1:0] SW;
	reg Write;
	reg Clk;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	Ex5 uut (
		.Add(Add), 
		.SW(SW), 
		.Write(Write), 
		.Clk(Clk), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		Add = 0;
		SW = 0;
		Write = 0;
		Clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		Add = 6'b001100;
		SW = 2'b00;
		Write = 1;
      Clk = 0;
		#100;
		Clk = 1;
		#100;
		Clk = 0;
		Write=0;
		#100
		Clk=1;
		#100
		Clk=0;

		// Add stimulus here

	end
      
endmodule


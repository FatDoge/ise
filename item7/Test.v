`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:25:35 04/24/2017
// Design Name:   Ex7
// Module Name:   E:/ISEP2/Ex7/Test.v
// Project Name:  Ex7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ex7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg Rst;
	reg Clk;
	reg [1:0] SW;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	Ex7 uut (
		.Rst(Rst), 
		.Clk(Clk), 
		.SW(SW), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		Rst = 0;
		Clk = 0;
		SW = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Rst = 1;
		#100;
		Rst = 0;
		#100;
		Clk = 0;
		#100;
		Clk = 1;
		#100;
		Clk = 0;
		#100;
		Clk = 1;
		#100;
		SW = 2'b00;
		#100;
		SW = 2'b01;
		#100;
		SW = 2'b10;
		#100;
		SW = 2'b11;
		#100;
		SW = 2'b00;
		Clk = 0;
		#100;
		Clk = 1;
		#100;
		SW = 2'b01;
		#100;
		SW = 2'b10;
		#100;
		SW = 2'b11;
		// Add stimulus here

	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:52:10 04/27/2018
// Design Name:   First_M
// Module Name:   C:/Users/hdu/Desktop/ISE/item1/TEST.v
// Project Name:  item1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: First_M
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire D;
	wire E;

	// Instantiate the Unit Under Test (UUT)
	First_M uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here;
		#200;
		A=0;B=0;C=1;
		#200;
		A=0;B=1;C=0;
		#200;
		A=0;B=1;C=1;
		#200;
		A=1;B=0;C=0;
		#200;
		A=1;B=0;C=1;
		#200;
		A=1;B=1;C=0;
		#200;
		A=1;B=1;C=1;
	end
      
endmodule


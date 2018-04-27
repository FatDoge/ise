`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:30:05 04/27/2018
// Design Name:   Second_M
// Module Name:   C:/Users/hdu/Desktop/ISE/item2/TEST.v
// Project Name:  item2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Second_M
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
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] F;
	wire C4;

	// Instantiate the Unit Under Test (UUT)
	Second_M uut (
		.A(A), 
		.B(B), 
		.C0(C0), 
		.F(F), 
		.C4(C4)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#200;
		A=0001;B=0001;C0=0;
		#200;
		A=0000;B=1111;C0=0;
		#200;
		A=0000;B=1111;C0=1;
		#200;
		A=1111;B=1111;C0=0;
	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:11:51 06/22/2018
// Design Name:   Top
// Module Name:   C:/Users/fatdoge/Desktop/ise/item8/test8.v
// Project Name:  Ex8_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test8;

	// Inputs
	reg Rst;
	reg Clk;
	reg [2:0] SW;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
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
       Rst=1;
		 #100
		 Rst=0;
		 #100
		 SW=100;
		 #100
		 Clk=1;
		 #100
		 Clk=0;
		 #100
		 SW=000;
		 
		 
		// Add stimulus here
// Add stimulus here
		#100;
		Clk=0;
		#100;
		SW=001;
		#100;
		SW=010;
		#100;
		SW=011;
		#100;
		SW=100;
		#100;
		SW=000;
		
		Clk=1;
		#100;
		Clk=0;
		#100;
		SW=001;
		#100;
		SW=010;
		#100;
		SW=011;
		#100;
		SW=100;
		#100;
		SW=000;
		
		Clk=1;
		#100;
		Clk=0;
		#100;
		SW=001;
		#100;
		SW=010;
		#100;
		SW=011;
		#100;
		SW=100;
		#100;
		SW=000;
		
		Rst=1;
		#100
		Rst=0;
		#100;
		SW=100;
		#100;
		SW=000;
		#100;
		SW=001;
		#100;
		SW=010;
		#100;
		SW=011;
		
	end
      
endmodule


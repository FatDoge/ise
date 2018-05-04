`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:26:04 05/04/2018
// Design Name:   S3
// Module Name:   C:/Users/fatdoge/Desktop/ise/item3/Third_Test.v
// Project Name:  item3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: S3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Third_Test;

	// Inputs
	reg [2:0] ALU_OP;
	reg [2:0] AB_SW;
	reg F_LED_SW;

	// Outputs
	wire OF;
	wire ZF;
	wire F;
	wire LED;

	// Instantiate the Unit Under Test (UUT)
	S3 uut (
		.ALU_OP(ALU_OP), 
		.AB_SW(AB_SW), 
		.OF(OF), 
		.ZF(ZF), 
		.F(F), 
		.LED(LED), 
		.F_LED_SW(F_LED_SW)
	);

	initial begin
		// Initialize Inputs
		ALU_OP = 0;
		AB_SW = 0;
		F_LED_SW = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;   
		ALU_OP = 001;   
		AB_SW = 001; 
		#100;   
		ALU_OP = 010;   
		AB_SW = 010; 
		#100;   
		ALU_OP = 011;  
		AB_SW = 011; 
		#100; 
		ALU_OP = 100;  
		AB_SW = 100;
		#100;  
		ALU_OP = 101;  
		AB_SW = 101;
		#100;  
		ALU_OP = 110; 
		AB_SW = 110; 
		#100;  
		ALU_OP = 111;  
		AB_SW = 111; 

	end
      
endmodule


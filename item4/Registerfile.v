`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:19 05/22/2017 
// Design Name: 
// Module Name:    Registerfile 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Registerfile(input [4:0]R_Addr_A,
                    input [4:0]R_Addr_B,
						  input [4:0]W_Addr,
						  input Write_Reg,
						  input [31:0]W_Data,
						  input Clk,
						  input Reset,
						  output [31:0]R_Data_A,
						  output [31:0]R_Data_B
						  );
	reg [31:0]REG_Files[0:31];
	reg [5:0]i;
	initial
	begin
	 for(i=0;i<=31;i=i+1)
		REG_Files[i]=0;
	end
	assign R_Data_A=REG_Files[R_Addr_A];
   assign R_Data_B=REG_Files[R_Addr_B];
	always@(posedge Clk or posedge Reset)
	begin
	 if(Reset)
	  for(i=0;i<=31;i=i+1)
		REG_Files[i]=0;
	 else
	  if(Write_Reg)
	   REG_Files[W_Addr]=W_Data;
	end



endmodule

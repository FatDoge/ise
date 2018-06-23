`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:36:26 06/06/2018 
// Design Name: 
// Module Name:    Reg 
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
module Reg(RA,RB,WR,WA,WD,RDA,RDB,Clk,Reset);
input [4:0] RA,RB,WA;
input [31:0] WD;
input WR,Clk,Reset;
output reg [31:0] RDA, RDB;
reg [31:0] REG[0:31];
reg [5:0] i;
always @ (posedge Clk or posedge Reset)
begin
	if(Reset)
		for(i=0;i<32;i=i+1)
			REG[i] <= 0;
	else
	begin
		if(WR)
			REG[WA] <= WD;
	end
end 
always @(*)
	begin
		RDA = REG[RA];
		RDB = REG[RB];
	end
endmodule

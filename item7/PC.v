`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:59:03 04/24/2017 
// Design Name: 
// Module Name:    PC 
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
module PC(Rst, Clk, Incode);
input Rst, Clk;
output [31:0] Incode;
reg [31:0] PC;
always @(posedge Rst or negedge Clk)
begin
	if(Rst == 1)
		PC <= 32'h0000_0000;
	else
		PC <= PC + 4;
end
IM ex(Clk, PC[7:2], Incode);
endmodule

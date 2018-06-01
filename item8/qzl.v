`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:34:31 05/03/2017 
// Design Name: 
// Module Name:    qzl 
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
module qzl(Rst, Clk, op, rs, rt, rd, func);
input Rst,Clk;
wire [31:0] Incode;
output reg [5:0] op,func;
output reg [4:0] rs,rt,rd;
reg [31:0] PC;
always @(posedge Rst or negedge Clk)
begin
	if(Rst == 1)
		PC <= 32'h0000_0000;
	else
		PC <= PC + 4;
end
zl ex(Clk, PC[7:2], Incode);
always @(Incode)
begin
	op = Incode[31:26];
	rs = Incode[25:21];
	rt = Incode[20:16];
	rd = Incode[15:11];
	func = Incode[5:0];
end
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:37:21 06/06/2018 
// Design Name: 
// Module Name:    CPU 
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
module CPU(Rst, Clk, ZF, OF, alu_out);
output ZF, OF;
output [31:0] alu_out;
input Rst, Clk;
wire [5:0] op,func;
wire [4:0] rd,rs,rt;
reg [2:0] alu_op;
reg write;
wire [31:0]outa, outb, alu_out;
qzl x1(Rst, Clk, op, rs, rt, rd, func);
always @(func, write)
begin
		write = 1;
	case(func)
		6'b100000:
		alu_op = 3'b100;
		6'b100010:
		alu_op = 3'b101;
		6'b100100:
		alu_op = 3'b000;
		6'b100101:
		alu_op = 3'b001;
		6'b100110:
		alu_op = 3'b010;
		6'b100111:
		alu_op = 3'b011;
		6'b101011:
		alu_op = 3'b110;
		6'b000100:
		alu_op = 3'b111;
		default:
		begin
			alu_op = 000;
			write = 0;
		end
	endcase
end
Reg x2(rs, rt, write, rd, alu_out, outa, outb, Clk, Rst);
ALU x3(outa, outb, alu_op, alu_out, ZF, OF);
endmodule

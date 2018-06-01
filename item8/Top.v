`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:22 05/03/2017 
// Design Name: 
// Module Name:    Top 
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
module Top(Rst, Clk, SW, LED);
input Rst, Clk;
input [2:0] SW;
output reg [7:0] LED;
wire ZF, OF;
wire [31:0] tmp;
CPU x4(Rst, Clk, ZF, OF, tmp);
always @(SW, tmp, ZF, OF)
begin
	case(SW)
		3'b000:
			LED = tmp[7:0];
		3'b001:
			LED = tmp[15:8];
		3'b010:
			LED = tmp[23:16];
		3'b011:
			LED = tmp[31:24];
		3'b100:
		begin
			LED[5:0] = 0;
			LED[6] = ZF;
			LED[7] = OF;
		end
		default:
			LED = 0;
	endcase
end
endmodule

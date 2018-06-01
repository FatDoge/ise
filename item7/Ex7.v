`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:12 04/24/2017 
// Design Name: 
// Module Name:    Ex7 
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
module Ex7(Rst, Clk, SW, LED);
input Rst, Clk;
input [1:0] SW;
wire [31:0] out;
output reg [7:0] LED;
PC pc(Rst, Clk, out);
always @(*)
begin
	case (SW)
		2'b00:
		begin
			LED = out[7:0] ;
		end
		2'b01:
		begin
			LED = out[15:8];
		end
		2'b10:
		begin
			LED = out[23:16];
		end
		2'b11:
		begin
			LED = out[31:24];
		end
	endcase
end
endmodule

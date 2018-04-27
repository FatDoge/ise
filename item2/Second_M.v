`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:41 04/27/2018 
// Design Name: 
// Module Name:    Second_M 
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
module Second_M(A,B,C0,F,C4);
input [3:0] A,B;
input C0;
output [3:0] F;
output C4;
assign {C4,F}=A+B+C0;
endmodule

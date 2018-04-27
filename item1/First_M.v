`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:36 04/27/2018 
// Design Name: 
// Module Name:    First_M 
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
module First_M(A,B,C,D,E);
input A,B,C;
output D,E;
wire A,B,C,D,E;
assign D=(~A&~B&C)|(~A&B&~C)|(A&~B&~C)|(A&B&C);
assign E=(~A&B&C)|(A&~B&C)|(A&B&~C)|(A&B&C); 
endmodule

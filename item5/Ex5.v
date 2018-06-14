`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:04 04/20/2017 
// Design Name: 
// Module Name:    Ex5 
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
 module Ex5(Add, SW, Write, Clk, LED);
input [5:0] Add;
input [1:0] SW;
input Write, Clk;
output reg [7:0] LED;
reg [31:0] write;
wire [31:0] out;
always @(*)
begin
	if (Write == 1)
	begin
		case (SW)
			2'b00:
			begin
				write=32'h0000_0001;
			end
			2'b01:
			begin
				write=32'hFFFF_FFFF;
			end
			2'b10:
			begin
				write=32'h0001_0000;
			end
			2'b11:
			begin
				write=32'h5555_5555;
			end
		endcase
	end
	else
	begin
		case (SW)
			2'b00:
			begin
				LED = out[7:0];
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
end

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
RAM ram (
  .clka(Clk), // input clka
  .wea(Write), // input [0 : 0] wea
  .addra(Add), // input [5 : 0] addra
  .dina(write), // input [31 : 0] dina
  .douta(out) // output [31 : 0] douta
);

endmodule

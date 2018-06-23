`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:31 06/06/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A, B, OP, F, ZF, OF);
input [31:0] A, B;
input [2:0] OP;
output reg [31:0] F;
output reg ZF, OF;
reg C30,C31,CX,FLag;
reg [1:0] tmp;
reg [5:0] i;
reg [31:0] C;
always @(*)
begin
	case(OP)
		3'b000:
		begin
			F = A & B;
			OF = 0;
		end
		3'b001:
		begin
			F = A | B;
			OF = 0;
		end
		3'b010:
		begin
			F = A ^ B;
			OF = 0;
		end
		3'b011:
		begin
			F = ~(A | B);
			OF = 0;
		end
		3'b100:
		begin
			F = A + B;
			CX = 0;
			for (i=0;i<32;i=i+1)
			begin
				tmp = A[i]+B[i]+CX;
				if (tmp == 2'b10)
					CX = 1;
				else
					CX = 0;
				if (i == 30)
					C30 = CX;
				if (i == 31)
					C31 = CX;
			end
			OF = C30 ^ C31;
		end
		3'b101:
		begin
			C = ~B + 1'b1;
			F = A - B;
			CX = 0;
			for (i=0;i<32;i=i+1)
			begin
				tmp = A[i]+C[i]+CX;
				if (tmp == 2'b10)
					CX = 1;
				else
					CX = 0;
				if (i == 30)
					C30 = CX;
				if (i == 31)
					C31 = CX;
			end
			OF = C30 ^ C31;
		end
		3'b110:
		begin
			if (A < B)
			begin
				F = 32'b00000000000000000000000000000001;
			end
			else
			begin
				F = 32'b00000000000000000000000000000000; 
			end
			OF = 0;
		end
		3'b111:
		begin
			F = B << A;
			OF = 0;
		end
		default:
		begin
			F = 32'b0;
			OF = 0;
			ZF = 1;
		end
	endcase
	ZF = 1;
	for (i=0;i<32;i=i+1)
	begin
		if(F[i]==1)
			ZF = 0;
	end
end
endmodule

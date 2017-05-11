`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:30 05/09/2017 
// Design Name: 
// Module Name:    display_time 
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
module display_time(
    input [3:0] digit_in,
	 output [7:0] seg_out
    );
	  reg [7:0] digit;
	 
	 always@ (posedge clk) begin
		case(digit_in)
			4'b0000: digit = 8'b11000000;
			4'b0001: digit = 8'b11111001;
			4'b0010: digit = 8'b10100100;
			4'b0011: digit = 8'b10110000;
			4'b0100: digit = 8'b10011001;
			4'b0101: digit = 8'b10010010;
			4'b0110: digit = 8'b10000010;
			4'b0111: digit = 8'b11111000;
			4'b1000: digit = 8'b10000000;
			4'b1001: digit = 8'b10010000;
		endcase
	end
		
	assign seg_out = digit;
			
endmodule

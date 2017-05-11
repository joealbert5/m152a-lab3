`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:19:45 05/10/2017 
// Design Name: 
// Module Name:    display_four_times 
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
module display_four_times(
    input [3:0] min1_digit,
    input [3:0] min0_digit,
    input [3:0] sec1_digit,
    input [3:0] sec0_digit,
	 input [3:0] anode,
	 input superfast_hz,
    output [7:0] min1_out,
    output [7:0] min0_out,
    output [7:0] sec1_out,
    output [7:0] sec0_out
    );

	display_time min1(
		.digit_in(min1_digit),
		.seg_out(min1_out)
		);
		
	display_time min0(
		.digit_in(min0_digit),
		.seg_out(min0_out)
		);
		
	display_time sec1(
		.digit_in(sec1_digit),
		.seg_out(sec1_out)
		);
		
	display_time sec0(
		.digit_in(sec0_digit),
		.seg_out(sec0_out)
		);
		
		always @(posedge superfast_hz) 
		begin
			anode = 4'b0111;
			min1_out = min1;
			anode = 4'b1011;
			min0_out = min0;
			anode = 4'b1101;
			sec1_out = sec1;
			anode = 4'b1110;
			sec0_out = sec0;
		end
	

endmodule

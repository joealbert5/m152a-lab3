`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:37:58 05/04/2017 
// Design Name: 
// Module Name:    top2 
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
module top2(
		input master_clk,
		input rst,
		input but0,
		input but1,
		input sw0,
		input sw1
 );
		
	wire min1, min0, sec1, sec0,
	one_hz_clk, two_hz_clk, superfast_clk, fast_clk;
	
module time_ctr(
    .clk(one_hz_clk),
    .rst(rst),
	 .min1(min1),
    .min0(min0),
    .sec1(sec1),
    .sec0(sec0)
    );
	 
module clk_divider(
    .master_clk(master_clk),
    .rst(rst),
	 .one_hz_clk(one_hz_clk),
    .two_hz_clk(two_hz_clk),
    .superfast_clk(superfast_clk),
    .fast_clk(fast_clk)
    );
endmodule

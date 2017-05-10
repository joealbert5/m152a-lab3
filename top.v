`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:42 05/04/2017 
// Design Name: 
// Module Name:    top 
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
module top(
		input clk,
		input rst,
		input but0,
		input but1,
		input sw0,
		input sw1,
		output [3:0] an,
		output [7:0] seg
 );
		
	wire [2:0] min1;
	wire[3:0] min0;
	wire [2:0] sec1;
	wire [3:0] sec0;
	wire one_hz_clk, two_hz_clk, superfast_clk, fast_clk;
	
	clk_divider clk_divider_(
    .master_clk(clk),
    .rst(rst),
	 .one_hz_clk(one_hz_clk),
    .two_hz_clk(two_hz_clk),
    .superfast_clk(superfast_clk),
    .fast_clk(fast_clk)
    );
	
	time_ctr time_ctr_(
    .clk(one_hz_clk),
    .rst(rst),
	 .min1(min1),
    .min0(min0),
    .sec1(sec1),
    .sec0(sec0)
    );
	 
	 display_time display_time_(
    .min1(min1),
    .min0(min0),
    .sec1(sec1),
    .sec0(sec0),
	 .clk(superfast_clk),
	 .an(an),
	 .seg(seg)
    );
	 
endmodule
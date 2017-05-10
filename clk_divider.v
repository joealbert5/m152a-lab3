`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:27 05/04/2017 
// Design Name: 
// Module Name:    clk_divider 
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
module clk_divider(
    input master_clk,
    input rst,
	 output reg one_hz_clk,
    output reg two_hz_clk,
    output reg superfast_clk,
    output reg fast_clk
    );
	 
	 
	 integer counter1 = 0;
	 integer counter2 = 0;
	 integer counter3 = 0;
	 integer counter4 = 0;
	 
	 always@ (posedge master_clk) begin
		 if (rst == 1) begin
			one_hz_clk = 0;
			two_hz_clk = 0;
			superfast_clk = 0;
			fast_clk = 0;
			counter1 = 0;
			counter2 = 0;
			counter3 = 0;
			counter4 = 0;
			end
		 else begin
			counter1 = counter1 + 1;
			counter2 = counter2 + 1;
			counter3 = counter3 + 1;
			counter4 = counter4 + 1;
			if (counter1 == 1000) begin //should be 50000000
				one_hz_clk = ~one_hz_clk;
				counter1 = 0;
			end
			if (counter2 == 25000000) begin
				two_hz_clk = ~two_hz_clk;
				counter2 = 0;
			end
			if (counter3 == 250000) begin	//200 Hz
				superfast_clk = ~superfast_clk;
				counter3 = 0;
			end
			if (counter4 == 1250000) begin	//4Hz
				fast_clk = ~fast_clk;
				counter4 = 0;
			end
		 end
		end
	 
	 


endmodule

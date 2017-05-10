`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:01 05/04/2017 
// Design Name: 
// Module Name:    time_ctr 
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
module time_ctr(
    input clk,
    input rst,
	 output reg [2:0] min1,
    output reg [3:0] min0,
    output reg [2:0] sec1,
    output reg [3:0] sec0
    );

	

	 
	 always@ (posedge clk) begin
		 if (rst == 1) begin
				min1 = 0;
				min0 = 0;
				sec1 = 0;
				sec0 = 0;
			end
		 else begin
			
			if (sec0 == 9) begin
				sec0 = -1;
				sec1 = sec1 + 1;
			end
			if (sec1 == 6) begin
				sec1 = 0;
				min0 = min0 + 1;
			end
			if (min0 == 10) begin
				min0 = 0;
				min1 = min1+ 1;
			end
			if (min1 == 6) begin
				min1 = 0;
				min0 = 0;
				sec1 = 0;
				sec0 = 0;
			end
			sec0 = sec0 + 1;
		 end
		end
	 
	 

endmodule

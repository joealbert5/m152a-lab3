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
    input [2:0] min1,
    input [3:0] min0,
    input [2:0] sec1,
    input [3:0] sec0,
	 input clk,
	 output reg [3:0] an,
	 output reg [7:0] seg
    );
	 
	 integer j = 0;
	
	 always@ (posedge clk) begin
		if (j == 0)
		begin
			an = 15;
			seg = 255;
		end
	 
		// sec0
		if (j == 1)
		begin
			an = 14;
			case(sec0)
				0: seg = 192; // zero
				1: seg = 249; // one
				2: seg = 164; // is this format faster?
				3: seg = 176;
				4: seg = 153;
				5: seg = 146;
				6: seg = 130;
				7: seg = 248;
				8: seg = 128;
				9: seg = 144;
			endcase
		end
		else if (j == 2)
		begin
			an = 15;
			seg = 255;
		end
		
		// sec1
		if (j == 3)
		begin
			an = 13;
			case(sec1)
				0: seg = 192;
				1: seg = 249;
				2: seg = 164;
				3: seg = 176;
				4: seg = 153;
				5: seg = 146;
				6: seg = 130;
				7: seg = 248;
				8: seg = 128;
				9: seg = 144;
			endcase
		end
		if (j == 4)
		begin
			an = 15;
			seg = 255;
		end
		
		// min0
		if (j == 5)
		begin
			an = 11;
			case(min0)
				0: seg = 192;
				1: seg = 249;
				2: seg = 164;
				3: seg = 176;
				4: seg = 153;
				5: seg = 146;
				6: seg = 130;
				7: seg = 248;
				8: seg = 128;
				9: seg = 144;
			endcase
		end
		if (j == 6)
		begin
			an = 15;
			seg = 255;
		end
		
		// min1
		
		if (j == 7)
		begin
			an = 7;
			case(min1)
				0: seg = 192;
				1: seg = 249;
				2: seg = 164;
				3: seg = 176;
				4: seg = 153;
				5: seg = 146;
				6: seg = 130;
				7: seg = 248;
				8: seg = 128;
				9: seg = 144;
			endcase
		end
		if (j == 8)
		begin
			an = 15;
			seg = 255;
			j = -1;
		end
		
		j = j + 1;
		
	 end
			
endmodule
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
	 output [3:0] an_out,
	 output [7:0] seg_out
    );
	 
	  reg [3:0] an;
	  reg [7:0] seg;
	integer sel;
	reg [3:0] selValue;
	always @(posedge clk) begin
		if(shit_bit == 4)
			sel <= 0;
		else begin
			case(sel)
				0:an <= 4'b1110;  selValue <= sec0;
				1:an <= 4'b1101;  selValue <= sec1;
				2:an <= 4'b1011;  selValue <= min0;
				4:an <= 4'b0111;  selValue <= min1;
			endcase
				
			if(selValue != 1 && selValue != 4)
				seg[0] <= 0;
			else
				seg[0] <= 1;
			
			if(selValue != 5 && selValue != 6)
				seg[1] <= 0;
			else
				seg[1] <= 1;
			
			if(selValue != 2)
				seg[2] <= 0;
			else
				seg[2] <= 1;
			
			if(selValue != 1 && selValue != 4 && selValue != 7 && selValue != 9)
				seg[3] <= 0;
			else
				seg[3] <= 1;
			
			if(selValue == 0 || selValue == 2 || selValue == 6 || selValue == 8)
				seg[4] <= 0;
			else
				seg[4] <= 1;
			
			if(selValue != 1 && selValue != 2 && selValue != 3 && selValue != 7)
				seg[5] <= 0;
			else
				seg[5] <= 1;
			
			if(selValue != 0 && selValue != 1 && selValue != 7)
				seg[6] <= 0;
			else
				seg[6] <= 1;
			
			seg[7] <= 0;
			sel = sel + 1;
		end
	end
	
			

		
/*	 
 	 always@ (posedge clk) begin
		
		an[0] = 0;
		if (sec0 == 1)
		begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=0;
			seg[4]=0;
			seg[5]=0;
			seg[6]=1;
		end
		case(sec0)
			0: zero;
			1: one;
			2: two;
			3: three;
			4: four;
			5: five;
			6: six;
			7: seven;
			8: eight;
			9: nine;
		endcase
		an[0] = 1;

		
		an[1] = 0;
		case(sec1)
			0: zero;
			1: one;
			2: two;
			3: three;
			4: four;
			5: five;
			6: six;
			7: seven;
			8: eight;
			9: nine;
		endcase
		an[1] = 1;
	
		
		an[2] = 0;
		case(min0)
			0: zero;
			1: one;
			2: two;
			3: three;
			4: four;
			5: five;
			6: six;
			7: seven;
			8: eight;
			9: nine;
		endcase
		an[2] = 1;

		
		an[3] = 0;
		case(min1)
			0: zero;
			1: one;
			2: two;
			3: three;
			4: four;
			5: five;
			6: six;
			7: seven;
			8: eight;
			9: nine;
		endcase
		an[3] = 1;
		
		
		an[0] = 0;
		an[1] = 0;
		an[2] = 0;
		an[3] = 0;
		clear;
		an[0] = 1;
		an[1] = 1;
		an[2] = 1;
		an[3] = 1;
	 end
	 
	 task zero;
		begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=0;
			seg[4]=0;
			seg[5]=0;
			seg[6]=1;
		end
	endtask
	
	task one;
	begin
			seg[0]=1;
			seg[1]=0;
			seg[2]=0;
			seg[3]=1;
			seg[4]=1;
			seg[5]=1;
			seg[6]=1;
		end
	endtask
	
	task two;
	begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=1;
			seg[3]=0;
			seg[4]=0;
			seg[5]=1;
			seg[6]=0;
		end
	endtask
	
	task three;
	begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=0;
			seg[4]=1;
			seg[5]=1;
			seg[6]=0;
		end
	endtask
	
	task four;
	begin
			seg[0]=1;
			seg[1]=0;
			seg[2]=0;
			seg[3]=1;
			seg[4]=1;
			seg[5]=0;
			seg[6]=0;
		end
	endtask
	
	task five;
	begin
			seg[0]=0;
			seg[1]=1;
			seg[2]=0;
			seg[3]=0;
			seg[4]=1;
			seg[5]=0;
			seg[6]=0;
		end
	endtask
	
	task six;
	begin
			seg[0]=0;
			seg[1]=1;
			seg[2]=0;
			seg[3]=0;
			seg[4]=0;
			seg[5]=0;
			seg[6]=0;
		end
	endtask
	
	task seven;
	begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=1;
			seg[4]=1;
			seg[5]=1;
			seg[6]=1;
		end
	endtask
	
	task eight;
	begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=0;
			seg[4]=0;
			seg[5]=0;
			seg[6]=0;
		end
	endtask
	
	task nine;
	begin
			seg[0]=0;
			seg[1]=0;
			seg[2]=0;
			seg[3]=0;
			seg[4]=1;
			seg[5]=0;
			seg[6]=0;
		end
	endtask
	
	task clear;
	begin
			seg[0]=1;
			seg[1]=1;
			seg[2]=1;
			seg[3]=1;
			seg[4]=1;
			seg[5]=1;
			seg[6]=1;
	end
	endtask
*/	
	assign an_out = an;
	assign seg_out = seg;
			
endmodule

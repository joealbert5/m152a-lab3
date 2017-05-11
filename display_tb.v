`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:56:02 05/11/2017
// Design Name:   display_time
// Module Name:   C:/Users/raz/Downloads/m152a-lab3-joealbert5-patch-1/m152a-lab3-joealbert5-patch-1/display_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display_time
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module display_tb;

	// Inputs
	reg [2:0] min1;
	reg [3:0] min0;
	reg [2:0] sec1;
	reg [3:0] sec0;
	reg clk;

	// Outputs
	wire [3:0] an_out;
	wire [7:0] seg_out;

	// Instantiate the Unit Under Test (UUT)
	display_time uut (
		.min1(min1), 
		.min0(min0), 
		.sec1(sec1), 
		.sec0(sec0), 
		.clk(clk), 
		.an(an_out), 
		.seg(seg_out)
	);
	integer i;
	integer j;
	initial begin
		// Initialize Inputs
		min1 = 0;
		min0 = 0;
		sec1 = 0;
		sec0 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		j = 0;
		for (i = 0; i < 1000000000; i = i + 1)
		begin
			clk = ~clk;
			#20;
			j = j + 1;
			//always@ (posedge clk) 
			begin
				if (j == 30) 
				begin
					sec0 = sec0 + 1;
					if (sec0 == 10) begin
						sec1 = sec1 + 1;
						sec0 = 0;
					end
					if (sec1 == 6) begin
						min0 = min0 + 1;
						sec1 = 0;
					end
					if (min0 == 10) begin
						min1 = min1 + 1;
						min1 = 0;
					end
					j = 0;
				end
			end
		end
		$finish;

	end
      
endmodule


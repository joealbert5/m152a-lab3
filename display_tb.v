`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:29:51 05/09/2017
// Design Name:   display_time
// Module Name:   C:/Users/152/Desktop/lab3/lab3/display_tb.v
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
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	display_time uut (
		.min1(min1), 
		.min0(min0), 
		.sec1(sec1), 
		.sec0(sec0), 
		.clk(clk), 
		.an_out(an), 
		.seg_out(seg)
	);
	integer i;
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
		sec0 = 1;
		for (i = 0; i < 1000000000; i = i + 1)
		begin
			clk = ~clk;
			#10;
		end
		$finish;
	end
      
endmodule


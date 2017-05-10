`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:59:01 05/04/2017
// Design Name:   clk_divider
// Module Name:   C:/Users/152/Desktop/lab3/clk_div_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_div_tb;

	// Inputs
	reg master_clk;
	reg rst;

	// Outputs
	wire one_hz_clk;
	wire two_hz_clk;
	wire superfast_clk;
	wire fast_clk;

	// Instantiate the Unit Under Test (UUT)
	clk_divider uut (
		.master_clk(master_clk), 
		.rst(rst), 
		.one_hz_clk(one_hz_clk), 
		.two_hz_clk(two_hz_clk), 
		.superfast_clk(superfast_clk), 
		.fast_clk(fast_clk)
	);
	integer i;
	initial begin
		// Initialize Inputs
		master_clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 1;
		#100;
		rst = 0;
		#100
		
		
		for (i = 0; i < 1000000000; i = i + 1)
		begin
			master_clk = ~master_clk;
			#10;
		end
		$finish;
		// Add stimulus here

	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:41:49 05/04/2017
// Design Name:   top
// Module Name:   C:/Users/152/Desktop/lab3/top_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg master_clk;
	reg rst;
	reg but0;
	reg but1;
	reg sw0;
	reg sw1;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.master_clk(master_clk), 
		.rst(rst), 
		.but0(but0), 
		.but1(but1), 
		.sw0(sw0), 
		.sw1(sw1)
	);
	integer i;
	initial begin
		// Initialize Inputs
		master_clk = 0;
		rst = 0;
		but0 = 0;
		but1 = 0;
		sw0 = 0;
		sw1 = 0;

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

	end
      
endmodule


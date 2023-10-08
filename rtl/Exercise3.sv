//no need to include the following because multiple definitions 
//`include "rtl/Mysteries/Mystery1.sv"
//`include "rtl/Mysteries/Mystery2.sv"
/**
 Module Composition Ben Bayor
*/
module Exercise3 (
    input clk,
    input nReset,
    input [3:0] a,
    input [15:0] b,
    input [15:0] c,
    output [15:0] out
);
// Declare signals for Mystery2 inputs and Mystery 1 outputs Alpha and Beta
    wire [7:0] mys1out1;
    wire [7:0] mys1out2;

    //Crewate instationations for inputs above
    Mystery1 theAlpha (
        .a(a[1:0]),
        .b(b[7:0]),
        .c(c[7:0]),
        .d(mys1out1)
    );

    Mystery1 theBeta (
        .a(a[3:2]),
        .b(b[15:8]),
        .c(c[15:8]),
        .d(mys1out2)
    );

    // Declare signals for Mystery2 inputs
    wire [15:0] mys2In1;
    wire [15:0] mys2In2;
    //reset functionality:
    assign mys2In1 = (!nReset) ? 16'h0 : {8'h0, mys1out1};
    assign mys2In2 = (!nReset) ? 16'h0 : {8'h0, mys1out2};

//Following is to greate the Gamma part of the schematic 

    // Instantiate Mystery2
    Mystery2 theGamma (
        .clk(clk),
        .nReset(nReset),
        .a_in(mys2In1[7:0]),
        .b_in(mys2In2[7:0]),
        .out(out)
    );



endmodule

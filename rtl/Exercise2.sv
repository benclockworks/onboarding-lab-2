/**
  @brief A fibonacci linear feedback shift register module

  @input clk    clock
  @input nReset active-low reset
  @input init   initial value following a reset
  @output out   current output
  output[0] =((input[13]^input[15])^input[12])^input[10]
*/
module Exercise2 (
    input clk,
    input nReset,
    input [15:0] init,
    output logic [15:0] out
);
assign out[0] =((init[13]^init[15])^init[12])^init[10];

endmodule

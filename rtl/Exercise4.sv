/**
  @brief An asynchronous mux/decoder

  @input sel   input select
  @input cs    chip select

  @input alpha alpha input
  @input beta  beta input
  @input gamma gamma input

  @output out output
*/
module Exercise4 (
    input [1:0] sel,
    input cs,

    input [7:0] alpha,
    input [7:0] beta,
    input [7:0] gamma,

    output logic [7:0] out
);
always_comb begin
  if (!cs) begin
    out=0;
  end 
  else begin
    case (sel)
    0:out=alpha;
    1:out=beta;
    2:out=gamma;
    endcase
  end
end


endmodule

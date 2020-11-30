#include "systemc.h"
#include "testbench.h"
#include "Adder.h"

int sc_main(int argc, char * argv[]) {
	sc_signal<bool>	sig_cout,sig_sum,sig_a,sig_b,sig_cin;	// define a channel
	

	Adder	adding("Stim Objjj");
	Testbench	testing("Proc Obj");




	adding.sum(sig_sum);
	adding.c_out(sig_cout);
	adding.A(sig_a);
	adding.B(sig_b);
	adding.cin(sig_cin);


	testing.sum(sig_sum);
	testing.c_out(sig_cout);
	testing.A(sig_a);
	testing.B(sig_b);
	testing.cin(sig_cin);

	

	sc_start();

	return 0;
}


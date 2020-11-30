#include "systemc.h"
#include <iostream>
using std::cout;
using std::endl;

SC_MODULE(Testbench) {
	sc_out<bool>	A,B,cin;	// declare an output port
	sc_in<bool>	sum,c_out;	// declare an input port

	SC_CTOR(Testbench) {
		SC_THREAD(test_thread);
		
	}

	void test_thread(void);
};

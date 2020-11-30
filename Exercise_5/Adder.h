#include "systemc.h"
#include <iostream>
using std::cout;
using std::endl;

SC_MODULE(Adder) {
	sc_out<bool>	sum,c_out;	// declare an output port
	sc_in<bool>	A,B,cin;	// declare an input port

	SC_CTOR(Adder) {

		SC_METHOD(adder_method);
		sensitive << A
			<< B
			<< cin;
	}

	void adder_method(void);
};

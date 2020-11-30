#include "testbench.h"

void Testbench::test_thread(void) {
	A->write(true);
	B->write(true);
	cin->write(true);
	wait(10,SC_NS);
	cout << "sum: " << sum->read() <<" cout:"<< c_out->read()<< endl;




	A->write(true);
	B->write(false);
	cin->write(true);
	wait(10,SC_NS);
	cout << "sum: " << sum->read() <<" cout:"<< c_out->read()<< endl;
	
	
}

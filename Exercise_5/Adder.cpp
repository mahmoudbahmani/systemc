#include "Adder.h"


void Adder::adder_method(void) {
	sum->write(A xor B xor cin);
	c_out->write((A and B) xor (cin and (A xor B))); 
}

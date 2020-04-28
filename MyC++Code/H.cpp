#include "H.h" // "" or double quotes are used, whenn library is located in the source folder. <> or bihher than and smaller than signs are used when the library is located in system folders.
#include <iostream>

H::H(int L) { //Implementation of the constructor.
	I = L;
}
H::~H() { //Implementaition of the destructor.
	std::cout << "Destructor has been called. He destroyed I = " << I << std::endl;
}

void H::print() {
	std::cout << "I = " << I << std::endl;
}
#include "H.h"			// "" or double quotes are used, whenn library is located in the source folder. <> or bihher than and smaller than signs are used when the library is located in system folders.
#include <iostream>

//------------------------------------------------------------
//constructors in classes
//------------------------------------------------------------
	//Syntax: 'CLASSNAME::CLASSNAME(...) {...}'
	H::H(int L) { 
		//Implementation of the constructor.
		I = L;
	}

//------------------------------------------------------------
//destructors in classes
//------------------------------------------------------------
	//Syntax: 'CLASSNAME::~CLASSNAME() {...}'
	H::~H() { 
		//Implementaition of the destructor.
		std::cout << "Destructor has been called. He destroyed I = " << I << std::endl;
	}

//------------------------------------------------------------
//functions in classes
//------------------------------------------------------------
	//Syntax: 'DATATYPE CLASSNAME::FUNCTIONNAME(...) {...}'
	void H::print() {
		std::cout << "I = " << I << std::endl;
	}

//------------------------------------------------------------
//constant functions in classes
//------------------------------------------------------------
	//Syntax: 'DATATYPE CLASSNAME::FUNCTIONNAME(...) const {...}'
	void H::Something() const {
		//this function doesn't change any of the members of its class, since the keyword 'const'
	}

//------------------------------------------------------------
//static variables in classes
//------------------------------------------------------------
	//Syntax: 'DATATYPE CLASSNAME::VARIABLENAME'
	int H::R;
	//'R' is independent to the individual instaces of this class 'H'.
	//It resides to the class itself, and all instances use this one variable 'R'.
	//It is called via: 'H::R'.
		//Syntax: 'CLASSNAME::VARIABLENAME'


//------------------------------------------------------------
//static functions in classes
//------------------------------------------------------------
	//Syntax: 'DATATYPE CLASSNAME::FUNCTIONNAME(...){...}'
	void H::S() {
		//This function is //'S' is independent to the individual instaces of this class 'H'.
		//It resides to the class itself, and all instances use this one function 'S'.
		//These functions are only permitted to use static variables.
		//These functions are called like so: 'H::S()'.
	};
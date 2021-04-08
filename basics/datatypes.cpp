// MyC++Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>

// GLOBAL variables
int x; // declaration
int y = 3; // declaration and initilisation

int main()
{
	// LOCAL variables
	// storing stuff in the STACK MEMORY
	int i = -1;
	unsigned int u = 1;
	float f = 0.5;
	double d = 0.1;
	bool b = true;
	char c = 'c';
	std::string s = "character chain";
	std::cout << "Hello World!\n"; // printing strings to the object 'std' stream 'out' std::out
	int* p = &i; // p is a pointer to a memory address which holds an integer value
	// storing stuff in the HEAP MEMORY
	int* n = new int; //'n' is a POINTER to a memory adress whichs memory holds an integer. Because of the initalisation with 'new'/the constructor that returns a memory address of the reserved spot in the heap 'n' points to a memory location in the heap memory 
	*n = 42;
	int*& o = n; //'o' is now an ALIAS/REFERENCE for 'n'. Syntax: 'DATATYPE& VARIABLENAME = VARIABLENAME'
	delete n; // for making space in the heap
	
	// arrays in C style
	int array_in_stack[3] = {1, 2, 3}; // Array saved in stack memory. Syntax: 'DATATYPE ARRAYNAME[AMOUNTOFITEMS] = {ITEM, .... ITEM}'
	int* pointer_to_array_in_heap = new int[3] {1, 2, 3}; // Array is stored in heap memory
	int* pointer_to_array_in_stack = array_in_stack;

	for (int i = 0; i <= 10; i++)
	{
		std::cout << pointer_to_array_in_stack + i << ": " << *(pointer_to_array_in_stack + i) << std::endl;
	}
	for (int i = 0; i <= 10; i++)
	{
		std::cout << pointer_to_array_in_heap + i << ": " << *(pointer_to_array_in_heap + i) << std::endl;
	}
	
	//array in C++ style (working because we included '<array>')
	std::array<int, 3> cpp_array = {1, 2, 3};
	cpp_array.size();
	std::vector<int> cpp_vector(3);
	cpp_vector[0] = 1;
	cpp_vector[1] = 2;
	cpp_vector[2] = 3;
	for (int entry : cpp_vector) {
		std::cout << entry << std::endl;
	}
	
	// STORAGE CLASSES
	// auto
	//
	// static
	// Preserves a variable beyond its scope lifetime to the lifetime of the entire program.
	// On members of a class it makes the member one and the same for all objects made from this class or one inheriting it.
	for (int P = 0; P < 10; P++) {
		static int Q = 0;
		std::cout << Q << std::endl;
		Q = Q + 1;
	}
	//
	// register
	// variable will be stored in register if possible (decided by compiler, platform and other stuff I don't know of how they decide, so the variabel may be saved in register)
	// used for variables which have to be accessed really fast; can't use & operator on it.
}
	// extern
	// used to expose functions and variables to other files/program parts
	int f4() { return 4; }
	int super_global = 5;
	// in other files: "extern int f4(); extern int super_global;"
	//
	// mutable
	// only in objetcs ... ???


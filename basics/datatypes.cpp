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
	int i = -1;
	unsigned int u = 1;
	float f = 0.5;
	double d = 0.1;
	bool b = true;
	char c = 'c';
	std::string s = "character chain";
	std::cout << "Hello World!\n"; // printing strings to the object 'std' stream 'out' std::out
	int* p = &i; // p is a pointer to a memory address which holds an integer value
	int& j = i; // j is called a reference to i. j is a pointer to i which doesn't need dereferencing since that is done on every appeareance of j and u can't reassign j to point to something else
	
	// storing stuff in the HEAP MEMORY // stuff before has been saved in smaller, limited and automatically cleared STACK MEMORY 
	int* n = new int; //'n' is a POINTER to a memory address whichs memory holds an integer. Because of the initalisation with 'new'/the constructor that returns a memory address of the reserved spot in the HEAP. 'n' memory address beloning to the HEAP memory
	*n = 42;
	int*& o = n; //'o' is now an ALIAS/REFERENCE for 'n'. Syntax: 'DATATYPE& VARIABLENAME = VARIABLENAME' with DATATYPE in this case being "int*" - pointer to an integer value
	delete n; // for making space in the heap
	
	// CONTAINER CLASSES
	// arrays in C style
	int array_in_stack[3] = {1, 2, 3}; // Array saved in STACK MEMORY. Syntax: 'DATATYPE ARRAYNAME[AMOUNTOFITEMS] = {ITEM, .... ITEM}'
	int* pointer_to_array_in_stack = array_in_stack;
	int* pointer_to_array_in_heap = new int[3] {1, 2, 3}; // Array is stored in HEAP MEMORY

	for (int i = 0; i <= 10; i++)
	{
		std::cout << pointer_to_array_in_stack + i << ": " << *(pointer_to_array_in_stack + i) << std::endl;
	}
	for (int i = 0; i <= 10; i++)
	{
		std::cout << pointer_to_array_in_heap + i << ": " << *(pointer_to_array_in_heap + i) << std::endl;
	}
	//
	//array in C++ style (working because we included '<array>' with the line of code "#include <array>")
	std::array<int, 3> cpp_array = {1, 2, 3}; // constructor takes to parameters, first type of the members and second the amount of members
	cpp_array.size(); // array class has some member functions / methods
	std::vector<int> cpp_vector(3);
	cpp_vector[0] = 1;
	cpp_vector[1] = 2;
	cpp_vector[2] = 3;
	for (int entry : cpp_vector) { std::cout << entry << std::endl; } // iterating over the vector with iterator syntax
	
	// STORAGE CLASSES
	// "auto"
	//
	// "static"
	// On members of a class it makes the member one and the same for all objects made from this class or one inheriting it.
	// Preserves a variable beyond it's scope lifetime to the lifetime of the entire program.
	for (int P = 0; P < 10; P++) {
		static int Q = 0;
		std::cout << Q << std::endl;
		Q = Q + 1;
	}
	// std::cout << Q; // should work but linter puts squiggely line under it - dunno if it really works cuz I haven't tested it
	//
	// "register"
	// variable will be stored in register if possible (decided by compiler, platform and other stuff I don't know of how they decide, so the variabel may be saved in register)
	// used for variables which have to be accessed really fast; can't use & operator on it.
}
	// "extern"
	//used to get definition from another file which it will be linked with; works on variables and functions
	int f4() { return 4; }
	int super_global = 5;
	// in other files: "extern int f4(); extern int super_global;"
	//
	// "mutable"
	// only in objetcs on member variables / attributes when a function is const like so "void f () const" but u want to be alter that member although the method is const and so assures not to alter any member variables / attributes


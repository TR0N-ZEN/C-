// MyC++Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>

int main()
{
	//storing stuff in the stack memory
	int i = -1;
	unsigned int u = 1;
	float f = 0.5;
	double d = 0.1;
	bool b = true;
	char c = 'c';
	std::string s = "character chain";
	std::cout << "Hello World!\n"; //printing strings to the object 'std' stream 'out' std::out
	int* p = &i; //p is a pointer to a memory address which holds an integer value
	//storing stuff in the heap
	int* n = new int; //'n' is a pointer to a memory adress whichs memory holds an integer. Because of the initalisation with 'new'/the constructor that returns a memory address of the reserved spot in the heap 'n' points to a memory location in the heap memory 
	*n = 42;
	int*& o = n; //'o' is now an alias/reference for 'n'. Syntax: 'DATATYPE& VARIABLENAME = VARIABLENAME'
	delete n; // for making space in the heap
	
	//arrays in C style
	int array_in_stack[3] = {1, 2, 3}; //Array saved in stack memory. Syntax: 'DATATYPE ARRAYNAME[AMOUNTOFITEMS] = {ITEM, .... ITEM}'
	int* pointer_to_array_in_heap = new int[3] {1, 2, 3}; //Array is stored in heap memory
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
	
	//static variables
	//Preserves a variable beyond its scope lifetime to the lifetime of the entire program.
	for (int P = 0; P < 10; P++) {
		static int Q = 0;
		std::cout << Q << std::endl;
		Q = Q + 1;
	}
}

//for using VS Community
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// MyC++Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <vector>

// GLOBAL variables
int x; // declaration
int y = 3; // declaration and initilisation

void f () {
	int x; // LOCAL variable declaration
	int y = 3; // LOCAL declaration and initilisation
}


int main()
{
	// simple types
	int i = -1;
	unsigned int u = 1;
	float f = 0.5f;
	double d = 0.1;
	bool b = true;
	char c = 'c';
	std::string s = "character chain";
	std::cout << "Hello World!\n"; // printing strings to the object 'std' stream 'out' std::out
	int* p = &i; // p is a pointer to a memory address which holds an integer value
	int& j = i; // j is called a reference to i. j is a pointer to i which doesn't need dereferencing since that is done on every appeareance of j and u can't reassign j to point to something else
	
	
	// CONTAINER CLASSES
	
	// arrays in C style
	int c_array[3] = {1, 2, 3};
	for (int entry : c_array) { std::cout << entry << std::endl; }
	
	//array in C++ style (working because we included '<array>' with the line of code "#include <array>")
	std::array<int, 3> cpp_array = {1, 2, 3};
	cpp_array.size(); // array class has some member functions / methods
	std::vector<int> cpp_vector(3);
	cpp_vector[0] = 1;
	cpp_vector[1] = 2;
	cpp_vector[2] = 3;
	for (int entry : cpp_vector) { std::cout << entry << std::endl; } // iterating over the vector with iterator syntax
}
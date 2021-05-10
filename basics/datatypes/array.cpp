#include <iostream>
#include <array>

int main()
{
	// arrays in C style
	int c_array[3] = {1, 2, 3};
	for (int entry : c_array) { std::cout << entry << std::endl; }
	
	//array in C++ style (working because we included '<array>' with the line of code "#include <array>")
	std::array<int, 3> cpp_array = {1, 2, 3};
	cpp_array.size(); // array class has some member functions / methods
	for (int entry : cpp_array) { std::cout << entry << std::endl; } // iterating over the array with iterator syntax
}

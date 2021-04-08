#include <iostream>

// Syntax:
// datatype1 functionname(datatype2 identifier, ...) {...}
//
// datatype1 sets the datatype of the value that is returned by the function

int function1(int l, int m = 0)
{ //'int m = 0' means that if there is no second parameter passed, 'm' will be set to 0, which is called its default value. The variable 'l' has no default value.
	std::cout << "I am a function and got passed the parameters: l = " << l << ", m = " << m << std::endl;
	return m;
}

// function overloading
// <=> declaring a function with a name already in use for a function but with different parameters in amount or type or both
int function2(int parameter1) { return parameter1; }
std::string function2(std::string parameter1) { return parameter1; }

// function declaration
int f3();

// function definition
int f3() { return 0; }

// function import from other file
extern int f4();

// formal parameters are the values passed to a function
void f5(int* a, int*& b, int c)
{
	*a += 1; // a will be altered outside the scope of this function since it was PASSED BY POINTER
	b += 1; // for b it's the same as for a, since it was PASSED BY REFERENCE
	c += c ; // c won't be altered outside the scope of this function since it was PASSED BY VALUE
} 
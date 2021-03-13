#include <iostream>

int function1(int l, int m = 0) { //'int m = 0' means that if there is no second parameter passed, 'm' will be set to 0, which is called its default value. The variable 'l' has no default value.
	std::cout << "I am a function and got passed the parameters: l = " << l << ", m = " << m << std::endl;
	return m;
}

//Syntax:
//datatype1 functionname(datatype2 identifier, ...)
//{...}
//
//datatype1 sets the datatype of the value that is returned by the function

//function overloading
// <=> declaring a function with a name already in use for a function but with different parameters in amount or type or both
int function2(int parameter1)
{
	return parameter1;
}
std::string function2(std::string parameter1)
{
	return parameter1; 
}
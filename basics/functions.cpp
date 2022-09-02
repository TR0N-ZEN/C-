#include <iostream>

// function DECLARATION
int f3();
// syntax: function custom_function_name(formal_parameter1, ...);

// function DEFINITION
int f3() { return 0; }
// syntax: datatype1 function_name(datatype2 identifier, ...) {...}
// datatype1 sets the datatype of the value that is returned by the function

// function IMPORT from other file
extern int f4();
// syntax: extern datatype function_name()


// FORMAL PARAMETERS are the values passed to a function
void f5(int* a, int*& b, int c)
{
  *a += 1; // a will be altered outside the scope of this function since it was PASSED BY POINTER
  b += 1; // for b it's the same as for a, since it was PASSED BY REFERENCE
  c += 1 ; // c won't be altered outside the scope of this function since it was PASSED BY VALUE
}
/*
function overloading
<=> declaring a function with a name already in use for a function but with different parameters in amount or type or both
*/
int function2(int formal_parameter1) { return formal_parameter1; }
std::string function2(std::string f_parameter1) { return f_parameter1; }

int function1(int l, int m = 0)
{
  //'int m = 0' means that if there is no second parameter passed, 'm' will be set to 0, which is called its default value. The variable 'l' has no default value.
  std::cout << "I am a function and got passed the parameters: l = " << l << ", m = " << m << std::endl;
  return m;
}

// inline functions
inline int f14(int a) { return a * 2; }
 /*
 inline functions get there body inserted everywhere this function is called in the source code,
 their call is replaced by the function body at time of compilation
 (I think id speeds up execution but increases memory usage)
 */

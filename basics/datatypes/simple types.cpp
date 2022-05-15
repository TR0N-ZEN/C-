#include <iostream>

// GLOBAL variables
int x; // declaration
int y = 3; // declaration and initilisation

void f () {
  int x; // LOCAL variable declaration
  int y = 3; // LOCAL declaration and initilisation
}


int main()
{
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
}
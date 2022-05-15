#include <iostream>
#include <array>
#include <vector>

int main ()
{
  // storing stuff in the STACK MEMORY small, limited and automatically cleared
  int n = 32;
  int&k = n;

  // storing stuff in the HEAP MEMORY
  int *m = new int; //'n' is a POINTER to a memory address whichs memory holds an integer. Because of the initalisation with 'new'/the constructor that returns a memory address of the reserved spot in the HEAP. 'm' memory address beloning to the HEAP memory
  *m = 42;
  int*& o = m; //'o' is now an ALIAS/REFERENCE for 'n'. Syntax: 'DATATYPE& VARIABLENAME = VARIABLENAME' with DATATYPE in this case being "int*" - pointer to an integer value
  delete m;
  m = NULL;


  // arrays in C style

  // Array saved in STACK MEMORY. Syntax: 'DATATYPE ARRAYNAME[AMOUNTOFITEMS] = {ITEM, .... ITEM}'
  int array_in_stack[3] = {1, 2, 3};
  int* pointer_to_array_in_stack = array_in_stack;

  // Array is stored in HEAP MEMORY
  int* pointer_to_array_in_heap = new int[3] {1, 2, 3};
}

#include <iostream>
using namespace std; // now there is no need to use std in front of std as prefix for example std

int main()
{
  cout << "Hello World";
  cout << "?\n";
  cout << "Hello World!" << endl;
  cout << "Please tell me your name!\n";
  char name[10];
  cin >> name;
  cout << "Hello, " << name << endl;
  return 0;
}

//compile this program using the command:
//  "g++ world.cpp"
//execute the result of the compilation:
//  "./a.out"
#include <iostream>


int main()
{
  // STORAGE CLASSES
  // "auto"
  //
  // "static"
  // On members of a class, it makes the member one and the same for all objects made from this class or one inheriting it.  
  // Preserves a variable beyond it's scope lifetime to the lifetime of the entire program.
  for (int P = 0; P < 10; P++) {
    static int Q = 0;
    std::cout << Q << std::endl;
    Q = Q + 1;
  }
  // std::cout << Q; // should work but linter puts squiggely line under it - dunno if it really works cuz I haven't tested it
  //
  // "register"
  // variable will be stored in register if possible (decided by compiler, platform and other stuff I don't know of how they decide, so the variable may be saved in register)
  // used for variables which have to be accessed really fast; can't use & operator on it.
}

  // "extern"
  //used to get definition from another file which it will be linked with; works on variables and functions
  int f4() { return 4; }
  int super_global = 5;
  // in other files where here defined code used: "extern int f4(); extern int super_global;"
  //
  // "mutable"
  // only in objetcs on member variables / attributes when a function is const, like so "void f () const", but u want to alter that member although the method is const and so assures not to alter any member variables / attributes

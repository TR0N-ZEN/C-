Compiler:
+ `mingw` via chocolatey on windows via `choco install mingw`
+ on linux distribution with apt via `sudo apt install gcc`

in the console/terminal type: 
+ `g++ -o main.cpp module_1.cpp ... module_n.cpp` to compile main.cpp and and the following `module_<x>.cpp` files to object files, ending on `.o`
+ `g++ -o main.exe main.cpp module_1.cpp ... module_n.cpp` to compile `main.cpp` and the following `module_<x>.cpp` files and link the resulting an .exe file.
+ use `g++ -c module_1.cpp ... module_n.cpp` to compile files to object files  
  and on linux `g++ -o main.o module_1.o ... module_n.o` to link the object files to one object file 
  or on windows `g++ -o main.exe module_1.o ... module_n.o` to link the object files to one executable file
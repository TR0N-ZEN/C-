#include <iostream>//  <> or bihher than and smaller than signs are used when the library is located in system folders.
#include <array>
#include <vector>
#include "H.h"

//------------------------------------------------------------
//functions
void function(int l, int m = 0) { //'int l = 0' means that if there is no second parameter passed, 'm' will be set to 0, which is called its default value. The variable 'l' has no default value.
	std::cout << "I am a function and got passed the parameters: l = " << l << ", m = " << m << std::endl;
}

//------------------------------------------------------------
//structs or almost classes
struct Vector {
    float x;
    float y;
    float z;

    float CalculateAbsolutevalue() {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    //--------------------------------------------------------
    //datatypes
    int a = -1;
    unsigned int b = 1;
    float c = 0.5;
    double d = 0.1;
    bool e = true;
    char f = 'c';
    std::string g = "character chain";
    int* p = &a; //p is a pointer to a memory address wich holds an integer value
    //--------------------------------------------------------
    /*comparison operators are
    ==
    !=
    <
    >
    <=
    >=

    and boolean conjuctors are
    ||
    &&
    */
    //-------------------------------------------------------
    //if else
    int h = 0;
    if (h == 1) {
        std::cout << "h = 1 " << std::endl;
    }
    else if (h == 2) {
        std::cout << "h = 2" << std::endl;
    }
    else if (h != -1 && h != -2) {
        std::cout << "h is not 1 or 2 nor their negative counterpart" << std::endl;
    }
    else {
        std::cout << "i am tired of writing" << std::endl;
    }
    //--------------------------------------------------------
    //switch
    switch (h) {
    case 0:
        std::cout << "h = 0" << std::endl;
        break;
    case 1:
        std::cout << "h = 1" << std::endl;
        break;
    default:
        std::cout << "h is neither 1 nor 2" << std::endl;
    }
    //--------------------------------------------------------
    //loops
    for (int i = 0; i < 10; i++) {

    }
    bool j = true;
    while (j) {
        j = false;
    }
    bool k = true;
    do {
        k = false;
    } while (k);
    //--------------------------------------------------------
    //functions
	function(1);
	std::cout << "Bye";
    //--------------------------------------------------------
    //structs or almost classes. All members of a struct a by standard public, meaning they are accesible anywhere in the program.
    Vector v;
    v.x = 1;
    v.y = 2;
    v.z = -0.5;
    int absolutevalue = v.CalculateAbsolutevalue();
    //--------------------------------------------------------
    //pointers
    int* n = new int; //'n' is a pointer to a memory adress whichs memory holds an integer. Because of the initalisation with 'new' 'n' points to a memory location in the heap memory 
    *n = 42;
    //delete n; //for maaking space in heap
    //--------------------------------------------------------
    //references
    int*& o = n; //'o' is now an alias for 'n'. Syntax: 'DATATYPE& VARIABLENAME = VARIABLENAME'
    //--------------------------------------------------------
    //arrays in C style
    int p[3] = { 1, 2, 3 }; //Array saved in stack memory. Syntax: 'DATATYPE ARRAYNAME[AMOUNTOFITEMS] = {ITEM, .... ITEM}'
    int* q = new int[3] {1, 2, 3}; //Array is saved in heap memory.
    int* r = p; //array just called by its name behaves just as a pointer to its first item
    for (int s = 0; s <= 10; s++) {
        std::cout << r + s << ": " << *(r + s) << std::endl; //Traversing array in stack.
    }
    int* t = q;
    for (int u = 0; u <= 10; u++) {
        std::cout << t + u << ": " << *(t + u) << std::endl; //Traversing array in heap.
    }
    //--------------------------------------------------------
    //arrays in C++ style
    std::array<int, 3> w = { 1, 2, 3 }; //equivalent class to the stack arry in C style, though the std::array has some functions like the following 'size()' function. 
    w.size();
    std::vector<int> A{1, 2, 3};
    A.push_back(4); //to append an item
    A.size();
    std::vector<int> B(3);
    B[0] = 1;
    B[1] = 2;
    B[2] = 3;
    for (int C : B) {
        std::cout << C << std::endl;
    }
    //--------------------------------------------------------
    //classes All members of a class are private by default. Private means that a member is only accessible from within its container and children.
    class D {
        int E; //'E' is aprivate member since private is default for members.
    public: //All following declarations are public.
        int F; //'F' is public.
    private: //All following declarations are private.
        int G;//'G' is private.
    };
    //class definitions and initalisations are usally stored in external files.
    //In a header file 'HEADERFILENAME.h' the class is defined. All its members are only declared.
    //The definiton and the implementation is then stored in a source file usally named like 'FILENAME.cpp'
    H J(0); //Class allocation in stack. Syntax 'CLASSNAME VARIABLENAME'
    H* K = new H(1); //Class allocation in heap. Syntax 'CLASSSNAME* VARIABLENAME = new CLASSNAME'
    J.print();
    (*K).print(); // '(*K).print() <=> K->print()'
    delete K;
}// After 'main {...}' ends, the stack is wiped and the destructor of 'J' is called automatically.
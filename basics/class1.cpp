#include "class1.h" // importing the header
#include <iostream> // needed for 'std::cout' ...

//following comes the definition of the classes methods are alle outside definitions
//constructor
class1::class1(int parameter1) {
	member1 = parameter1;
	member2 = parameter1;
}
class1::~class1() {
	std::cout << "Destructor has been called." << std::endl;
}

void class1::method1() {
	std::cout << "void method1()" << std::endl;
}
void class1::method2() const {
	std::cout << "void method2() const" << std::endl;
}
void class1::method3() {
	std::cout << "static void method3()" << std::endl;
}

//outside definition of a function
class1 operator+(const class1& e1) {
	class1 x(1);
	x.member2 = member2 + e1.member2;
}

class1 operator*(const class1& e1, const class1 e2) {
	class1 x(1);
	x.member1 = e1.member1 * e2.member1;
}
#pragma once

//headerfiles only declare things but never define
class class1 {
	int member1; //Members only declared. Members by default private
	public:
		int member2;
		class1(int parameter1); // declaration of the constructor
		~class1(); // declaration of the destructor whcih is called when 'delete' is called on an instance of class1
		void method1(); // memembers to which methods are counted are only declared
		void method2() const; // this function doesn't change any of the members of its/this class
		static int member3;			// 'member3' is independent from the individual instaces of this class 'class1'. It resides to the class itself, and all instances use this one variable 'R'.
		static void method3(); //this function is independent from the individual instaces of this class 'class1'.
								// It resides to the class itself, and all instances use this one function 'method3'.
								// These functions are only permitted to use static variables
								// These functions are called like so: 'class1::method3()'
		int operator+(const class1& e1); // thsi function will be an inside defined function, that can access the this operator/variable
		friend int operator*(const class1& e1, const class1& e2);
};

#include <iostream>
using namespace std;

class Shape
{
	protected:
		int width, height;
	public:
		Shape(int a = 0, int b = 0) { width = a; height = b; }
		// VIRTUAL functions are able to be redefined in derived classes - this is called 'daynamic linkage' or 'late binding' since the function is called in the context of the class the object was brought up from
		// virtual int area() { cout << "Shape.area()" << endl; return 0; }
		// PURE VIRTUAL function if function should have no meaningful definition in this (base-) class
		virtual int area() = 0; // definition must be overwritten in derived classes
};

class Rectangle : public Shape
{
	public:
		Rectangle( int a = 0, int b = 0 ) : Shape(a, b) { }
		int area() { cout << "Rectangle.area()" << endl; return (width * height); }
};

class Triangle : public Shape
{
	public:
		Triangle( int a = 0, int b = 0 ) : Shape(a, b) { }
		int area() { cout << "Triangle.area()" << endl; return (width * height / 2); }
};

int main()
{
	Shape* shape;
	Rectangle rec(10,7);
	Triangle tri(10,4);
	return 0;
}
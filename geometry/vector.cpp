#include "vector.h"
#include <cmath>
#include <iostream>

using namespace std;

Vector::Vector(float a, float b,float c)
{
	x = a;
	y = b;
	z = c;
}
Vector::Vector()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector::~Vector()
{
	cout << "Vector deleted" << endl;
}

float Vector::length(Vector& v1)
{
	return sqrt(pow(v1.x, 2) + pow(v1.y, 2) + pow(v1.z, 2));
}

Vector Vector::operator+(Vector &v2)
{
	Vector v3 = Vector();
	v3.x = this->x + v2.x;
	v3.y = this->y + v2.y;
	v3.z = this->z + v2.z;
	return v3;
}
float Vector::operator*(Vector &v2)
{
	return this->x * v2.x + this->y * v2.y + this->z * v2.z;
}

Vector Vector::X(Vector& v1, Vector& v2)
{
	Vector v3 = Vector();
	v3.x = (v1.z*v2.y) - (v1.y*v2.z);
	v3.y = (v1.x*v2.z) - (v1.z*v2.x);
	v3.z = (v1.x*v2.y) - (v1.y*v2.x);
	return v3;
}

//outside definition (since there is no declaration inside file named vector.h)

// Vector operator+(Vector& v1, Vector& v2)
// {
// 	Vector v3(0,0,0);
// 	v3.x = v1.x + v2.x;
// 	v3.y = v1.y + v2.y;
// 	v3.z = v1.z + v2.z;
// 	return v3;
// }


void Vector::log(Vector& v1)
{
	cout << "( " << v1.x << ", " << v1.y << ", " << v1.z << ")" << endl;
}

void Vector::set(Vector& v1)
{
	cout << "x = ";
	cin >> v1.x;
	cout << "y = ";
	cin >> v1.y;
	cout << "z = ";
	cin >> v1.z;
}
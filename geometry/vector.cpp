#include "vector.h"
#include <cmath>
#include <iostream>

#define PI 3.14159265

using namespace std;

float DagToRad(float dag) { return dag * PI / 180; }; // needed since cos() only accepts parameters in radiants
float RadToDag(float rad) { return rad * 180 / PI; }; // needed since acos() only returns values as radiants


Vector::Vector(float a, float b,float c)
{
	x = a;
	y = b;
	z = c;
}

Vector::~Vector()
{
	// cout << "Vector deleted" << endl;
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

Vector Vector::operator*(float scalar)
{
	Vector v3 = Vector();
	v3.x = this->x * scalar;
	v3.y = this->y * scalar;
	v3.z = this->z * scalar;
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

float AreaOfTriangle(Vector& OV1, Vector& OV2, Vector& OV3)
{
	Vector a = (OV1*(-1)) + OV2;
	Vector b = (OV2*(-1))+ OV3;
	Vector c = (OV1*(-1)) + OV3;
	float x = a*c/(Vector::length(a))*(Vector::length(c));
	return ( ( (sin( acos(x) )) * Vector::length(a) ) / 2 )  * ( ((a*c)+(b*c)) / (Vector::length(c)) );
}

float AreaOfTriangle2(Vector& OV1, Vector& OV2, Vector& OV3)
{
	Vector a = (OV1*(-1)) + OV2;
	Vector b = (OV2*(-1))+ OV3;
	Vector c = (OV1*(-1)) + OV3;
	Vector z = Vector::X(a,c);
	return 0.5*(Vector::length(z));
}
#include "vector.h"
#include <cmath>


Vector::Vector(float a = 0, float b = 0,float c = 0)
{
	x = a;
	y = b;
	z = c;
}

float Vector::length(Vector& v1)
{
	return sqrt(pow(v1.x, 2) + pow(v1.y, 2) + pow(v1.z, 2));
}

Vector Vector::operator+(Vector &v2)
{
	Vector v3(0,0,0);
	v3.x = this->x + v2.x;
	v3.y = this->y + v2.y;
	v3.z = this->z + v2.z;
}
float Vector::operator*(Vector &v2)
{
	return this->x * v2.x + this->y * v2.y + this->z * v2.z;
}

//outside definitions (since there is no declaration inside the Vector.h file)

// Vector operator+(Vector& v1, Vector& v2)
// {
// 	Vector v3(0,0,0);
// 	v3.x = v1.x + v2.x;
// 	v3.y = v1.y + v2.y;
// 	v3.z = v1.z + v2.z;
// 	return v3;
// }

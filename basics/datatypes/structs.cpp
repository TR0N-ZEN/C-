#include <cmath>

struct Vector
{
	float x;
	float y;
	float z;

	float CalculateAbsolutevalue() { return sqrt(x * x + y * y + z * z); } //imported via '#include <cmath>'
} v1;


typedef struct
{
	float x;
	float y;
	float z;
} VECTOR, V;

VECTOR v2;



int main()
{
	v1.x = 1; v1.y = 2; v1.z = 1;
	v2.x = 0.1; v2.y = 2.1; v2.z = 3.1;
	struct Vector v3;
	VECTOR v4;
	V v5;
	v3.x = 0.1; v3.y = 2.1; v3.z = 3.1;
	v4.x = 0.1; v4.y = 2.1; v4.z = 3.1;
	v5.x = 0.1; v5.y = 2.1; v5.z = 3.1;
}
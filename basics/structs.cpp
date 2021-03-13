#include <cmath>

struct Vector {
	float x;
	float y;
	float z;

	float CalculateAbsolutevalue() {
		return sqrt(x * x + y * y + z * z); //imported via '#include <cmath>'
	}
};
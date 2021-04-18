#pragma once

class Vector
{
	public:
		float x, y, z;
		Vector(float a, float b, float c);
		~Vector();
		static float length(Vector& v1);
		Vector operator+(Vector& v2);
		// float operator+(Vector& v1, Vector& v2);
		float operator*(Vector& v2);
		// float operator*(Vector& v1, Vector& v2);
		Vector X(Vector& v1, Vector& v2);
};
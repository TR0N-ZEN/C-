#pragma once

class Vector
{
	public:
		float x, y, z;
		// Vector();
		Vector(float a = 0, float b = 0, float c = 0);
		~Vector();
		static float length(Vector& v1);
		Vector operator+(Vector& v2);
		// float operator+(Vector& v1, Vector& v2);
		float operator*(Vector& v2);
		// float operator*(Vector& v1, Vector& v2);
		static Vector X(Vector& v1, Vector& v2);
		static void log(Vector& v1);
		static void set(Vector& v1);
};
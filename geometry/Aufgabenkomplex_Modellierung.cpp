#include <iostream>
#include "vector.cpp"

using namespace  std;
// using namespace Vector; // no a namespace

void HA2();
void HA3();
void A5();
void A6();
void A7();
void HA8();
void A9();
void HA10();

int main()
{
	HA2();
	cout << endl;
	HA3();
	cout << endl;
	
}

void HA2()
{
	cout << "HA2" << endl;
	//a
	Vector OV1 = Vector(0,0,0);
	Vector OV2 = Vector(1,0,0);
	Vector OV3 = Vector(0,1,0);
	cout << "a) " << Vector::AreaOfTriangle(OV1,OV2,OV3) << endl;
	// cout << "a) " << Vector::AreaOfTriangle2(OV1,OV2,OV3);
	//b
	OV1 = Vector(2,-5,8);
	OV2 = Vector(5,-5,8);
	OV3 = Vector(2,-1,8);
	cout << "b) " << Vector::AreaOfTriangle(OV1,OV2,OV3) << endl;
	// cout << "b) " << Vector::AreaOfTriangle2(OV1,OV2,OV3);
	//c
	OV1 = Vector(2,5,-2);
	OV2 = Vector(3,7,0);
	OV3 = Vector(5,9,3);
	cout << "c) " << Vector::AreaOfTriangle(OV1,OV2,OV3) << endl;
	// cout << "c) " << Vector::AreaOfTriangle2(OV1,OV2,OV3);
	//d
	OV1 = Vector(-3,4,-10);
	OV2 = Vector(5,4,-10);
	OV3 = Vector(-3,8,-7);
	cout << "d) " << Vector::AreaOfTriangle(OV1,OV2,OV3) << endl;
	// cout << "d) " << Vector::AreaOfTriangle2(OV1,OV2,OV3);
}

void HA3()
{
	//a
	Vector a = Vector(3,0,4); 
	Vector b = Vector(-3,0,-4);
	cout << "a) " << Vector::angle_between(a,b) << endl; 
	//b
	a = Vector(0.6,0.8,0); 
	b = Vector(0.8,-0.6,-4);
	cout << "b) " << Vector::angle_between(a,b) << endl; 
	//c
	a = Vector(1,2,2); 
	b = Vector(1,4,8);
	cout << "c) " << Vector::angle_between(a,b) << endl; 
}
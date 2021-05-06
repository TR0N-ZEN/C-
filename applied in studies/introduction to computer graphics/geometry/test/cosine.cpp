#include <cmath>
#include <iostream>

#define PI 3.14159265

using namespace std;

float DagToRad(float dag) { return dag * PI / 180; }; // needed since cos() only accepts parameters in radiants
float RadToDag(float rad) { return rad * 180 / PI; }; // needed since acos() only returns values as radiants

int main()
{
	float x;
	cin >> x;
	float X;
	X = DagToRad(x);
	cout << "Radiants = " << X << endl;
	cout << "cos(" << x << ") = " << cos(X) << endl;
	cout << "acos(" << x << ") = " <<  acos(X) << endl;
	cout << "acos(cos(" << x << ")) = " << acos(cos(X)) << endl;
	cout << "RadToDag(acos(cos(" << x << "))) = " << RadToDag(acos(cos(X))) << endl;
	return 0;
}
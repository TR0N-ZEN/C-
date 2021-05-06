#include <iostream>
#include "vector.cpp"

using namespace std;

int main()
{
	bool go_on = true;
	Vector v1 = Vector();
	Vector v2 = Vector();
	Vector v3 = Vector();
	float scalar_product;
	string usr;
	
	// do
	// {
		cout << endl << "Enter values vor vector one? [y|n]: ";
		cin >> usr;
		if (usr == "y")
		{
			Vector::set(v1);
			Vector::log(v1);
		}
		cout << endl << "Enter values vor vector two? [y|n]: ";
		cin >> usr;
		if (usr == "y")
		{
			Vector::set(v2);
			Vector::log(v2);
		}
		cout << endl << "Enter values vor vector three? [y|n]: ";
		cin >> usr;
		if (usr == "y")
		{
			Vector::set(v3);
			Vector::log(v3);
		}
	// cout << "Orperation? [+|*|X|length]: ";
	// char orperation;
	// cin >> orperation;
	// 	switch(orperation)
	// 	{
	// 		case '+':
	// 			v3 = v1+v2;
	// 			Vector::log(v3);
	// 			break;
	// 		case '*':
	// 			scalar_product = v1*v2;
	// 			cout << "scalar product = " << scalar_product << endl;
	// 			break;
	// 		case 'X':
	// 			v3 = Vector::X(v1, v2);
	// 			Vector::log(v3);
	// 			break;
	// 		default:
	// 			cout << "Nothing is done" << endl;
	// 	}
	// 	cout << "Wanna do another calculation? [y|n]: ";
	// 	cin >> usr;
	// }
	// while (usr == "y");
	cout << "AreaOfTriangle: " << AreaOfTriangle(v1, v2, v3) << endl;
	cout << "AreaOfTriangle2: " << AreaOfTriangle2(v1, v2, v3) << endl;
};
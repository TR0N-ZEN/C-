#include <iostream>
#include "vector.cpp"

using namespace std;

int main() {
	bool go_on = true;
	Vector v1 = Vector();
	Vector v2 = Vector();
	Vector v3 = Vector();
	float scalar_product;
	string usr;
	do
	{
		cout << "Enter values vor vector one? [y|n]";
		cin >> usr;
		if (usr == "n") {  }
		else if (usr == "y")
		{
			cout << "x = ";
			cin >> v1.x;
			cout << endl << "y = ";
			cin >> v1.y;
			cout << endl << "z = ";
			cin >> v1.z;
		}
		cout << endl << "Enter values vor vector two? [y|n]";
		cin >> usr;
		if (usr == "n") {  }
		else if (usr == "y")
		{
			cout << endl << "x = ";
			cin >> v2.x;
			cout << endl << "y = ";
			cin >> v2.y;
			cout << endl << "z = ";
			cin >> v2.z;
		}
		cout << endl << "Operation? [+|*|X|length]: " << endl;
		int operation_index;
		cin >> usr;
		switch(operation_index)
		{
			case 0:
				v3 = v1+v2;
				cout << "x = " << v3.x << endl << "y = " << v3.y << endl << "z = " << v3.z;
				break;
			case 1:
				scalar_product = v1*v2;
				cout << "scalar product = " << scalar_product;
				break;
		}
	}
	while (go_on);
}
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World";
	cout << "?\n";
	cout << "Hello World!" << endl;
	cout << "Please tell me your name!\n";
	char name[10];
	cin >> name;
	cout << "Hello, " << name;
	return 0;
}

//compile this program using the command:
//	"g++ world.cpp"
//execute the result of the compilation:
//	"./a.out"
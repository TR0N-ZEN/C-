#include <cmath>
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
	v1.push_back(4);
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
	v1 = {1,2,3,4,5};
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
	v1.erase(v1.begin());
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
	v1.at(2) = 99; // at(n) at operates with zero indexing, works like [] but with bounds checking
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
	//classic iteration
	for (int i = 0; i < v1.size(); i++) { cout << v1.at(i) << " " ; }
	cout << endl;
	// iteration with iterator
	for (int e : v1) { cout << e << " "; }
	cout << endl;
	v1.clear();
	cout << "empty "<< v1.empty() << "\tcapacity " << v1.capacity() << "\tsize " << v1.size() << "\tmemory address of vector: " << v1.data() << endl;;
}
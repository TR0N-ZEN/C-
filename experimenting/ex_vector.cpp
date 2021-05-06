#include <cmath>
#include <iostream>
#include <array>
#include <vector>
#include <ostream>

using namespace std;

void info(vector<int>& v, ostream& ostr = cout)
{
	cout << "empty "<< v.empty() << "\tcapacity " << v.capacity() << "\tsize " << v.size() << "\tmemory address of vector: " << v.data() << endl;
};

int main()
{
	vector<int> v1;
	info(v1);
	v1.push_back(4);
	info(v1);
	v1 = {1,2,3,4,5};
	info(v1);
	v1.erase(v1.begin());
	info(v1);
	v1.at(2) = 99; // at(n) at operates with zero indexing, works like [] but with bounds checking
	info(v1);
	//classic iteration
	for (int i = 0; i < v1.size(); i++) { cout << v1.at(i) << " " ; }
	cout << endl;
	// iteration with iterator
	for (int e : v1) { cout << e << " "; }
	cout << endl;
	v1.clear();
	info(v1);
}
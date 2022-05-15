#include <cmath>
#include <iostream>
#include <vector>


void info(std::vector<int>& v, std::ostream& ostr = std::cout)
{
  std::cout << "empty "<< v.empty() << "\tcapacity " << v.capacity() << "\tsize " << v.size() << "\tmemory address of vector: " << v.data() << std::endl;
};

int main()
{
  std::vector<int> v1; info(v1);
  v1.push_back(4); info(v1);
  v1 = {1,2,3,4,5}; info(v1);
  v1.erase(v1.begin()); info(v1);
  v1.at(2) = 99; info(v1); // at(n) at operates with zero indexing, works like [] but with bounds checking
  for (int i = 0; i < v1.size(); i++) { std::cout << v1.at(i) << " " ; } std::cout << std::endl; //classic iteration
  for (int e : v1) { std::cout << e << " "; } std::cout << std::endl; // iteration with iterator
  v1.clear(); info(v1);
  
  std::vector<int> cpp_vector(3);
  cpp_vector[0] = 1;
  cpp_vector[1] = 2;
  cpp_vector[2] = 3;
  for (int entry : cpp_vector) { std::cout << entry << std::endl; } // iterating over the vector with iterator syntax
}
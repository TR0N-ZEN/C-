#include <iostream>
#include <cmath>

using namespace std;

class Figure
{
	private:
		string * vertexes;
		int vertexes_count;
	public:
		Figure(string vertex_names[], int vertex_count)
		{
			this->vertexes = new string[vertexes_count];
			this->vertexes_count = vertex_count;
			for (int i = 0; i < vertex_count; i++)
			{
				*(this->vertexes + i) = vertex_names[i];
			}
		}
		string* getVertexes(string direction)
		{
			string* p;
			p = new string[this->vertexes_count];
			for (int i = 0; i < this->vertexes_count; i++)
			{
				*(p+i) = *(this->vertexes + i);
			}
			return p;
		}
		static string* clockwise_rotation(string figure[], int vertexes)
		{// {4,3,2,1} -> {1,4,3,2}
			string* p = new string[vertexes];
			for (int i = 0; i < vertexes; i++)
			{
				*(p+(i+1)%vertexes) = figure[i];
			}
			return p;
		}
		static string* counter_clockwise_rotation(string figure[], int vertexes)
		{// {1,4,3,2} -> {4,3,2,1}
			string* p = new string[vertexes];
			for (int i = 0; i < vertexes; i++)
			{
				*(p+i) = figure[(i+1)%vertexes]; // [0] <- [1], [1] <- [2], [2] <- [3], ... , [vertexes] <- [0] 
			}
			return p;
		}
		static string* vertical_axis_reflection(string figure[], int vertexes)
		{// {4,3,2,1} -> {1,2,3,4}
			string* p = new string[vertexes];
			int lastindex = vertexes-1;
			int j = 0;
			for(int index = (vertexes%2); index < vertexes; index++)
			{
				*(p+index) = figure[lastindex-j];
				j++;
			}
			return p;
		}
		static string* horizontal_axis_reflection(string figure[], int vertexes)
		{// {4,3,2,1} -> {3,4,1,2}
			string *p;
			p = counter_clockwise_rotation(figure, vertexes); // amount of times rotation has to be done depends on vertexes
			p = vertical_axis_reflection(p, vertexes);
			p = clockwise_rotation(p, vertexes); // amount of times rotation has to be done depends on the amount of times the antirotation has been done so ultimately on vertexes
			return p;
		}
};

int print_permutation(string permutation[], int vertexes, string check)
{
	for (int i = 0; i < vertexes; i++) { cout << permutation[i] << " "; }
	cout << endl << check << endl << endl;
	return 0;
}

int main()
{
	int vertexes = 4;
	string square[vertexes] = {"4","3","2","1"}; // clockwise naming of vertexes
	string* p;
	string check;
	cout << endl;
	print_permutation(square, vertexes, " ");
	
	// {4,3,2,1} -> {1,4,3,2}
	p = Figure::clockwise_rotation(square, vertexes);
	print_permutation(p, vertexes, "1 4 3 2");
	
	// {1,4,3,2} -> {4,3,2,1}
	p = Figure::counter_clockwise_rotation(p, vertexes);
	print_permutation(p, vertexes, "4 3 2 1");
	
	// {4,3,2,1} -> {1,2,3,4}
	p = Figure::vertical_axis_reflection(square, vertexes);
	print_permutation(p, vertexes, "1 2 3 4");
	
	// {4,3,2,1} -> {3,4,1,2}
	p = Figure::horizontal_axis_reflection(square, vertexes);
	print_permutation(p, vertexes, 	"3 4 1 2");
}
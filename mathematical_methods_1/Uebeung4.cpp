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
			for (int i = 0; i < vertexes; i++)
			{
				cout << *(p+i) << endl;
			}
			return p;
		}
};

int main()
{
	int vertexes = 4;
	string square[] = {"4","3","2","1"}; // clockwise naming of vertexes
	string* p;
	cout << endl;
	for (int i = 0; i < vertexes; i++)
	{
		cout << square[i] << endl;
	}
	cout << endl;
	p = Figure::clockwise_rotation(square, vertexes);
	for (int i = 0; i < vertexes; i++)
	{
		cout << *(p+i) << endl;
	}
	cout << endl;
	p = Figure::counter_clockwise_rotation(p, vertexes);
	for (int i = 0; i < vertexes; i++)
	{
		cout << *(p+i) << endl;
	}
	cout << endl;
	p = Figure::vertical_axis_reflection(square, vertexes);
	for (int i = 0; i < vertexes; i++)
	{
		cout << *(p+i) << endl;
	}
}
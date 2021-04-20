#include <iostream>
#include <cmath>

using namespace std;

int* clockwise_rotation(int figure[], int vertexes)
{// {4,3,2,1} -> {1,4,3,2}
	int* p = new int[vertexes];
	for (int i = 0; i < vertexes; i++)
	{
		*(p+(i+1)%vertexes) = figure[i];
	}
	return p;
}
int* counter_clockwise_rotation(int figure[], int vertexes)
{// {1,4,3,2} -> {4,3,2,1}
	int* p = new int[vertexes];
	for (int i = 0; i < vertexes; i++)
	{
		*(p+i) = figure[(i+1)%vertexes]; // [0] <- [1], [1] <- [2], [2] <- [3], ... , [vertexes] <- [0] 
	}
	return p;
}

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
		};
};

int main()
{
	int vertexes = 4;
	int square[] = {4,3,2,1}; // clockwise naming of vertexes
	int* p;
	cout << endl;
	for (int i = 0; i < vertexes; i++)
	{
		cout << square[i] << endl;
	}
	cout << endl;
	p = clockwise_rotation(square, vertexes);
	for (int i = 0; i < vertexes; i++)
	{
		cout << *(p+i) << endl;
	}
	cout << endl;
	p = counter_clockwise_rotation(p, vertexes);
	for (int i = 0; i < vertexes; i++)
	{
		cout << *(p+i) << endl;
	}
}
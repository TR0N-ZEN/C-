#include <vector>
using namespace std;

class transition_matrix
{
	vector<vector<int>> transition_probabilities;
	transition_matrix();
	void set(int i, int j, int value);
	vector<int> get_row(int i);
	void set_row(int i, vector<int> row);
	vector<int> get_coloumn(int j);
	void set_column(int j, vector<int> coloumn);
};
#include <vector>
#include <transition_matrix.h>

class transition_matrix
{
	vector<vector<int>> transition_probabilities;
	transition_matrix();
	void set(int i, int j, int value) { transition_probabilities[i][j] = value; };
	vector<int> get_row(int i) { return transition_probabilities[i]; };
	void set_row(int i, vector<int> row) { transition_probabilities[i] = row; };
	vector<int> get_coloumn(int j) { vector<int> coloumn; for (vector<int> row : transition_probabilities ) { coloumn[j] = row[j]; } };
	void set_column(int j, vector<int> coloumn) { for (int i = 0; i < transition_probabilities.size(); i++) { transition_probabilities[i][j] = coloumn[j]; } };
};
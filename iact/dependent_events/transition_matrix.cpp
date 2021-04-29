#include <vector>
#include <transition_matrix.h>

class transition_matrix
{
	vector<vector<float>> matrix; // matrix[i][j] <=> from i to j
	transition_matrix();
	void set(int i, int j, float value) { matrix[i][j] = value; }
	float get(int i, int j) { return matrix[i][j]; }
	vector<float> get_row(int i) { return matrix[i]; }
	void set_row(int i, vector<float> row) { matrix[i] = row; }
	vector<float> get_coloumn(int j) { vector<float> coloumn; for (vector<float> row : matrix ) { coloumn[j] = row[j]; } }
	void set_column(int j, vector<int> coloumn) { for (int i = 0; i < matrix.size(); i++) { matrix[i][j] = coloumn[j]; } }
};
#include <vector>
using namespace std;

class transition_probabilities
{
	public: 
		vector<vector<float>> matrix;
		transition_probabilities();
		void set(int i, int j, float value);
		float get(int i, int j);
		vector<float> get_row(int i);
		void set_row(int i, vector<float> row);
		vector<float> get_coloumn(int j);
		void set_column(int j, vector<float> coloumn);
};
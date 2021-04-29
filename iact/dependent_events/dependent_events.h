#include <vector>
#include <transition_matrix.h>

using namespace std;


class dependent_events
{
	private:
		vector<vector<vector<int>>> probabilities_matrixes; //[t][row][coloumn]
	public:
		dependent_events();
		transition_matrix transition_probabilities;
		static void update();
};
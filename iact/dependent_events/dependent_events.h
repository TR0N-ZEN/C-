#include <vector>
#include <transition_matrix.h>

using namespace std;


class dependent_events
{
	private:
		vector<vector<float>> probability_vectors; //dependent on clock / point in time [t]
	public:
		dependent_events();
		transition_probabilities transition_probabilities;
		void update();
};
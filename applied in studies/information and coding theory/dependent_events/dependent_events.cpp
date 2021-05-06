#include <dependent_events.h>
#include <cmath>

void dependent_events::update()
{
	vector<float> p_t = probability_vectors[probability_vectors.size() - 1];
	vector<float> p_t_next;
	for (int j = 0; j < p_t.size(); j++)
	{
		float sum = 0;
		for (int i = 0; i < probability_vectors.size(); i++)
		{
			 sum += p_t[i] * transition_probabilities.get(i,j); // from i to j
		}
		p_t_next[j] = sum;
	}
	probability_vectors.push_back(p_t_next);
}
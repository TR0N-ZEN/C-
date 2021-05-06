#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class discrete_source
{
	public:
		unordered_map<string, float> events; //first = name; second = probability
		float p(string event);
		discrete_source(vector<string> Events, vector<float> Probabilities);
		discrete_source(unordered_map<string, float> Probabilties);
		float vagueness(float prb);
		float entropy();
};
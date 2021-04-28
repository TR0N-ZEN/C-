#include <cmath>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <discrete_source.h>

discrete_source::discrete_source(vector<string> Events, vector<float> Probabilities)
{
	for (int i = 0; i < Events.size(); i++)
	{
		events[Events.at(i)] = Probabilities.at(i);
	}
}

discrete_source::discrete_source(unordered_map<string, float> Probabilties)
{
	for (pair<string, float> event : Probabilties)
	{
		events[event.first] = event.second;
	}
}

float discrete_source::p(string event) { return events[event]; };

float discrete_source::vagueness(float prb) { return log2(prb); };

float discrete_source::entropy()
{
	float sum = 0;
	for (pair<string, float> event : events)
	{
		sum =+ event.second * vagueness(event.second);
	}
	return sum;
};
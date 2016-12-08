#include <string>
#include <vector>
#pragma once

bool geometricTest(std::vector<double> vect){
	int i = 0;
	if (vect.size() < 2)
	{
		return false;
	}
	double c = vect[1] / vect[0];
	while (i < vect.size()-1){
		double d = vect[i+1] / vect[i];
		if (c != d){
			return false;
		}
		i++;
	}
	return true;
}

double geometricanswer(std::vector<double> vect)
{
	double c = vect[1] / vect[0];
	return c*vect[vect.size() - 1];
}
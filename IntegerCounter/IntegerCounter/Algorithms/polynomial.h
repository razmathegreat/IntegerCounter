#include <string>
#include <vector>
#include <math.h>
#pragma once

bool degreeone(std::vector<double> vect){
	int i = 0;
	double c = vect[1] - vect[0];
	while (i < vect.size() - 1){
		double d = vect[i + 1] - vect[i];
		if (c != d){
			return false;
		}
		i++;
	}
	return true;
}

bool degreetwo(std::vector<double> vect){
	int i = 0;
	double c = vect[2] - 2*vect[1]+vect[0];
	while (i < vect.size() - 2){
		double d = vect[i+2] - 2 * vect[i+1] + vect[i];
		if (c != d){
			return false;
		}
		i++;
	}
	return true;
}

bool degreethree(std::vector<double> vect){
	int i = 0;
	double c = vect[3] - 3 * vect[2] + 3 * vect[1] - vect[0];
	while (i < vect.size() - 3){
		double d = vect[i+3] - 3 * vect[i+2] + 3 * vect[i+1] -vect[i];;
		if (c != d){
			return false;
		}
		i++;
	}
	return true;
}
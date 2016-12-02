#include <string>
#include <vector>
#include <math.h>
#pragma once

//Functions of the form ax+b
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

//Functions of the form a(n^2)+bn+c
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

double degreeoneanswer(std::vector<double> vect){
	double c = vect[1] - vect[0];
	return vect[vect.size() - 1] + c;
}

double degreetwoanswer(std::vector<double> vect){
	double c = vect[2] - 2 * vect[1] + vect[0];
	return c + 2*vect[vect.size() - 1] - vect[vect.size() - 2];
}

double degreethreeanswer(std::vector<double> vect){
	double c = vect[3] - 3 * vect[2] + 3 * vect[1] - vect[0];
	return c + 3 * vect[vect.size() - 1] - 3 * vect[vect.size() - 2] + vect[vect.size() - 3];
}
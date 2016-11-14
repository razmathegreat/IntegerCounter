#include <string>
#include <vector>
#pragma once
/*
singleIncrement used to calculate the following algorithm:
X+1=Y
*/

bool singleIncrementFrontTest(std::vector<double> sequence) {
	double x = sequence[0];
	double y = sequence[1];
	double checker = x + 1;
	if (y == checker) {
		return true;
	}
	else
		return false;
}

bool singleIncrementBackTest(std::vector<double> sequence) {
	double x = sequence[sequence.size()-2];
	double y = sequence[sequence.size()-1];
	double checker = x + 1;
	if (y == checker) {
		return true;
	}
	else
		return false;
}



double singeIncrementAnswer(std::vector<double> sequence) {
	double x, y;
	x = sequence.back();
	y = x + 1;
	return y;
}

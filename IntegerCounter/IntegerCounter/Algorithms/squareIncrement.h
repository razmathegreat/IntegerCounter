#include <string>
#include <vector>
#include <math.h>
#pragma once
/*
squareIncrement used to calculate the following pattern:
{n^2,(n+1)^2,(n+2)^2}
*/

bool squareIncrementFrontTest(std::vector<double> sequence) {
	if (sequence.size() < 2)
	{
		return false;
	}
	double x = sequence[0];
	double y = sequence[1];
	//Take the square root of the first item add one to it and compare it to the square root of the second item
	double checker = sqrt(x) + 1;
	if (sqrt(y) == checker) {
		return true;
	}
	else
		return false;
}

bool squareIncrementBackTest(std::vector<double> sequence) {
	if (sequence.size() < 2)
	{
		return false;
	}
	double x = sequence[sequence.size() - 2];
	double y = sequence[sequence.size() - 1];
	double checker = sqrt(x) + 1;
	if (sqrt(y) == checker) {
		return true;
	}
	else
		return false;
}



double squareIncrementAnswer(std::vector<double> sequence) {
	double x, y;
	x = sequence.back();
	//Take the square root of the last number, add one to it, then raise it to the power of two
	y = pow(sqrt(x) + 1,2);
	return y;
}

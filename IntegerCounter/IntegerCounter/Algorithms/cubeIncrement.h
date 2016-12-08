#include <string>
#include <vector>
#include <math.h>
#pragma once
/*
cubeIncrement used to calculate the following pattern:
{n^3,(n+1)^3,(n+2)^3}
*/

bool cubeIncrementFrontTest(std::vector<double> sequence) {
	if (sequence.size() < 2)
	{
		return false;
	}
	double x = sequence[0];
	double y = sequence[1];
	//Take the cube root of the first item add one to it and compare it to the cube root of the second item
	double checker = cbrt(x) + 1;
	if (cbrt(y) == checker) {
		return true;
	}
	else
		return false;
}

bool cubeIncrementBackTest(std::vector<double> sequence) {
	if (sequence.size() < 2)
	{
		return false;
	}
	double x = sequence[sequence.size() - 2];
	double y = sequence[sequence.size() - 1];
	double checker = cbrt(x) + 1;
	if (cbrt(y) == checker) {
		return true;
	}
	else
		return false;
}



double cubeIncrementAnswer(std::vector<double> sequence) {
	double x, y;
	x = sequence.back();
	//Take the cube root of the last number, add one to it, then raise it to the power of three
	y = pow(cbrt(x) + 1, 3);
	return y;
}

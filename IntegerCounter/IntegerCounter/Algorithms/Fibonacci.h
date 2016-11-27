#include <string>
#include <vector>
#pragma once
/*
Fibonacci.h is used to determine if the sequence is following the Fibonacci pattern:
Fibonacci pattern is used if one number in sequence is equal to the previous two numbers
{1,2,3,5,8,13,21,34}
*/

bool fibonacciFrontTest(std::vector<double> sequence) {
	double x = sequence[0];
	double y = sequence[1];
	double z = sequence[2]
	double checker = x + y;
	if (z == checker) {
		return true;
	}
	else
		return false;
}

bool fibonacciBackTest(std::vector<double> sequence) {
	double x = sequence[sequence.size() - 3];
	double y = sequence[sequence.size() - 2];
	double z = sequence[sequence.size() - 1];
	double checker = x + y;
	if (z == checker) {
		return true;
	}
	else
		return false;
}



double fibonacciAnswer(std::vector<double> sequence) {
	double x = sequence[sequence.size() - 2];
	double y = sequence[sequence.size() - 1];
	double z = x + y;
	return z;
}

#include <string>
#include <vector>
#pragma once
/*
alternating used to calculate the following pattern:
{X,Y,X,Y,X,Y}
*/

bool alternatingFrontTest(std::vector<double> sequence) {
	if (sequence.size() < 4){
		return false;
	}
	double x = sequence[0];
	double y = sequence[1];
	double z = sequence[2];
	double a = sequence[3];
	
	if (x==z && y==a) {
		return true;
	}
	else
		return false;
}

bool alternatingBackTest(std::vector<double> sequence) {
	if (sequence.size() < 4){
		return false;
	}
	double x = sequence[sequence.size() - 4];
	double y = sequence[sequence.size() - 3];
	double z = sequence[sequence.size() - 2];
	double a = sequence[sequence.size() - 1];
	
	if (x == z && y == a) {
		return true;
	}
	else
		return false;
}



double alternatingAnswer(std::vector<double> sequence) {
	double x = sequence[sequence.size() - 2];
	//select the second to last value in the sequence
	return x;
}

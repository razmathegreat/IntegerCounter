#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#pragma once


class LineItem {	
private:
		int key;
		double input[];	


public:
	LineItem(char* input);

	int getKey();
	double* getIntegers();
};
	
LineItem::LineItem (char* input) {
	
	std::vector< double > vect;
	std::stringstream ss(input);

	double j;
	int i;
	ss >> i;
	key = i;

	while (ss >> j) {
		vect.push_back(j);

		if (ss.peek() == '"' || ss.peek() == ',' || ss.peek() == ' ')
			ss.ignore();
	}	
}
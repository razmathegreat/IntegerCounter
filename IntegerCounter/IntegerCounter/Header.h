#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#pragma once

//This is testing
class LineItem {	
private:
		int key;
		std::vector <double> input;	


public:
	LineItem(std::string);

	int getKey();
	std::vector<double> getIntegers();
};
	
LineItem::LineItem (std::string in) {
	
	std::vector< double > vect;
	std::stringstream ss(in);

	double j;
	int i;
	ss >> i;
	key = i;

	while (ss >> j) {
		vect.push_back(j);

		if (ss.peek() == '"' || ss.peek() == ',' || ss.peek() == ' ')
			ss.ignore();
	}	
	input = vect;
}
int LineItem::getKey() {
	return key;
}

std::vector<double> LineItem::getIntegers() {
	return input;
}
#include <string>;
#include <vector>;
#include <sstream>;
#pragma once
class LineItem {	
		int key;
		double input[];		
public:
	void setKey(int);
	void setDoubles(char[]);
};

void LineItem::setKey(int k) {
	key = k;
}
void LineItem::setDoubles(char* i) {
	
	vector<double> vect;
	stringstream ss(i);

	double j;

	while (ss >> i) {
		vect.push_back(j);

		if (ss.peek() == '"' || ss.peek() == ',' || ss.peek() == ' ')
			ss.ignore;
	}	
}
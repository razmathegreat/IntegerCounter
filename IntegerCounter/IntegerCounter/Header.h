#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "calculateNext.h"
#pragma once


class LineItem {	
private:
		int key;
		std::vector <double> input;	


public:
	LineItem();
	LineItem(std::string);

	int getKey();
	std::vector<double> getIntegers();
};
	
LineItem::LineItem (std::string in) {
	
	std::vector< double > vect;

	std::string delimiter = ",";
	size_t pos = 0;
	std:: string token;
	int i=0;
	in.erase(
		remove(in.begin(), in.end(), '\"'),
		in.end()
		);

	while ((pos = in.find(delimiter)) != std::string::npos)
	{
		token = in.substr(0, pos);
		in.erase(0, pos + delimiter.length());
		char* tarray = new char[token.length() + 1];
		strcpy(tarray, token.c_str());
		if (i == 0){
			key = stoi(token);
		}
		else{
			vect.push_back(stod(token));
		}
		i++;
	}
	vect.push_back(stod(in));
	input = vect;
};

bool writeFile(std::vector<LineItem> vect)
{
	std::ofstream out;
	double ans=0;
	int i = 0;
	int k = 0;
	out.open("./resources/Prediction.csv");
	out << "Id,Last\n";
	while (i<vect.size())
	{
		ans = calculateNextInSequence(vect.at(i).getIntegers());
		if (ans != -9999999){
			k++;
			cout <<"Sequence: "<< vect.at(i).getKey() << " Next integer: " << ans << endl;
		}
		if (ans != -9999999){
			out << vect.at(i).getKey() << "," << ans << "\n";
		}
		else{
			out << vect.at(i).getKey() << "," << "Could not find" << "\n";
		}
		i++;
	}
	cout << "Found solutions to " << (k * 100) / i << "%" << endl;
	out.clear();
	out.close();
	return true;
}

int LineItem::getKey() {
	return key;
}

std::vector<double> LineItem::getIntegers() {
	return input;
}
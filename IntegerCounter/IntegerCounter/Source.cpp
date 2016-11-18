#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Header.h"
#include "Algorithms\singleIncrement.h"
using namespace std;


int main() {
	int i = 0;
	string line;
	vector<LineItem> vect;
	ifstream file("./resources/test.csv");
	if (file.is_open()) {
		while (i < 100){
			getline(file, line);
			if (i != 0){
				LineItem Test(line);
				vect.push_back(Test);
				int j = 0;
			}

			i++;
		}
		file.close();
		if (singleIncrementFrontTest(vect.at(12).getIntegers())) {
		cout << "Front true \n";
		}
		else {
		cout << "Front false \n";
		}
		cout << line << '\n';
	}
	else cout << "Unable to open file";

	writeFile(vect);

	return 0;
}
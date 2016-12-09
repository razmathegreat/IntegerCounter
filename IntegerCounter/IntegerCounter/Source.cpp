#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Header.h"
#include "calculateNext.h"

using namespace std;


int main() {
	int i = 0;
	string line;
	vector<LineItem> vect;
	ifstream file("./resources/test.csv");
	if (file.is_open()) {
		while (i<20001){ //use "file.peek()!=EOF" to check the whole file
			getline(file, line);
			if (i != 0){
				LineItem Test(line);
				vect.push_back(Test);
			}
			i++;
		}
		file.close();
	}
	else cout << "Unable to open file";
	writeFile(vect);

	return 0;
}
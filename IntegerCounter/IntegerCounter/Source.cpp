#include <iostream>;
#include <fstream>;
#include <string>;
#include <vector>;
#include "Header.h";
using namespace std;


int main() {
	int i=0;
	string line;
	vector<LineItem> vect;
	ifstream file("./resources/test.csv");
	if (file.is_open()) {
		while (i < 100){
			getline(file, line);
			/*LineItem Test(line);
			vect.push_back(Test);
			cout << vect.at(1).getIntegers;*/
			cout << line << '\n';
			i++;
		}
		file.close();
	}
	else cout << "Unable to open file";
	cin >> i;
	
	
	return 0; 
}
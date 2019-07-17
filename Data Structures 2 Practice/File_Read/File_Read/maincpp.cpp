#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

	ifstream file;
	file.open("C:\\Users\\mitoo\\Desktop\\Data Structures 2 Practice\\File_Write\\File_Write\\Write.txt");

	if (!file.is_open()) {

		cout << "File not found\n";

	}
	else {

		cout << "Reading from file\n";
		string line;
		while (file.good()) { //while if there is more than one line
			getline(file, line);
			cout << line << endl;
		}
	}

	system("pause");
	return 0;
}
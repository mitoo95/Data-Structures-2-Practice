#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	fstream file;
	file.open("appending.txt", ios::in | ios::out | ios::app);

	if (!file.is_open()) {

		cout << "error opening file\n";
	}
	else {

		cout << "file opened succesfully\n";
		cout << "writing in file\n";

		file << "learning lad rocks\n";

		file.seekg(0);

		cout << "reading from file\n";
		string line;
		while (file.eof()) {

			getline(file, line);
			cout << line << endl;

		}
		
	}

	system("pause");
	return 0;
}
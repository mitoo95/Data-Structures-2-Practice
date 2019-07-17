#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream file;
	file.open("Create.txt", ios::in | ios::out | ios::trunc);

	if (!file.is_open()) {

		cout << "error while opening file\n";

	}
	else {
		//read or write of/to file
		cout << "File opened succesfully\n";
		file.close();

	}

	system("pause");
	return 0;

}
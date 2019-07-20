#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


int main() {

	char input[100];
	strcpy_s(input, "learning lad rocks\n");

	fstream file;
	file.open("binary_practice.dat", ios::in | ios::out | ios::binary | ios::trunc);

	if (!file.is_open()) {

		cout << "Error\n";

	}
	else {
		int l = strlen(input);
		for (int c = 0; c <= l; c++) {

			file.put(input[c]);

		}

		file.seekg(0);
		char ch;
		while (file.good()) {

			file.get(ch);
			cout << ch;

		}

	}

	system("pause");
	return 0;

}
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream file("Write.txt");

	if (!file.is_open()) {

		cout << "Unable to open file\n";

	}
	else {

		file << "Writing this sentence on file\n";
		file << "Just because I want to\n";

		file.close();
		cout << "Written on file successfully\n";

	}

	system("pause");
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//tellg y seekg se usan para localizar puntero de lectura
//tellp y seekp se usan para localizar puntero de escritura
//si se usa fstream el get y put pointer se comparte

int main() {

	ofstream file;
	file.open("position.txt", ios::out);

	if (!file.is_open()) {

		cout << "Error\n";

	}
	else {
		
		cout << file.tellp() << endl;
		file << "mito que onda";
		cout << file.tellp() << endl;
		file.seekp(5);
		file << "es otro pedo";
		cout << file.tellp() << endl;

	}


	/*ifstream file;
	file.open("position.txt", ios::in);

	if (!file.is_open()) {

		cout << "Error\n";

	}
	else {

		cout << file.tellg() << endl;
		string line;
		file.seekg(2);
		getline(file, line);
		cout << line << endl;

	}*/

	system("pause");
	return 0;
}
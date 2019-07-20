#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Person {

	char name[5];
	int age;
	
	public:
		Person() {

			strcpy_s(name, "noname");
			age = 0;

		}
		Person(const char* _name, int _age) {

			strcpy_s(this->name, _name);
			this->age = _age;

		}
		void whoAreYou() {

			cout << "My name is: " << name << " and I am " << age << " years old\n";

		}

};

int main() {

	Person mito("Mito", 23);

	fstream file;
	file.open("person_read_write.dat", ios::in | ios::out | ios::binary | ios::trunc);

	if (!file.is_open()) {

		cout << "Error\n";

	}
	else {

		file.write(reinterpret_cast<char *>(&mito), sizeof(Person));

		file.seekg(0);

		Person mm;

		file.read(reinterpret_cast<char *>(&mm), sizeof(Person));

		mm.whoAreYou();
		file.close();
	}

}
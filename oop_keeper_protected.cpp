#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Human {
protected:
	string name;
public:
	Human(string name) {
		this->name = name;
	}
};

class Keeper :public Human {
protected:
	int clean_sheets;
public:
	Keeper(string name, int clean_sheets) :Human(name) {
		this->clean_sheets = clean_sheets;
	}
	void vivod() const {
		cout << name << "-" << clean_sheets << endl;
	}
};

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	Keeper k1("Nikita", 6);
	k1.vivod();
}

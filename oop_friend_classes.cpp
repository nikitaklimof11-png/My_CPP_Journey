#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Futbolist {
private:
	string name;
	int zp;
public:
	Futbolist(string name,int zp) {
		this->name = name;
		if (zp < 0) {
			this->zp = 0;
		}
		else {
			this->zp = zp;
		}
	}
	void vivod() const {
		cout << name << "-" << zp << endl;
	}
	friend class FinanceController;
};

class FinanceController {
public:
	void bonus_game(Futbolist& f1, int bonus) {
		if (bonus > 0) {
			f1.zp += bonus;
		}
	}
};

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	Futbolist f1("Ronaldo", 500000);
	f1.vivod();
	FinanceController fin1;
	fin1.bonus_game(f1,150000);
	f1.vivod();
}

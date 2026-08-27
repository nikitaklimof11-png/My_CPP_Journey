#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

struct Tank {
	string name;
	int hp;
	int armor;
};

void show_tank(vector<Tank*> a) {
	for (int i = 0;i <2;i++) {
		cout << a[i]->name << " " << a[i]->hp << " " << a[i]->armor << endl;
	}
}
void upgrade_armor(Tank* a) {
	a->armor += 50;
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	Tank* p = new Tank{ "Is-7",100,50 };
	Tank* p2 = new Tank{ "t-34",70,25 };
	vector <Tank*> a;
	a.push_back(p);
	a.push_back(p2);
	show_tank(a);
	delete p;
	p = nullptr;
}

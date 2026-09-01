#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct Tank {
	string name;
	int hp;
	int armor;
};

void vvod_massiva(Tank *a,int size) {
	for (int i = 0;i < size;i++) {
		cout << i+1;
		cin >> a[i].name >> a[i].hp >> a[i].armor;
	}
}

void vivod_massiva(Tank* a, int size) {
	for (int i = 0;i < size;i++) {
		cout << i + 1 << a[i].name << endl << a[i].hp << endl << a[i].armor << endl;
	}
}
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	Tank* a = new Tank[5];
	vvod_massiva(a,5);
	vivod_massiva(a,5);
	delete[] a;
}

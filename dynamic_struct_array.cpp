#include <iostream>
#include <Windows.h>
using namespace std;

struct Tank {
	string name;
	int armor;
};

void vvod_hangar(Tank* &hangar, int &size) {
	for (int i = 0;i < size;i++) {
		cout << i + 1 << ".Tank name" << endl;
		cin >> hangar[i].name;
		cout  << "Tank armor" << endl;
		cin >> hangar[i].armor;
	}
}

void vivod_hangar(Tank*& hangar, int& size) {
	for (int i = 0;i < size;i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand()%15);
		cout << i + 1 << ".Tank name:"  << hangar[i].name << endl<< "Tank hp:" << hangar[i].armor << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
}



int main() {
	srand(time(0));
	int size;
	cout << "Size of hangar"<<endl;
	cin >> size;
	Tank* hangar = new Tank[size];
	vvod_hangar(hangar, size);
	vivod_hangar(hangar, size);
	delete[] hangar;
}

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Venicle {
protected:
	string name;
	int price;
public:
	Venicle(string name, int price) {
		this->name = name;
		if (price >= 0) {
			this->price = price;
		}
		else {
			this->price = 0;
		}
	}
	~Venicle() {
	}
};

class ElectricCar :public Venicle {
public:
	int batarey;
	ElectricCar(string name, int price, int batarey) :Venicle(name, price) {
		if (batarey >= 0) {
			this->batarey = batarey;
		}
		else {
			this->batarey = 0;
		}
	}
	void vivod() const {
		cout << name << "-" << price << "(" << batarey << "%)" << endl;
	}
	~ElectricCar(){
	}
};

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	string name;
	int price, batarey;
	cin >> name >> price >> batarey;
	ElectricCar v1(name, price, batarey);
	v1.vivod();
}

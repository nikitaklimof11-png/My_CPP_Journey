#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Venicle {
protected:
	string brand;
	int base_cost;
public:
	static int total_venicles;
	Venicle(string brand, int base_cost) {
		this->brand = brand;
		if (base_cost > 0) {
			this->base_cost = base_cost;
		}
		else {
			this->base_cost = 0;
		}
		total_venicles++;
	}
	virtual ~Venicle() {
		total_venicles--;
	}
	virtual void drive() const {
		cout << brand << " едет по стандартному маршруту." << endl;
	}
};

class SportCar :public Venicle {
public:
	SportCar(string brand, int base_cost):Venicle(brand,base_cost) {
	}
	void drive() const {
		cout << brand << " летит по трассе! Стоимость поездки с учётом спорт-режима:" <<base_cost*2<<"$"<<endl;
	}
};

class Truck :public Venicle {
public:
	Truck(string brand, int base_cost) :Venicle(brand, base_cost) {
	}
	void drive() const {
		cout << brand << " везёт сервера компании. Стоимость доставки: " << base_cost+500 << "$" << endl;
	}
};

int Venicle::total_venicles = 0;


int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout<<Venicle::total_venicles<<endl;
	Venicle* my_ride = new SportCar("Porsche", 300);
	my_ride->drive();
	cout << Venicle::total_venicles << endl;
	delete my_ride;
}

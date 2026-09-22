#include <iostream>
#include <Windows.h>
using namespace std;

class car
{
public:
	string brand;
	int price;

	car(string brand, int price) {
		this->brand = brand;
		this->price = price;
	}
	void print() const {
		cout << brand << "-" << price << endl;
	}

	~car() {
	}
};
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	const car etalon("Tesla", 45000);
	etalon.print();
}

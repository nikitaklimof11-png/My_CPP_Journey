#include <iostream>
#include <Windows.h>
using namespace std;

class car {
	public:
		string brand;
		int price;
		void vivod() {
			cout << brand << "-" << price;
		}
};

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	car my_car;
	cout << "Brand"<<endl;
	cin >> my_car.brand;
	cout << "Price:" << endl;
	cin >> my_car.price;
	my_car.vivod();
}

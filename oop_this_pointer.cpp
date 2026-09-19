#include <iostream>
#include <windows.h>
using namespace std;

class car {
private:
	int price;
public:
	void set_price(int price) {
		if (price < 0) {
			this->price = 0;
		}
		else {
			this->price = price;
		}
	}
	int get_price() {
		return price;
	}
};

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	car my_car;
	my_car.set_price(25000);
	cout << my_car.get_price();
}

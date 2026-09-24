#include <iostream>
#include <windows.h>

using namespace std;

class License {
private:
	static int itog;
	string name;
	int price;
public:
	License(string name,int price) {
		this->name = name;
		if (price <= 0) {
			this->price = 100;
		}
		else {
			this->price = price;
		}
		itog++;
	}
	static int itog_check() {
		return itog;
	}
	~License() {
		itog--;
	}
	int get_price() const {
		return price;
	}
};

int License::itog = 0;
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout << License::itog_check() << endl;
	License l1("ATOM-WIN-99", -50);
	cout << l1.get_price() << "$" << endl;
	cout << License::itog_check() << endl;
}

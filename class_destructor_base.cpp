#include <iostream>
#include <windows.h>
using namespace std;

class car {
public:
	string brand;
	car(string b) {
		brand = b;
		cout << "Машина " << brand << " успешно создана"<<endl;
	}
	~car() {
		cout << "Машина " << brand << " удалена"<<endl;
	}

};

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	{
		string a;
		cin >> a;
		car my_car(a);
		cout<< "Машина работает в ОЗУ..." << endl;
	}
}

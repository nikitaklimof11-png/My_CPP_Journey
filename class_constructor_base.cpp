#include <iostream>
#include <Windows.h>
using namespace std;


class Tank {
	public:
		string model;
		int hp;
		void vivod() {
			cout << model << endl << hp;
		}
		Tank(string a, int b) {
			model = a;
			hp = b;
		}
};

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	Tank a("T-34", 100);
	a.vivod();
}

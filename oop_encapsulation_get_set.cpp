#include <iostream>
#include <windows.h>
using namespace std;

class Tank {
private:
	int hp;
public:
	void set_hp(int a) {
		if (a < 0) {
			hp = 0;
		}
		else if (a > 100) {
			hp = 100;
		}
		else {
			hp = a;
		}
	}
	int get_hp() {
		return hp;
	}
};

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	Tank my_tank;
	my_tank.set_hp(500);
	cout << my_tank.get_hp();
}

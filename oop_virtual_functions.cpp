#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Employee {
public:
	virtual void work() {
		cout << "Сотрудник выполняет общую работу."<<endl;
	}
};

class Coach :public Employee {
public:
	void work(){
		cout << "Тренер проводит тактическую тренировку на поле!"<<endl;
	}
};

class GoalkeeperCoach :public Coach {
public:
	void work() {
		cout << "Тренер вратарей тренирует сухие выходы 1 в 1 и железные кисти!"<<endl;
	}
};

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	Employee* staff = new Coach();
	staff->work();
	delete staff;
}

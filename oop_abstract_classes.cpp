#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class BotCore {
public:
	virtual void start() const = 0;
};

class CarBot :public BotCore {
public:
	void start() const {
		cout << "--> Автомобильный бот Atom Company успешно запущен на сервере!"<<endl;
	}
};

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	BotCore* my_bot = new CarBot();
	my_bot->start();
	delete my_bot;
}

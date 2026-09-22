#include <iostream>
#include <Windows.h>
using namespace std;

class Serverlog
{
private:
	int errors_count;
public:
	Serverlog() {
		errors_count = 0;
		cout << "--> СИСТЕМА БЕЗОПАСНОСТИ ATOM COMPANY ЗАПУЩЕНА."<<endl;
	}
	void add_errors(int count) {
		if (count >= 0) {
			this->errors_count += count;
		}
	}

	int get_errors() const {
		return this->errors_count;
	}
	~Serverlog() {
		cout << "--> Логи успешно зашифрованы и сохранены в Knox-сейф."<<endl;
	}
};
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	Serverlog logger;
	logger.add_errors(-5);
	logger.add_errors(3);
	cout << "Критических сбоев на сервере: " << logger.get_errors() << endl;
}

#include <iostream>
#include <windows.h>

using namespace std;

class BankVault {
private:
	int balance;
public:
	BankVault(int balance) {
		this->balance = balance;
	}
	friend void agent_audit(BankVault& vault);
	~BankVault(){
	}
};

void agent_audit(BankVault& vault) {
	cout << "--> АГЕНТ: Баланс сейфа проверен напрямую: " << vault.balance << "$" << endl;
}
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	BankVault my_vault(50000);
	agent_audit(my_vault);
}

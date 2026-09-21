#include <iostream>
#include <windows.h>
using namespace std;

class Key{
public:
	int *id;
	Key(int val) {
		id = new int(val);
	}
	Key(const Key& other) {
		this->id = new int;
		*(this->id) = *(other.id);
		cout << "--> Сработало глубокое копирование памяти!"<<endl;
	}
	~Key() {
		delete id;
	}

};

int main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	Key k1(777);
	Key k2 = k1;
	cout << *(k1.id) << " " << *(k2.id) << endl;
}

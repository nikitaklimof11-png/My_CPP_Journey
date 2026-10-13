#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

void zapis_v_file() {
	ofstream file("database.txt");
	if (file.is_open()) {
		cout << " Файл открыт" << endl;
		file << "Atom Company 17 years" << endl;
		file.close();
		cout << "Файл закрыт"<<endl;
	}
}

void vivod_file() {
	string a ;
	ifstream file("database.txt");
	if (file.is_open()) {
		cout << " Файл открыт" << endl;
		getline(file, a);
		cout << a<<endl;
		file.close();
		cout << "Файл закрыт"<<endl;
	}
}


int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	zapis_v_file();
	vivod_file();
}

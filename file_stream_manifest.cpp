#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream file("atom_company.txt");
	if (file.is_open()) {
		file << "Welcome to Atom Company, bro!" << endl;
		file << "CEO: Nikita" << endl;
		file << "Hard Skills & Big Goals." << endl;
		file.close();
		cout << "Sucess";
	}
	else {
		cout << "Error";
	}
	ifstream file2("atom_company.txt");
	if (file2.is_open()) {
		string line;
		while (getline(file2, line)) {
			cout << line << endl;
		}
		file.close();
	}
	else {
		cout << "Error 2";
	}
}

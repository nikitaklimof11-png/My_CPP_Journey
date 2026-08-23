#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;
struct Tank {
	string name;
	int hp;
	int armor;
};
void vvod_vectora(vector<Tank> &a) {
	int i = 0;
	while (true) {
		Tank x;
		cout << i + 1 << ".";
		cout << "Tank name" << endl;
		getline(cin, x.name);
		if (x.name == "stop") {
			break;
		}
		cout << "Tank hp" << endl;
		cin >> x.hp;
		cout << "Tank armor" << endl;
		cin >> x.armor;
		cin.ignore();
		a.push_back(x);
		i++;
	}
}
void save_vector_to_file(const vector<Tank>& hangar, const string& filename) {
	ofstream file_out(filename);
	if (!file_out.is_open()) {
		cout << "Ошибка создания файла";
	}
	for (int i = 0;i < hangar.size();i++) {
		file_out << hangar[i].name << endl << hangar[i].hp << endl << hangar[i].armor<<endl;
	}
}
void load_vector_from_file(vector<Tank>& hangar, const string& filename) {
	ifstream file_in(filename);
	if (!file_in.is_open()) {
		cout << "Ошибка считывания файла";
	}
	Tank X;
	while (getline(file_in, X.name)) {
		file_in >> X.hp >> X.armor;
		file_in.ignore();
		hangar.push_back(X);
	} 
}

void vivod_vectora(const vector<Tank>& hangar) {
	for (int i = 0;i < hangar.size();i++) {
		cout << i + 1 << ". " << hangar[i].name << endl << hangar[i].hp << endl << hangar[i].armor << endl;
	}
}

int main() {
	SetConsoleCP(65001);    
	SetConsoleOutputCP(65001);
	vector<Tank> a;
	load_vector_from_file(a, "tanki.txt");
	vivod_vectora(a);
	return 0;
}

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Tank {
	string name;
	int armor;
};
void vvod_massiva(Tank* hangar, int size) {
	for (int i = 0;i < size;i++) {
		cin >> hangar[i].name >> hangar[i].armor;
	}
}

void zapis_massiva(Tank* hangar, int size) {
	ofstream file("hangar_save.txt");
	if (file.is_open()) {
		for (int i = 0;i < size;i++) {
			file << hangar[i].name << " " << hangar[i].armor << endl;
		}
		file.close();
		cout << "Zapis Sucess" << endl;
	}
	else
	{
		cout << "Zapis Error" << endl;;
	}
}

void auto_load_and_print() {
	int count=0; 
	string temp;
	ifstream file("hangar_save.txt");
	if (file.is_open()) {
		while (getline(file, temp)) {
			count++;
		}
		file.close();
		ifstream file2("hangar_save.txt");
		Tank* hangar_loaded = new Tank[count];
		for (int i = 0;i < count;i++) {
			file2 >> hangar_loaded[i].name >> hangar_loaded[i].armor;
			cout << hangar_loaded[i].name << " " << hangar_loaded[i].armor << endl;
		}
		file2.close();
		cout << "auto_load_and_print Sucess" << endl;
		delete[] hangar_loaded;
	}
	else {
		cout << "auto_load_and_print Error" << endl;
	}
}


int main() {
	int size;
	cin >> size;
	Tank* hangar = new Tank[size];
	vvod_massiva(hangar, size);
	zapis_massiva(hangar, size);
	delete[] hangar;
	cout << "New hangar:" << endl;
	auto_load_and_print();
}

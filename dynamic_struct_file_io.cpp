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

void vivod_from_file_in_massiv(Tank* hangar, int size) {
	ifstream file("hangar_save.txt");
	if (file.is_open()) {
		for (int i = 0;i < size;i++) {
			file >> hangar[i].name >> hangar[i].armor;
			cout << hangar[i].name <<" "<< hangar[i].armor << endl;
		}
	
		file.close();
		cout << "vivod_from_file Sucess" << endl;;
	}
	else {
		cout << "vivod_from_file Error"<<endl;
	}
}

int main() {
	int size;
	cin >> size;
	Tank* hangar = new Tank[size];
	vvod_massiva(hangar, size);
	zapis_massiva(hangar, size);
	delete[] hangar;
	Tank* hangar_loaded = new Tank[size];
	cout << "New hangar:" << endl;
	vivod_from_file_in_massiv(hangar_loaded, size);
	delete[] hangar_loaded;
}

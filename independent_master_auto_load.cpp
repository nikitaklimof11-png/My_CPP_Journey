#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct master {
	string name;
	int computers;
};

void vvod(master* a, int size) {
	for (int i = 0;i < size;i++) {
		cin >> a[i].name >> a[i].computers;
	}
}

void zapis(master* a, int size) {
	ofstream file("workers.txt");
	if (file.is_open()) {
		for (int i = 0;i < size;i++) {
			file << a[i].name << ' ' << a[i].computers << endl;
		}
		file.close();
		cout << "Zapis Sucess"<<endl;
	}
	else {
		cout << "Zapis Error"<<endl;
	}
}

void auto_load_and_print() {
	int count = 0;
	string temp;
	ifstream file("workers.txt");
	if (file.is_open()) {
		while (getline(file, temp)) {
			count++;
		}
		file.close();
		ifstream file2("workers.txt");
		master* a2 = new master[count];
		for (int i = 0;i < count;i++) {
			file2 >> a2[i].name >> a2[i].computers;
			cout << a2[i].name << " " << a2[i].computers << endl;
		}
		file2.close();
		cout << "auto_load_and_print Sucess" << endl;
		delete[] a2;
	}
	else {
		cout << "auto_load_and_print Error" << endl;
	}
}



int main() {
	int size;
	cin >> size;
	master* a = new master[size];
	vvod(a, size);
	zapis(a, size);
	delete[] a;
	auto_load_and_print();
}

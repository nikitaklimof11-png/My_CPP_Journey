#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void random_zapolnenie_massiva(int **a,int &r, int &c) {
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			a[i][j] = rand() % 9 + 1;
		}
	}
}
void zapis_v_file(int** a, int& r, int& c) {
	ofstream file("world.txt");
	if (file.is_open()) {
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				file << a[i][j] << " ";
			}
			cout << endl;
		}
		file.close();
		cout << "Zapis Sucess" << endl;
	}
	else {
		cout << "Zapis Error";
	}
}

void zapolnenie_from_file(int** a, int& r, int& c) {
	string l;
	ifstream file("world.txt");
	if (file.is_open()) {
		for (int i = 0;i < r;i++) {
			for (int j = 0;j < c;j++) {
				file >> a[i][j];
				cout << a[i][j]<<" ";
			}
			cout << endl;
		}
		file.close();
		cout << "Read Sucess";
	}
	else {
		cout << "Read Error";
	}
}

int main() {
	srand(time(0));
	int rows, cols;
	cin >> rows >> cols;
	int** map_core = new int*[rows];
	for (int i = 0;i < rows;i++) {
		map_core[i] = new int[cols];
	}
	random_zapolnenie_massiva(map_core, rows, cols);
	zapis_v_file(map_core, rows, cols);
	for (int i = 0;i < rows;i++) {
		delete[] map_core[i];
	}
	delete[] map_core;
	int** map_loaded = new int* [rows];
	for (int i = 0;i < rows;i++) {
		map_loaded[i] = new int[cols];
	}
	zapolnenie_from_file(map_loaded, rows, cols);
	for (int i = 0;i < rows;i++) {
		delete[] map_loaded[i];
	}
	delete[] map_loaded;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
void vvod_massiva(int** servers, int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			servers[i][j]=rand()%141+10;
		}
	}
}

void check_status(int** servers, int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			if (servers[i][j] <= 60) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << servers[i][j]<<" ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				cout << servers[i][j]<<" ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
		}
		cout << endl;
	}
}

void free_matrix(int** servers, int rows) {
	for (int i = 0;i < rows;i++) {
		delete[] servers[i];
	}
	delete[] servers;
}

int main() {
	srand(time(0));
	int rows, cols;
	cin >> rows >> cols;
	int** servers = new int* [rows];
	for (int i = 0;i < rows;i++) {
		servers[i] = new int [cols];
	}
	vvod_massiva(servers, rows, cols);
	check_status(servers, rows, cols);
	free_matrix(servers, rows);
}

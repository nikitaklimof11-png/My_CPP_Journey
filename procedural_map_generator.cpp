#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;


int main() {
	srand(time(0));
	int map_count = 0;
	while (true) {
		int world[10][10];
		int sm_world[10][10];
		for (int i = 0;i < 10;i++) {
			for (int j = 0;j < 10;j++) {
				world[i][j] = rand() % 9 + 1;
			}
		}
		//Вся центральная часть включая верх и низ кроме левого и правого края и углов
		for (int i = 0;i < 10;i++) {
			for (int j = 1;j < 9;j++) {
				if (i == 0) {
					sm_world[i][j] = (world[i][j - 1] + world[i][j] + world[i][j + 1] + world[i + 1][j]) / 4;
				}
				else if (i == 9) {
					sm_world[i][j] = (world[i][j - 1] + world[i][j] + world[i][j + 1] + world[i - 1][j]) / 4;
				}
				else {
					sm_world[i][j] = (world[i][j - 1] + world[i][j] + world[i][j + 1] + world[i - 1][j] + world[i + 1][j]) / 5;
				}
			}
		}
		//Левый край
		for (int i = 1;i < 9;i++) {
			sm_world[i][0] = (world[i][1] + world[i][0] + world[i + 1][0] + world[i - 1][0]) / 4;
		}
		//Правый край
		for (int i = 1;i < 9;i++) {
			sm_world[i][9] = (world[i][8] + world[i][9] + world[i + 1][9] + world[i - 1][9]) / 4;
		}
		//Углы
		sm_world[0][0] = (sm_world[0][1] + world[0][0] + sm_world[1][0]) / 3;
		sm_world[0][9] = (world[0][9] + sm_world[1][9] + sm_world[0][8]) / 3;
		sm_world[9][0] = (world[9][0] + sm_world[9][1] + sm_world[8][0]) / 3;
		sm_world[9][9] = (world[9][9] + sm_world[9][8] + sm_world[8][9]) / 3;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160);
		cout << " --- GENERATED MAP #" << map_count + 1 << " --- ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << endl << endl;
		//~ -река, цвет 3 или 9
		//. -равнина/песок, цвет 2 или 8
		//^ -скалы/горы, цвет 7 или 8
		for (int i = 0;i < 10;i++) {
			for (int j = 0;j < 10;j++) {
				if (sm_world[i][j] <= 3) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
					cout << "~" << " ";
				}
				else if (sm_world[i][j] <= 6) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << "." << " ";
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
					cout << "^" << " ";
				}
			}
			cout << endl;
		}
		map_count++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("pause");
		system("cls");
	}
}

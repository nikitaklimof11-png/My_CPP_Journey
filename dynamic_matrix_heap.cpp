#include <iostream>
using namespace std;
int main() {
	int** matrix = new int* [5];
	for (int i = 0;i < 5;i++) {
		matrix[i] = new int[5];
	}
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = i + j;
		}
	}
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0;i < 5;i++) {
		delete[] matrix[i];
	}
		delete[] matrix;
}

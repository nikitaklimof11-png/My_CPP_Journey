#include <iostream>
#include <ctime>
using namespace std;

void rebuild_map(int**& a, int new_rows, int new_cols) {
	a = new int*[new_rows];
	for (int i = 0;i < new_rows;i++) {
		a[i] = new int[new_cols];
	}
	for (int i = 0;i < new_rows;i++) {
		for (int j = 0;j < new_cols;j++) {
			a[i][j] = rand() % 10;
		}
	}

}

int main() {
	srand(time(0));
	int rows,cols;
	cin >> rows>>cols;
	int** a = nullptr;
	rebuild_map(a, rows, cols);
	cout << "NEW MAP:" << endl;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0;i < rows;i++) {
		delete[] a[i];
	}
	delete[] a;
}

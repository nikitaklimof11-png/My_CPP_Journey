#include <iostream>
using namespace std;


int main() {
	int a[4][4];
	int n = 0, sum = 0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			n++;
			a[i][j] = n;
		}
	}
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			if (i == j) {
				sum += a[i][j];
			}
		}
	}
	cout << sum;
}

#include <iostream>
using namespace std;


int main() {
	int x, y;
	cin >> x >> y;
	int a[10][10];
	int b[10][10];
	for (int i = 0;i < x;i++) {
		for (int j = 0;j < y;j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < y;i++) {
		for (int j = 0;j < x;j++) {
			b[i][j] = a[x-1-j][i];
		}
	}
	
	for (int i = 0;i < y;i++) {
		for (int j = 0;j < x / 2;j++) {
			swap(b[i][j], b[i][x - j - 1]);
		}
	}

	for (int i = 0;i < y;i++) {
		for (int j = 0;j < x;j++) {
			cout <<  b[i][j]<<" ";
		}
		cout<<endl;
	}
}

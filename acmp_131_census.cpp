#include <iostream>
using namespace std;

struct people {
	int age;
	int male;
};

int main() { 
	int n, itog, proverka=0;
	cin >> n;
	people a[100];
	for (int i = 0;i < n;i++) {
		cin >> a[i].age >> a[i].male;
	}
	for (int i = 0;i < n;i++) {
		if (a[i].male == 1) {
			itog = i;
			break;
		}
	}
	for (int i = 0;i < n;i++) {
		if (a[i].male == 1) {
			if (a[i].age > a[itog].age) {
				itog = i;
			}
				proverka++;
		}
	}
	if (proverka > 0) {
		cout << itog + 1;
	}
	else {
		cout << "-1";
	}
}

#include <iostream>
#include <Windows.h>
using namespace std;

void fun1() {
	cout << "A";
}

void fun2() {
	cout << "B";
}

void fun3() {
	cout << "C";
}

void process(void (*a[])(), int choise) {
	a[choise]();
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int choise;
	void (*a[])() = { fun1,fun2,fun3 };
	cin >> choise;
	process(a, choise);
}

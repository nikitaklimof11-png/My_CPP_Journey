#include <iostream>
#include <Windows.h>
using namespace std;

void on_tank_destroyed() {
	cout << "--> Начислено +100 золота. Экипаж эвакуирован.";
}

void on_base_captured() {
	cout << "--> Победа! База полностью захвачена.";
}

void on_low_health() {
	cout<<"--> Критический урон! Включен аварийный ремонт.";
}

void(*events[])();

void process(void (*a[])(), int choise) {
	a[choise]();
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int choise;
	void (*event[3])() = { on_tank_destroyed, on_base_captured, on_low_health };
	cin >> choise;
	process(event, choise);
}

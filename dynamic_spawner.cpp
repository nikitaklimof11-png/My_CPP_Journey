#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

struct Enemy {
	string name;
	int hp;
};
void vvod_vectora(vector<Enemy*>& a) {
	for (int i = 0;i < 3;i++) {
		Enemy *p=new Enemy;
		p->name = "Zombie_Enemy";
		p->hp = 50;
		a.push_back(p);
	}

}
void spawn_vragov(vector<Enemy*>& a) {
	for (int i = 0;i < a.size();i++) {
		cout << i + 1 << ". " << a[i]->name << " " << a[i]->hp << endl;
	}
}
void zachistk(vector<Enemy*>& a) {
	for (int i = 0;i < a.size();i++) {
		delete a[i];
	}
	a.clear();
}
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	vector<Enemy*> a;
	vvod_vectora(a);
	spawn_vragov(a);
	zachistk(a);
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Tank {
	string name;
	int hp;
	int armor;
	int damage;
};

void vvod_vectors(vector<Tank>& a) {
	int i = 0;
	while (true) {
		Tank x;
		cout << i + 1 << ".";
		cout << "Tank name" << endl;
		getline(cin,x.name);
		if (x.name == "stop") {
			break;
		}
		cout << "Tank hp" << endl;
		cin >> x.hp;
		cout << "Tank armor" << endl;
		cin >> x.armor;
		cout << "Tank damage" << endl;
		cin >> x.damage;
		cin.ignore();
		a.push_back(x);
		i++;
	}
}
void show_rating_hp_tanks(vector<Tank>& a) {
	for (int step = 0; step < a.size() - 1; step++) {
		bool swaped = false;
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].hp < a[i + 1].hp) {
				swap(a[i], a[i + 1]);
				swaped = true;
			}
		}
		if (swaped == false) {
			break;
		}
	}
	cout << "Rating hp tank:" << endl;
	for (int i = 0;i < a.size();i++) {
		cout << i + 1 << "-" << a[i].name << "(" << a[i].hp << " " << "hp" << ")" <<endl;
	}
}

void show_rating_armor_tanks(vector<Tank>& a) {
	for (int step = 0; step < a.size() - 1; step++) {
		bool swaped = false;
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].armor < a[i + 1].armor) {
				swap(a[i], a[i + 1]);
				swaped = true;
			}
		}
		if (swaped == false) {
			break;
		}
	}
	cout << "Rating armor tank:" << endl;
	for (int i = 0;i < a.size();i++) {
		cout << i + 1 << "-" << a[i].name << "("<<a[i].armor<<" "<< "pts."<<")"<<endl;
	}
}

void show_rating_damage_tanks(vector<Tank>& a) {
	for (int step = 0; step < a.size() - 1; step++) {
		bool swaped = false;
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].damage < a[i + 1].damage) {
				swap(a[i], a[i + 1]);
				swaped = true;
			}
		}
		if (swaped == false) {
			break;
		}
	}
	cout << "Rating damage tank:" << endl;
	for (int i = 0;i < a.size();i++) {
		cout << i + 1 << "-" << a[i].name << "(" << a[i].damage << " " << "dmg" << ")" << endl;
	}
}


int main() {
	vector<Tank> a;
	vvod_vectors(a);
	show_rating_hp_tanks(a);
	show_rating_armor_tanks(a);
	show_rating_damage_tanks(a);
}

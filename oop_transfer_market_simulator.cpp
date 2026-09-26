#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

class Player {
private:
	static int kol_vo;
	static int all_price;
	string name;
	string club;
	int price;
public:
	Player(string name, string club, int price) {
		this->name = name;
		this->club = club;
		if (price < 0) {
			this->price = 0;
		}
		else {
			this->price=price;
		}
		kol_vo++;
		all_price += this->price;
	}
	static int kol_vo_check() {
		return kol_vo;
	}
	~Player() {
		kol_vo--;
		all_price -= this->price;
	}
	void vivod_player_stats() const {
		cout << "📋[PLAYER] ──────────────────────────" << endl;
		cout << "👤 Name:  " << name<<endl;
		cout << "🛡️ Club:  " << club<<endl;
		cout << "💵 Price: " << price << "€" << endl;
		cout << "────────────────────────────────────"<<endl;
	}
	static int all_price_check() {
		return all_price;
	}
};

int Player::kol_vo = 0;
int Player::all_price = 0;

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout << Player::kol_vo_check() << " players-" << Player::all_price_check() << "€" << endl;
	Player p1("Mbappe", "Real Madrid", 200000000);
	Player p2("Yamal", "Barcelona", 220000000);
	p1.vivod_player_stats();
	p2.vivod_player_stats();
	cout<< Player::kol_vo_check() <<" players-" << Player::all_price_check()<<"€" << endl;
}

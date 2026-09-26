#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
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
	}
	
	static int all_price_check() {
		return all_price;
	}
	static void vivod_vector(vector<Player> &transfer) {
		int price_club = 0;
		if (transfer.empty()) {
			cout << "List is empty" << endl;
		}
		else {
			for (int i = 0; i < transfer.size(); i++) {
			for (int j = i + 1; j < transfer.size(); j++) {
				if (transfer[i].club > transfer[j].club) {
					swap(transfer[i], transfer[j]);
				}
				else if ((transfer[i].club == transfer[j].club) && (transfer[i].price < transfer[j].price)) {
					swap(transfer[i], transfer[j]);
				}
			}
			}
			cout << transfer[0].club << ":" << endl;
			for (int i = 0;i < transfer.size()-1;i++) {
				cout << transfer[i].name << " - " << transfer[i].price << "€" << endl;
				price_club += transfer[i].price;
				if (transfer[i].club != transfer[i + 1].club) {
					cout << "CLUB PRICE --- " << price_club << "€" << endl;
					price_club = 0;
					cout<< transfer[i+1].club << ":" << endl;
				}
			}
			cout << transfer[transfer.size()-1].name << " - " << transfer[transfer.size()-1].price << "€" << endl;
			cout << "CLUB PRICE --- " << price_club+ transfer[transfer.size() - 1].price << "€" << endl;
		}	
		}
};

int Player::kol_vo = 0;
int Player::all_price = 0;

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	vector<Player> transfer;
	while (true) {
		string a, b;
		int c;
		cout << Player::kol_vo_check() + 1 << ".";
		cout << "Enter the player name" << endl;
		getline(cin, a);
		if (a == "stop") {
			break;
		}
		cout << "Enter the player club" << endl;
		getline(cin, b);
		cout << "Enter the player price" << endl;
		cin >> c;
		cin.ignore();
		transfer.push_back(Player(a, b, c));
	}
	Player::vivod_vector(transfer);
}

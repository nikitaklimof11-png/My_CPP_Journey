#include <iostream>
#include <windows.h>

using namespace std;

class Futbolist {
private:
	static int kol_vo;
	string name;
	int rate;
public:
	Futbolist(string name, int rate) {
		this->name = name;
		if (rate < 0) {
			this->rate = 0;
		}
		else if (rate > 100) {
			this->rate = 99;
		}
		else {
			this->rate = rate;
		}
		kol_vo++;
	}
		~Futbolist(){
			kol_vo--;
		}
		int static kol_vo_check() {
			return kol_vo;
	}
		void get_futbolist() const {
			cout << name<<" - "<<rate<<endl;
	}
};

int Futbolist::kol_vo = 0;
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout << Futbolist::kol_vo_check() << endl;
	Futbolist f1("Mbappe", 91);
	f1.get_futbolist();
	cout << Futbolist::kol_vo_check() << endl;
}

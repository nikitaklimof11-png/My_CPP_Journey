#include <iostream>
using namespace std;

void speed_boost() {
    cout<<"--- AFTERBURNER ACTIVATED: Speed ​​+30% ---";
}

void shield_wall() {
    cout << "--- SHIELD ACTIVATED: Armor +50% ---";
}

void double_damage() {
    cout << "--- CRIT ACTIVATED: 2x Damage ---";
}


int main() {
    void (*inventory[3])();
    inventory[0] = speed_boost;
    inventory[1] = shield_wall;
    inventory[2] = double_damage;
    int choise;
    cin >> choise;
    inventory[choise]();
}

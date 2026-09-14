#include <iostream>
using namespace std;

void laser_attack() {
    cout << "--- LASER BLAST ---" << endl;
}

void plasma_attack() {
    cout << "=== PLASMA BURST ===" << endl;
}

int main() {
    void (*weapon_ptr)();

    weapon_ptr = laser_attack;
    weapon_ptr(); 

    weapon_ptr = plasma_attack;
    weapon_ptr();
}

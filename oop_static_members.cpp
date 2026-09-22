#include <iostream>
#include <Windows.h>
using namespace std;

class Server
{
public:
	string name;
	static int online_servers;
	Server(string name) {
		this->name = name;
		online_servers++;
	}
	~Server() {
		online_servers--;
	}
};
int Server::online_servers = 0;
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	Server s1("Центральный");
	Server s2("Резервный");
	cout << "Серверов Atom Company в сети: " << Server::online_servers << endl;
}

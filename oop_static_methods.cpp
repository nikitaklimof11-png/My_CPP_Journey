#include <iostream>
#include <Windows.h>
using namespace std;

class Server
{
private:
	static int online_servers;
public:
	string name;
	Server(string name) {
		this->name = name;
		online_servers++;
	}
	~Server() {
		online_servers--;
	}
	static int get_online_count() {
		return online_servers;
	}
};
int Server::online_servers = 0;
int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	cout << Server::get_online_count() << endl;
	Server s1("Главный");
	cout << Server::get_online_count() << endl;
}

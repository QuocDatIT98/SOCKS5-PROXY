#include<iostream>

using namespace std;

#include "..\Lib\include\Socks5Server.h"

#if _DEBUG
	#pragma comment(lib,"..\\Lib\\Debug\\Socks5Server.lib") 
#else
	#pragma comment(lib,"..\\Lib\\Release\\Socks5Server.lib") 
#endif

int main()
{
	//222.252.11.121
	char ip[16];
	int port;
	cout << "Enter IP(e.g. 222.252.11.121 ): ";
	cin >> ip;
	cout << "Enter Port(e.g. 1080 ): ";
	cin >> port;
	
	auto server = CSOCK5SERVER(ip, port);
	server->Listen(5398, 10);
	server->StartServer();

	return 0;

}
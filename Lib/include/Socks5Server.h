__interface ICMultithreadedServer
{
	bool Listen(int port, int backlog);
	void StartServer();
};

ICMultithreadedServer* CSOCK5SERVER();
ICMultithreadedServer* CSOCK5SERVER(char IpNextServer[], int PortNextServer);
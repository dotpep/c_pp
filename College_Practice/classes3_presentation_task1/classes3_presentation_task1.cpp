#include <iostream>


using namespace std;

void privilageOfAdmin() {
	cout << "admin can check and change Audit data" << endl;
	cout << "--------" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "--------" << endl;
	cout << "Admin" << endl;
}

void privilageOfUser() {
	cout << "user can view Audit data" << endl;
	cout << "--------" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "some data" << endl;
	cout << "--------" << endl;
	cout << "User" << endl;
}


int authToWeb(string name, int password) {

	if (name == "admin" and password == 9999)
	{
		cout << endl;
		cout << "Admin success logined" << endl;
		cout << "--------" << endl;
		privilageOfAdmin();
	}
	else if (name == "user" and password == 1234)
	{
		cout << endl;
		cout << "User success logined" << endl;
		cout << "--------" << endl;
		privilageOfUser();
	}
	else
	{
		cout << "Account not found! or incorrect Password!" << endl;
	}

	return 0;
}

int main()
{
	//string name;
	//cout << "Account name: ";
	//cin >> name;

	//int password;
	//cout << "Password (4 symbols): ";
	//cin >> password;


	//authToWeb(name, password);
	
	int generate;
	
	authToWeb("admin", 1234);
	authToWeb("admin", generate);
	authToWeb("user", 1234);
}
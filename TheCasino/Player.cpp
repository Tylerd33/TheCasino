#include "BasicROM.h"
#include "TextLib.h"
using namespace std;

class Player {
	int balance;
	string password;

	Player() {
		cout << "Enter a password to your account, make sure you never forget it\nYou will lose access to your account if you forget it" << endl;
		cin >> password;
		//TEMPORARY ONLY NEEDS TO BE REPLACED!!!!!
		balance = 200;
		password = "halflife";
	}
};








//ofstream MyFile("BalanceROM.txt");
//MyFile.close();
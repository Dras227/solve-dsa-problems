#include <bits/stdc++.h>
#include <math.h>
#include <stdlib.h>
#include<iostream>
#include<string.h>
#include <exception>

using namespace std;


int pass(int item)
{
	cin >> item;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		std::cout << "Bad entry.  Enter a NUMBER: ";
		std::cin >> item;
	}
	return item;
}
float pass(float item)
{
	cin >> item;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		std::cout << "Bad entry.  Enter a NUMBER: ";
		std::cin >> item;
	}
	return item;
}
class trans                                                                                     //trans is the class which acommadates the transaction
{
public: float dep = 0, bal = 0, penal = -1, withd = 0, tp = 0, tc = 0;
	void deposit()
	{
		float dep = 0;
		cout << "\n" << "\nENTER THE DEPOST AMOUNT:";
		dep = pass(dep);
		while (dep <= 0)
		{
			cout << "\nAMOUNT CANNOT BE DEPOSITABLE.\nENTER THE DEPOSIT AMOUNT AGAIN:";
			dep = pass(dep);
		}
		bal += dep;

		cout << "\n" << dep << " IS CREDITED TO YOUR ACCOUNT.\n";
	}

	void withdraw()
	{

		float withd = 0;

		cout << "\nENTER THE AMOUNT TO BE WITHDRAWN:";

		withd = pass(withd);
		while (withd <= 0)
		{
			cout << "\nAMOUNT CANNOT BE DISPENSABLE.\nENTER THE WITHDRAWAL AMOUNT AGAIN:";
			withd = pass(withd);
		}

		bal -= withd;
		if (bal < 0)
		{
			bal += withd;
			cout << "YOUR ACCOUNT BALANCE IS:" << bal;
			cout << "\nREQUESTED AMOUNT " << withd << " IS NOT DISPENSABLE\n";
			return;
		}
		cout << "\n" << withd << " IS DEBITED FROM YOUR ACOOUNT.\n";


	}

	void penalty()
	{
		float penal = 0;

		if (bal < 500) penal = bal - (bal - 0.05 * bal);
		tp += penal;
		if (penal > 0)    cout << "\nPENALTY=" << penal;
		bal -= penal;
	}

	void balance()
	{
		cout << "\nYOUR ACCOUNT BALANCE IS :" << bal << "\n";
	}

	void compond_int()
	{
		float famount, camount;

		camount = (bal + (bal * 0.05)) - bal;
		tc += camount;
		famount = camount + bal;

		bal += camount;

		cout << "\nINTEREST:" << camount;
	}


};
class account
{
public: string name, an, email, password;
	int type = -1;
	int check_credentials(account a[]);
	int viewAccount(string filename, string t);
	void input_details()
	{
		cout << "\nENTER THE NAME:";
		cin >> name;
		cout << "\n1:CURRENT 2:SAVINGS\n";
		type = pass(type);
		cout << "\nENTER THE ACCOUNT NUMBER:";
		cin >> an;
		cout << "\nENTER YOUR EMAIL:"; cin >> email;
		cout << "\nENTER YOUR PASSWORD:"; cin >> password;
		return;
	}
	void details()
	{
		cout << "\nNAME:" << name;
		cout << "\nACCONT NUMBER:" << an;

		if (type == 1)cout << "\nACCOUNT TYPE:" << "CURRENT";
		else   cout << "\nACCOUNT TYPE:" << "SAVINGS";


	}
};
int do_transactions(account a[], trans s[], int count)
{
	switch (a[count].type)
	{

	case 1: a[count].details(); //current account= 1
		cout << "\n\nIMPORTANT NOTE:\nSince you have choosen CURRENT ACCOUNT you got to maintain a mininmum balance of 500.\nIf you fail to maintain minimum balance 5% service charge will be imposed on you for every transaction you make.";
		for (;;)
		{

			cout << "\n\n1:DEPOSIT\n2:WITHDRAWAL\n3:BALANCE\n4:ACCOUNT DETAILS\n5:EXIT\n\nENTER YOUR CHOICE:";
			int choice;
			choice = pass(choice);
			system("clear");

			switch (choice)
			{
			case 1: s[count].deposit();
				s[count].penalty();
				s[count].balance();
				break;
			case 2: s[count].withdraw();
				s[count].penalty();
				s[count].balance();
				break;
			case 3: s[count].balance();
				break;
			case 4: a[count].details();
				break;
			case 5: return 69;
			default: cout << "\nINVALID CHOICE\n";
				break;
			}

		}
		break;
	case 2: a[count].details();
		cout << "\n\nIMPORTANT NOTE:\nSince you have chosen savings accout you will get interest of 4% for every deposit you make.\nSo you will get to more deposits.HAPPY BANKING!!!\n";
		for (;;)
		{
			cout << "\n1:DEPOSIT\n2:WITHDRAWAL\n3:BALANCE\n4:ACCOUNT DETAILS\n5:EXIT\n\nENTER YOUR CHOICE:";
			int choice;
			choice = pass(choice);
			system("clear");
			switch (choice)
			{
			case 1: s[count].deposit();
				s[count].compond_int();
				s[count].balance();
				break;
			case 2: s[count].withdraw();
				s[count].balance();
				break;

			case 3: s[count].balance();
				break;

			case 4: a[count].details();
				break;
			case 5: return 420;
			default: cout << "\nINVALID CHOICE\n";
				break;
			}

		}
		break;
	default: cout << "\nINVALID CHOICE";
		return 360;


	}
}
int account::check_credentials(account a[])
{
	int i, check = -1, limit = 3;
	string email, password;
	cout << "\nPLEASE ENTER YOUR EMAIL ID:";
emailid:
	cin >> email;
	string f[10000];
	for (int i = 0; i < 10000; i += 1)
	{
		string fi = "user";
		f[i] = fi + to_string(i);
	}

	for (int i = 0; i < 2; i += 1) {
		// a[i].input_details();
		// b = a[i].storeAccount(f[i]);
		check = a[i].viewAccount(f[i], email);
	}

	if (check < 0 && limit > 0)
	{
		cout << "\nUSER NOT FOUND!! \n" << limit-- << " TRIES REMAINIG\n" << "\nKINDLY ENTER YOUR EMAIL ID AGAIN:\n";
		goto emailid;
	}
	else if (limit == 0)
	{
		cout << "\nLIMIT EXCEEDED!!\nYOU SEEMS MORE LIKE A NEW USER.\nCREATE A NEW ACCOUNT TO START BANKING WITH US.\n";
		return -1;
	}
	else
	{
		limit = 3;
		cout << "\nWELCOME Mr." << a[i].name << "\nENTER YOUR PASSWORD TO PROCEED FURTHER:";

pass:
		cin >> password;
		if (password != a[i].password && limit)
		{
			cout << "\nYOUR PASSWORD IS INCORRECT!\n" << limit-- << " TRIES REMAINIG\n" << "\nKINDLY ENTER YOUR PASSWORD AGAIN:";
			goto pass;
		}
		else if (limit == 0)
		{
			cout << "\n\aLIMIT EXCEEDED!!THANK YOU!";
			return -2;
		}
		else
		{
			cout << "\nYOU HAVE SUCCESSGFULLY LOGGED IN TO YOUR ACCOUNT!!\n" << "\n";
			return i;
		}
	}
	return -1000;
}
int account::viewAccount(string filename, string t)
{
	ifstream fin;

	fin.open(filename, ios::in);
	if (fin.eof())
		cout << "\nFile not found!.";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.good()) {
			fin.read((char *)this, sizeof(*this));
		}
		if (name == t)
		{
			details();
			return 1;
		}
	}
	fin.close();
	return 0;
}
void admin_show(account a[], trans b[], int );
int main()
{
	int count = -1, t = -100, i;
	account man;
	account a[10000];
	trans b[10000];
	int mainchoice;
	//Initializing the names for all the user documents
	string f[10000];
	int j = 0;
	for (int i = 0; i < 10000; i += 1)
	{
		string fi = "user";
		f[i] = fi + to_string(i);
	}
	//END INITIALIZING
	for (;;)
	{
		cout << "\nWELCOME TO BANK";
		cout << "\n1:LOGIN\n2:CREATE ACCOUNT\n3:EXIT\n" << "\nENTER YOUR CHOICE:";
		mainchoice = pass(mainchoice);
		system("clear");
		if (mainchoice == 1)
		{
			int d = man.check_credentials(a);  // here in i contains index of the object which
			if (d < 0)                 //contains the user details
			{
				cout << "\n\n\n\n";
			}
			else  t = do_transactions(a, b, d);

		}
		else if (mainchoice == 2)
		{
			count += 1;
			a[count].input_details();
			t =  do_transactions(a, b, count);
		}
		else if (mainchoice == 3)
		{
			cout << "\n\nTHANKS FOR CHOOSING US!!HAVE A GOOD DAY :)\n\n";
			return 0;
		}
		else if (mainchoice == 9380100)
		{
			admin_show(a, b, count);
		}
		else
		{
			cout << "\nINVALID CHOICE!!\n";

		}
	}

	return 0;

}

void admin_show(account a[], trans b[], int count)
{
	cout << "\nWELCOME Mr.ADMIN\n";
	for (;;)
	{

		cout << "\n\n1:TOTAL MONEY\n2:EMAIL ID AND PASSWORD\n3:NAME AND MONEY\n4:EXIT TO USER MODE\n\n\aENTER YOUR CHOICE:";
		int choice = pass(choice);
		system("clear");
		if (count < 0 && choice != 4)
		{
			cout << "\n0 ACCOUNTS FOUND";
			continue;
		}
		int sum = 0, tpenal = 0, tcompound = 0;
		switch (choice)
		{
		case 1: for (int i = 0; i <= count; i += 1)
			{
				sum += b[i].bal;
				tpenal += b[i].tp;
				tcompound += b[i].tc;
			}
			cout << "\nTOTAL AMOUNT IN THE BANK IS:" << sum;
			cout << "\nTOTAL PENALTY AMOUNT:" << tpenal;
			cout << "\nTOTAL INTEREST AMOUNT:" << tcompound;
			if (tpenal > tcompound) cout << "\nAS YOU CAN SEE BANK IS IN PROFIT \n";
			else cout << "\nAS YOU CAN SEE BANK IS IN LOSS";
			break;

		case 2: for (int i = 0; i <= count; i += 1)
			{
				cout << "\nEMAIL ID:" << a[i].email;
				cout << "\nPASSWORD:" << a[i].password;
				cout << "\n\n";
			}
			break;
		case 3: for (int i = 0; i <= count; i += 1)
			{
				cout << "\nNAME:" << a[i].name;
				cout << "\nMONEY:" << b[i].bal;
				cout << "\n\n";
			}
			break;

		case 4: cout << "\n\nGOOD BYEEEEEEEEEEEEEEE!!!!\n\n\n\n";
			return;
		}

	}
}
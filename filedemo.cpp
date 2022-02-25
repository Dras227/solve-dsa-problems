#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
class account
{
public: char name[20], an[20], email[20], password[20];
	int type = -1;

	void input_details()
	{
		cout << "\nENTER THE NAME:";
		cin >> name;
		cout << "\n1:CURRENT 2:SAVINGS\n";
		cin >> type;
		cout << "\nENTER THE ACCOUNT NUMBER:";
		cin >> an;
		cout << "\nENTER YOUR EMAIL:"; cin >> email;
		cout << "\nENTER YOUR PASSWORD:"; cin >> password;
		return;

		account a;

	}
	void details()
	{
		cout << "\nNAME:" << name;
		cout << "\nACCONT NUMBER:" << an;
		cout << "\nEMAIL:" << email;
		cout << "\nPASSWORD:" << password;
		if (type == 1)cout << "\nACCOUNT TYPE:" << "CURRENT";
		else   cout << "\nACCOUNT TYPE:" << "SAVINGS";

	}
	int viewAccount(string filename, string t);
	int storeAccount(string filename);
	account()
	{
		type = -1;
		strcpy(name, "NO NAME");
		strcpy(an, "empty");
		strcpy(email, "empty");
		strcpy(password, "empty");

	}

};

int account::storeAccount(string filename)
{
	if (type == -1)
	{
		cout << "\naccount data not initialized!\n";
		return 0;
	}
	else {
		ofstream fout;
		fout.open(filename, ios::app | ios::binary);
		fout.write((char *)this, sizeof(*this));
		fout.close();
		return 0;
	}
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
int main()
{
	string f[10000];
	for (int i = 0; i < 10000; i += 1)
	{
		string fi = "user";
		f[i] = fi + to_string(i);
	}
	account a[2];
	string t;
	cout << "\nENTER THE USER NAME:";
	cin >> t;
	int b;
	for (int i = 0; i < 2; i += 1) {
		// a[i].input_details();
		// b = a[i].storeAccount(f[i]);
		b = a[i].viewAccount(f[i], t);
		if (b == 1) break;
	}
	if (b == 0) cout << "USER NOT FOUND";
	return 0;
}
/*search(string f[],account a[])
{
	{	int i = 0;
	ifstream fin;
	while (1)
	{
		fin.open(f[i++], ios::in);
		if (fin.eof())
			cout << "\nFile not found!.";
		else
		{
			fin.read((char *)this, sizeof(*this));
			while (!fin.good()) {

				details();
				fin.read((char *)this, sizeof(*this));
			}
			if (t == name)
			{
				cout << "\nUSER DETAILS FOUND!!"
				     details();
				return 1;
			}
		}
		fin.close();
		return 0;
	}
}*/








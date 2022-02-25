#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int i, j; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
bool check(string passwd)
{
	int i = 0;
	if (passwd.length() < 10)return false;
	bool lower = false, upper = false, digit = false, special = false;
	while (passwd[i] != '\0')
	{
		if (passwd[i] >= 'A' and passwd[i] <= 'Z')
		{
			if (i != 0 and i != passwd.length() - 1) upper = true;
		}

		if (passwd[i] >= 'a' and passwd[i] <= 'z')
			lower = true;

		if (passwd[i] >= '0' and passwd[i] <= '9')
			if (i != 0 and i != passwd.length() - 1) digit = true;

		if (passwd[i] == '@' or passwd[i] == '#' or passwd[i] == '%' or passwd[i] == '&' or passwd[i] == '?')
			if (i != 0 and i != passwd.length() - 1) special = true;

		if (lower == true and upper == true  and digit == true and special == true) return true;
		else i++;
	}
	if (lower == true and upper == true  and digit == true and special == true) return true;
	else return false;
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;

	cin >> t;

	while (t--)
	{
		string passwd;
		cin >> passwd;

		if (check(passwd)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}

	// problem link:https://www.codechef.com/COOK126C/problems/PASSWD
}
/*
debugged history

*/
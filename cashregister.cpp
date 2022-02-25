#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	
	int bill,cash;

	cin >> bill >> cash;


	if(bill>cash)
	{
		string rup = bill-cash > 1 ? " ruppees":" PPruppee";
		cout << "Customer has to give " << bill-cash <<rup << " more ";
		return;
	}

	if(bill == cash)
	{
		cout << "Customer has given the exact bill amount" << endl;
	}
	int remain = cash - bill;
	int amount[] = {2000,200,100,50,20,10,5,2,1};
	map<int,int> notes;

	notes.insert({2000,0});
	notes.insert({100,0});
	notes.insert({200,0});
	notes.insert({50,0});
	notes.insert({20,0});
	notes.insert({10,0});
	notes.insert({5,0});
	notes.insert({2,0});
	notes.insert({1,0});

	int i=0;
	while(remain > 0 )
	{
		// if the cash is less than the amount note then 
		// move onto lesser note
		if(remain<amount[i])
		{ 
			i++;continue;
		}

		remain = remain - amount[i];
		notes[amount[i]]+=1;
	}

	for(auto note:notes)
		cout << note.first << " " << note.second << endl;
}

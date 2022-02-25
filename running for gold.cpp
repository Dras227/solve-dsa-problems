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
int past[50000][5];
void upDateGold(int athNo,int &gold)
{
	
	int ans=0;
	
	int m = 0;
	rep(m,5)
	{
		if(past[gold][m] <= past[athNo][m])
					ans++;
	}

	if(ans>3) gold = athNo;

}
void solver()
{
	int nA;
	cin >> nA;

	

	i=0,j=0;int gold = 0;
	rep(i,nA)
	{
		rep(j,5)
		{
			cin >> past[i][j];
		}
		upDateGold(i,gold);

	}

	i=0;
	rep(i,nA)
	{
		if(i==gold)
			break;
		if(gold[i]<)
	}



}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int t;
	cin >> t;

	while(t--)
	{
		solver();
	}
}
	
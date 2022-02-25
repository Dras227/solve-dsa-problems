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
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
string sol(vector<int> &v,int n,int k)
{
	int dp[k+1];
	memset(dp,0,sizeof dp);

	
	for(int i=0;i<=k;i++)
	{
		for(auto moves:v)
		{
			if(moves > i) continue;
			if(dp[i-moves] == 0)
			{
				dp[i] = 1;
			}
		}
	}
	repr(i,0,k) cout << dp[i];
	//cout << endl;
	return dp[k]?"First":"Second";
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,k;

	cin >> n >> k;
	vector<int> v(n);
	rep(i,n) cin >> v[i];

	cout << sol(v,n,k);


	// problem link: https://atcoder.jp/contests/dp/tasks/dp_k
}
/*
debugged history

*/
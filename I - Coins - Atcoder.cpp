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
double dp[3001][3001];
double sol(double *p,int i,int x)
{
	if(x==0) // this means probabality of getting atleast 0 heads is 1 
		return 1;	//since we can get atleast 0 heads or more every time when we tossthe  coin
	if(i==0)
		return 0;

	if(dp[i][x] > -0.9)
		return dp[i][x];

	return dp[i][x] = (p[i] * sol(p,i-1,x-1)) + (1 - p[i]) * sol(p,i-1,x);
}	
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n;

	cin >> n;

	memset(dp,-1,sizeof(dp));

	double p[n];
	repr(i,1,n)
	{
		cin >> p[i];
	}

	//repr(i,1,n) cout << p[i] ;

	//cout << endl;

	int x = (n+1)/2;

	prDouble(sol(p,n,x));


	// problem link:
}
/*
debugged history

the array index should always start from 1.

this problem wasted a hour. 

Be careful next time. 

*/
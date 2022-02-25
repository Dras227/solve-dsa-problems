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
#define prDouble(x) cout << fixed << setprecision(10) << x;
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

double dp[301][301][301];
double sol(int x,int y,int z,int n)
{
	if(x < 0 || y < 0 || z < 0)
		return 0;
	if(x == 0 && y == 0 && z == 0)
		return 0;

	if(dp[x][y][z] > -0.9)
		return dp[x][y][z];

	double exp = n + x*sol(x-1,y,z,n) + y*sol(x+1,y-1,z,n) + z *sol(x,y+1,z-1,n);

	return dp[x][y][z] = exp / (x+y+z);
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n;

	cin >> n ; 
	memset(dp,-1,sizeof(dp));
	int x=0,y=0,z=0,item;
	rep(i,n)
	{
		cin >> item;

		if(item == 1) x++;
		else if(item == 2) y++;
		else if(item == 3) z++;
	}

	prDouble(sol(x,y,z,n));

	// problem link:https://atcoder.jp/contests/dp/tasks/dp_j
}
/*
debugged history

*/
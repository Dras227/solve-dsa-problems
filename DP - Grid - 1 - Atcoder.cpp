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
int i,j;void pA(int *a,int s,int e){cout << endl;repr(i,s,e) cout << a[i] << " ";return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
char maze[1001][1001];
int dp[1001][1001];
int solve(int h,int w)
{
	//filling the 1st row and the 1st column

	dp[1][1] = 1;
	for(int i=2;i<=w;i++)
	{
		if(maze[1][i]=='#')
			break;
		else
		dp[1][i] = dp[1][i-1];
	}
	for(int i=2;i<=h;i++)
	{
		if(maze[i][1]=='#')
			break;
		else
		dp[i][1] = dp[i-1][1];
	}

	for(int i=2;i<=h;i++)
	{
		for(int j=2;j<=w;j++)
		{
			if(maze[i][j]!='#')
			dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
		}
	}

	return dp[h][w]%MOD;
}
void printDP(int n,int m)
{
	repr(i,1,n)
	{
		repr(j,1,m)
			cout << dp[i][j] << " ";
		cout << endl;
	}
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int h,w;

	cin >> h >> w;
	
	repr(i,1,h)
		repr(j,1,w)
			cin >> maze[i][j];
	memset(dp,0,sizeof dp);
	
	cout << solve(h,w) ;//<<endl;
	//printDP(3,4);
	// problem link: 
}
/*
debugged history

*/
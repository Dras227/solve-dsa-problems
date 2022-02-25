#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100001
int i, j;
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
int vac[100001][4];
int dp[100001][4];

int maxHappiness(int n)
{
	dp[1][1] = vac[1][1];
	dp[1][2] = vac[1][2];
	dp[1][3] = vac[1][3];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(j==1)
			{
				dp[i][j] = max(dp[i-1][j+1],dp[i-1][j+2]) + vac[i][j];
			}
			else if(j==2)
			{	
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j+1]) + vac[i][j];
			}
			else if(j==3)
			{
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j-2]) + vac[i][j];
			}
			
			//cout << dp[i][j] << " ";
			
		}
		//cout << endl;
	}
	//cout << endl;

	return max({dp[n][1],dp[n][2],dp[n][3]});
}
void solve()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n;
	cin >> n;
		
	if(n==1)
	{	
		int a,b,c;
		cin >> a >> b >> c;
		cout << max({a,b,c});
		return;
	}
	repr(i,1,n)
		repr(j,1,3)
			cin >> vac[i][j];
	

	cout << maxHappiness(n);
	return;
		repr(i,1,n)
		{
		repr(j,1,3)
			cout <<  dp[i][j] << " ";

		cout << endl;}
	cout << "\n\n\n" << vac[2][1];
	// problem link: https://atcoder.jp/contests/dp/tasks/dp_c
}
/* 
problem solving story
3
10 40 70
20 50 80
30 60 90


i=1,1 ->10 

our options,

 2,2 -> 50
 2,3 -> 80

 i+1,i+2

10 40 70

90 120 120

150 180 210


7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1

i=2,j=1

dp[2][1] = dp[1][2],dp[1][3] + vac[2][1]
		 = (7,8) + 8
		 = 16

*/
/*
vector<vector<int>>vac;
vector<vector<int>>dp;
int maxHappy(int n)
{
	dp[0][0] = vac[0][0];
	dp[0][1] = vac[0][1];
	dp[0][2] = vac[0][2];
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
			{
				dp[i][j] = max(dp[i-1][j+1],dp[i-1][j+2]) + vac[i][j];
			}
			else if(j==1)
			{	
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j+1]) + vac[i][j];
			}
			else if(j==2)
			{
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j-2]) + vac[i][j];
			}
			
			cout << dp[i][j] << " ";
			
		}
		cout << endl;
	}
	//cout << endl;

	return max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
}
void solve()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	int n;
	cin >> n;

	if(n==1)
	{
		int a,b,c;
		cin >> a>> b>>c;
		cout << max({a,b,c});
		return;
	}
	
	rep(i,n)
	{
		vector<int> v;
		rep(j,3)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		vac.push_back(v);
	}

	repr(i,0,n-1)
	{
		rep(j,3)cout << vacay[i][j] << " ";
		cout << endl;
	}
	cout << maxHappy(n); 
}*/
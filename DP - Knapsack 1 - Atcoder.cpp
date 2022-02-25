#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include <climits>
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
#define NN 100001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
struct item
{
	int val;
	int wt;
};

/*int maxProfitRecur(int i,int j)
{
	if(i==0 || j==0)
	{
		return 0;
	}

	if(dp[i][j] > -1)
		return dp[i][j];

	int op1 = maxProfitRecur(i-1,j);
	int op2 = INT_MIN;
	if(j>=ar[i].wt)
	op1 = ar[i].p + maxProfitRecur(i-1,j-ar[i].wt);

	return dp[i][j] = max(op1,op2);
}*/

int maxProfit(vector<item> ar, int n,int W)
{
	int dp[n+1][W+1];
	for(int w=0;w<=W;w++)  dp[1][w] = 0;
	dp[1][ar[1].wt] = ar[1].val;

	for(i=2;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			dp[i][w] = dp[i-1][w];

			if (ar[i].wt > w)
			{
				continue;
			}

			dp[i][w] = max(dp[i][w], ar[i].val + dp[i-1][w-ar[i].wt]);
		}
	}

	return *max_element(dp[n],dp[n]+W+1);
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,w;

	cin >> n >> w;

	vector<item> ar(NN);

	repr(i,1,n)
	{
		cin >> ar[i].wt>> ar[i].val;
	}
	
	cout << maxProfit(ar,n,w);
	// problem link: https://atcoder.jp/contests/dp/tasks/dp_f
}
/*
debugged  history

*/
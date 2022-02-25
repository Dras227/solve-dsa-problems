#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
//#include<bits/stdc++.h>
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
#define inf 1e9+1;
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
struct item
{
	int val;
	int wt;
};
int maxProfit(vector<item> arr,int n,int W)
{
	int maxVal = n*1000;

	int dp[n+1][maxVal+1];

	for(int i=0;i<=maxVal;i++)
		dp[1][i] = inf;

	dp[1][0] = 0;
	dp[1][arr[1].val] = arr[1].wt;

	for(int i= 2;i<=n;i++)
	{
		for(int v=0;v<= maxVal;v++)
		{
			dp[i][v] = dp[i-1][v];

			if(arr[i].val > v)
				continue;
			dp[i][v] = min(dp[i][v],arr[i].wt + dp[i-1][v-arr[i].val]);
		}
	}
	/*repr(i,0,n)
	{
		repr(j,0,maxVal)
		{
			cout << dp[i][j] << " " ;
		}
		cout << endl;
	}*/
	int ans = 0;

	for(int i=0;i<= maxVal;i++)
	{
		if(dp[n][i] <= W)
			ans = i;
	}

	return ans;
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,w;

	cin >> n >> w;

	vector<item> ar(n+1);

	repr(i,1,n)
	{
		cin >> ar[i].wt>> ar[i].val;
	}
	
	cout << maxProfit(ar,n,w);
	// problem link: 
}
/*
problem solving history

*/
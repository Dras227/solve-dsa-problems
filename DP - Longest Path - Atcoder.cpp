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

vector<int>graph[100001];
int dp[100001];

int solve(int src)
{
	if(dp[src]!=-1)
		return dp[src];

	int bestChild = INT_MIN;

	bool leaf = 1;

	for(auto child:graph[src])
	{
		leaf = 0;
		bestChild = max(bestChild,solve(child));
	}

	return dp[src] = leaf?0:bestChild+1;

}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,m;
	cin >> n >> m ;

	while(m--)
	{
		int u,v;
		cin >> u >> v;
		
		graph[u].push_back(v);
	}

	memset(dp,-1,sizeof dp);
	int ans= 0;
	repr(i,1,n)
	{
		ans = max(ans,solve(i));
	}

	cout << ans;

	// problem link: 
}
/*
debugged history

*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int n,m;
int cost[1000][1000];
int dp[1000][1000];
int minCost(int n,int m)
{
	int i,j;
	rep(i,n)
	{
		rep(j,m)
		{
			// filling the base columns

			if(i==0 and j==0)
			{
				dp[i][j] = cost[i][j];
			}
			else if(j==0)
			{
				dp[i][j] = dp[i-1][j] + cost[i][j];
			}
			else if(i==0)
			{
				dp[i][j] = dp[i][j-1] + cost[i][j];
			}
			else 
			{
				dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + cost[i][j];
			}
		}
	}
	return dp[n-1][m-1];
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	
	cin >> n;
	while (n!=0)
	{
		cin >> m;
		//
		int i,j;
		rep(i,n)
			rep(j,m)
				cin >> cost[i][j];

		memset(dp,-1,sizeof dp);
		
		cout << minCost(n,m) << endl;
		//
		cin >> n;		
	}
}






















































































/*intput.txt
output.txt*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
#define MOD 1000000007
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int m,n,p;
int maze[1001][1001];
int dp[1001][1001];
int findWays(int m,int n)
{
	if(maze[1][1] == 1)
		return 0;
	// compute the number of ways for first row

	for(int i=1;i<=n;i++)
	{
		if(maze[1][i] == -1) break;

		dp[1][i] = 1;
	}

	// compute the no. of ways for first colums

	for(int i=1;i<=m;i++)
	{
		if(maze[i][1] == -1)
		{
			break;
		}
		dp[i][1] = 1;
	}

	// compute for the rest using recurrence
	int i,j;
	repr(i,2,m)
	{	
		repr(j,2,n)
		{
			if(maze[i][j] == -1) continue;
			if(dp[i-1][j]!=-1)
			{
				 dp[i][j] = (dp[i][j] + dp[i-1][j])%MOD; 
			}
			if(dp[i][j-1]!=-1)
			{
				 dp[i][j] = (dp[i][j] + dp[i][j-1])%MOD; 
			}
		}
	}
	return dp[m][n];
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;

	cin >> m >> n >> p;

	memset(maze,0,sizeof maze);

	memset(dp,0,sizeof dp);

	while(p--)
	{
		int i,j;
		cin >> i >> j;

		maze[i][j] = -1;
	}

	cout << findWays(m,n);
	
}






















































































/*intput.txt
output.txt*/
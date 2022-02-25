#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input1", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int n,npos;
int dp[1001][1001];
int gold[1001][1001];
int minGold(int n)
{	
	int i,j;
	dp[1][1] = gold[1][1];
	// filling first row and first column
	repr(j,2,n)
	{	
		dp[1][j] = dp[1][j-1] + gold[1][j];
	}
	repr(i,2,n)
	{	
		dp[i][1] = dp[i-1][1] + gold[i][1]; 
	}
	repr(i,2,n)
	{
		repr(j,2,n)
		{
			 if(gold[i][j]==1)
        dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+1;
        else
        {
       dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+0;
        }
		}
	}

	int ans = 0;
	repr(i,1,n)
	{
		repr(j,1,n)
		{
			int op1 = dp[i][j];
			int op2 = dp[i][n] - op1;
			int op3 = dp[n][j] - op1;
			int op4 = dp[n][n] - (op1+op2+op2);

			ans = max(ans,min(op1,min(op2,min(op3,op4))));
 		}
	}
	return ans;
}

void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	cin >> n >> npos;

	memset(dp,0,sizeof dp);
	memset(gold,0,sizeof gold);

	int i,j;
	while(npos--)
	{
		cin >> i >> j;

		gold[i][j] = 1;
	}

	cout << minGold(n);
	return ;
	
}






















































































/*intput.txt
output.txt*/
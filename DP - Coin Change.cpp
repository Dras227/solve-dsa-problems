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
//                        ENDSa
//                        HERE

// Top To Bottom DP
int dp[1000] = {0};  
int coinChange(int change,int coins[],int n)
{
	// base case
	if(change==0) return 0;

	// dp case
	if(dp[change]>0) return dp[change];

	// rec case

	int min_coins=INT_MAX,option;

	int i;

	rep(i,n) 
	{
		if(change-coins[i]>=0)
		option = coinChange(change-coins[i],coins,n)+1;

		min_coins = min(min_coins,option);
	}

	dp[change] = min_coins;

	return dp[change];
}

// Bottom Up Dp

int coinReq(int change,int coins[],int n)
{	int i;
	//int dp[1000] = {0};rep(i,n) dp[coins[i]] = 1;
	
	repr(i,1,change)
	{
		int cur_change = i;
		int j;
		
		dp[i] = INT_MAX;
		
		
		rep(j,n) 
		{
			if(cur_change-coins[j]>=0)
			{
				int ans = dp[cur_change-coins[j]];
				dp[i] = min(ans+1,dp[i]);
			}
		}	
	}

	return dp[change];

}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	
	
	int n,change;
	cin  >> n;
	int arr[20],i;

	rep(i,n) cin >> arr[i];

	cin >> change;

	//rep(i,n) dp[arr[i]] = 1;

	cout <<coinReq(change,arr,n);
}






















































































/*intput.txt
output.txt*/
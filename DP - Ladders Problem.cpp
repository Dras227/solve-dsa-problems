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
// topdown approach
int ladders_topdown(int n,int k,int dp[])
{
	// base case * if it returns 0 all the things would go 0 and result in spectacular blunder*
	if(n==0) return 1;

	// dp look up

	if(dp[n]!=0) return dp[n];

	// rec case 
	int ways =0;
	for (int i = 1; i <=k; ++i)
	{
		if((n-i)>=0) ways+=ladders_topdown(n-i,k,dp);
	}

	return dp[n] = ways;
}

// bottom to top approach
int ladders_bottomtotop(int n,int k,int dp[])
{
	dp[0] = 1;

	for(int i=1;i<=n;i+=1)
	{
		// it is very [i]mportant to [i]nitialize
		dp[i] = 0;
		for(int j=1;j<=k;j++)
		{
			// from the ith state we are looking backing at kth states back
			if(i-j>=0) dp[i] += dp[i-j];
		}
	}

	return dp[n];
}

// optimized approach

int ladders_optimized(int n,int k)
{
	int dp[1000] = {0};

	dp[0] = dp[1] = 1;

	for(int i=2;i<=k;i++)
	{
		dp[i] = 2*dp[i-1]; 
	}

	for(int i=k+1;i<=n;i++)
	{
		dp[i] = 2*dp[i-1] - dp[i-k-1];
	}

	return dp[n];
}
void solve ()
{

	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int n,k;

	cin >> n >> k;
	int dp[1000] = {0};
	cout << ladders_topdown(n,k,dp) << endl << ladders_bottomtotop(n,k,dp) << endl << ladders_optimized(n,k);
}






















































































/*intput.txt
output.txt*/
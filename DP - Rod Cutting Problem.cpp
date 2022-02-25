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

// recursive approach

int max_profit(int *prices,int n)
{
	if(n<=0) return 0;

	int ans = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		int cur_ans = prices[i] + max_profit(prices,n-(i+1));
		ans = max(ans,cur_ans);
	}

	return ans;
}

// bottum up dp

int max_profit_dp(int *prices,int n)
{
	int dp[100] = {0};

	dp[0] = 0;dp[1] = prices[0];

	for(int len=1;len<=n;len++)
	{	
		int ans = INT_MIN;
		for(int i=0;i<len;i++)
		{
			int cut = i+1;
			int current_ans = prices[i] + dp[len-cut];
			ans = max(ans,current_ans);
		}

		dp[len] = ans;
	}

	return dp[n];
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int prices[] = {1,5,8,9,10,17,17,20};
	int n = sizeof(prices)/sizeof(int);

	cout << max_profit_dp(prices,n) << endl;
	cout << endl << max_profit(prices,n);
}






















































































/*intput.txt
output.txt*/
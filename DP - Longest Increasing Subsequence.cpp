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

int long_inc_subsq_dpI(int *a,int n)
{
	int ans = 1;

	int dp[n] = {0};
	dp[0] = 1;
	for(int i=1;i<n;i++)
	{
		int local_max = 0;
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i]) local_max = max(local_max,dp[j]);
		}
		dp[i] = local_max+1;
		ans = max(ans,dp[i]);
	}
	return ans;
}
int long_inc_subsq_dpII(int *a,int n)
{
	int dp[n+1];

	dp[0] = INT_MIN;

	for(int i=1;i<=n;i++)
	{
		dp[i] = INT_MAX;
	}
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		for(int length =0;length <n;length++)
		{
			if(dp[length] < a[i] and dp[length+1]>a[i]) 
			{
				dp[length+1] = a[i];
				//ans =
			}
		}
	}
	for(int i=1;i<=n;i++) if(dp[i]!=INT_MAX)  ans =i;

	return ans;
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int arr [] = {1,5,2,3,4,9,9,10,11};

	int n = sizeof(arr)/sizeof(int);


	cout << long_inc_subsq_dpII(arr,n);

}






















































































/*intput.txt
output.txt*/
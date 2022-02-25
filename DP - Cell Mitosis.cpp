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

int minMitosis(int n,int x,int y,int z)
{
	int dp[100] = {0};


	dp [1] = dp[0] = 0;
	for(int i=2;i<100;i+=1)
	{
		if(i&1)
		{
			dp[i] = min(dp[(i+1)/2]+x+z,dp[i-1]+y);
		}
		else
		{
			dp[i] =	min(dp[i/2]+x,dp[i-1]+y);
		}
	}
	return dp[n];
} 
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int n;

	cin >> n;


	cout << minMitosis(n,3,1,2);
}






















































































/*intput.txt
output.txt*/
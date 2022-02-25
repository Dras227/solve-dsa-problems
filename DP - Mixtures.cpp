#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
#define INF INT_MAX 
#define MINF INT_MIN 
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE 


int sumL(int a[],int s,int e)
{
	int ans=0;
	for(int i = s;i<=e;i++)
	{

		ans = (ans + a[i])%100;
	}
	//cout << " joierajgfo";
	return ans;
}
int minMix(int a[],int i,int j,int dp[][100])
{
	// base case 
	// if there is only one mixture

	if(i==j)
	{
		dp[i][j] = 0;
		return 0;
	}

	//cout << dp[i][j];
	// dp - lookup
	
	if(dp[i][j] != -1)
	{
		//cout <<"hello!";
		return dp[i][j];
	}
	//cout <<"hello!";
	// if value is not present in the dp array

	int result = INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp = minMix(a,i,k,dp) + minMix(a,k+1,j,dp) + sumL(a,i,k)*sumL(a,k+1,j); 
		result = min(result,temp);
	}
	dp[i][j] = result;
	return result;


}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	while(!cin.eof())
	{
		int i,n;
		cin >> n;int a[100];
		rep(i,n) cin >> a[i];
		//rep(i,n) cout << a[i] << " ";cout << endl;
		//cout << "n = " << n;
		int dp[100][100] = {-1};
		memset(dp,-1,sizeof dp);
		int j;
		rep(i,100)
			rep(j,100)
				dp[i][j] = -1;
		cout << minMix(a,0,n-1,dp) << endl;
	}
}






















































































/*intput.txt
output.txt*/
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
int dp[1005][1005][12][2]; 
int n,m,k;
string s,t;
int solve(int is,int it,int rem,int cont)
{
	// p1 p2 p3 p4 p5
	// if p3 has a length of 5
	// p3 = abcde
	// then if we are on b in p3 then rem stays out to be 3
	// jump from e in p3 makes rem to 2
	if(is == n or it == m)
	{
		return ((rem==0)?0:INT_MIN);
	}
	if(rem==0) return 0;

	if(dp[is][it][rem][cont]!=-1) return dp[is][it][rem][cont];

	int ret = INT_MIN;

	ret = max(ret,solve(is+1,it,rem-cont,0));
	ret = max(ret,solve(is,it+1,rem-cont,0));

	if(s[is]==t[it])
	{
		ret = max(ret,1+solve(is+1,it+1,rem,1));
		ret = max(ret,1+solve(is+1,it+1,rem-1,0));
	}
	return dp[is][it][rem][cont] = ret;
}
void solve ()
{
	//Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	

	cin >> n >> m >> k;

	cin >> s >> t;



	memset(dp,-1,sizeof dp);

	cout << solve(0,0,k,0);

	
}






















































































/*intput.txt
output.txt*/
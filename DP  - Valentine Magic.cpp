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
int chocolates[100],candys[100],dp[100][100];
int valentine(int i,int j)
{
	if(i==n)
	{
		// we have paired every boys with girls
		return 0;
	}
	if(j==m)
	{
		// we have rejected too many girls and no girls are there to pair
		return INT_MAX;
	}

	// dp lookup

	if(dp[i][j] > -1) return dp[i][j];

	int op1 =abs(chocolates[i]-candys[j] + valentine(i+1,j+1));
	int op2 = valentine(i,j+1);

	return dp[i][j] = min(op1,op2);
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	cin >> n >> m;

	int i;

	rep(i,n) cin >> chocolates[i];
	rep(i,m) cin >> candys[i];
	memset(dp,-1,sizeof dp);
	sort(chocolates,chocolates+n);
	sort(candys,candys+m);
	cout << valentine(0,0);
}






















































































/*intput.txt
output.txt*/
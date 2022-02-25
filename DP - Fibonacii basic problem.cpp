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
int32_t  main(){IOS;cin.tie(NULL);
	solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE  

int dp[1000];
// topdown approach
int fib_topdown(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;

	else if(dp[n]>0)
	{
		return dp[n];
	}
	else 
	{
		int cur = fib_topdown(n-1)+fib_topdown(n-2);
		dp[n] = cur;
	}
	return dp[n];

}
int fib_bottomup(int n)
{
	dp[0] = 0;
	dp[1] = 1;

	int i;
	repr(i,2,n) dp[i] = dp[i-1]+dp[i-2];

	return dp[n];
}
int fib_spaceOptimized(int n)
{
	int a = 1;
	int b = 0;

	int i,c=0;
	repr(i,2,n) 
	{
		c = a+b;
		b = a;
		a = c;
	}

	return c;
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 " <<(1<<4)<< endl;	
	int n;
	cin >> n;
	cout << fib_topdown(n) << endl << fib_bottomup(n) << endl << fib_spaceOptimized(n);
}






















































































/*intput.txt
output.txt*/
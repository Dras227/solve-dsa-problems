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

int profit(int *wines,int i,int j,int y,int dp[][100])
{
	// base casse
	// if i overshoots j there would be no bottles to calculate the profit
	// so the profit would be 0
	if(i>j) return 0;

	// dp lookup
	if(dp[i][j]!=0) return dp[i][j];
	// recursive case

	int op1,op2;

	op1 = wines[i]*y + profit(wines,i+1,j,y+1,dp);
	op2 = wines[j]*y + profit(wines,i,j-1,y+1,dp);
	dp[i][j] = max(op1,op2);
	return dp[i][j];
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int wines[] = {2,3,5,1,4};
	int n = sizeof(wines)/sizeof(int);
	int dp[100][100] = {0};
	cout << profit(wines,0,n-1,1,dp);

	return ;
}






















































































/*intput.txt
output.txt*/
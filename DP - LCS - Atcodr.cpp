#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>

using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int i,j;void pA(int *a,int s,int e){cout << endl;repr(i,s,e) cout << a[i] << " ";return;}
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

string s,t;


int dp[3000][3000];
int maxSubseqq(int i,int j)
{
	if(i>=s.length() ||j>=t.length())
	{
		return 0;
	}
	if(dp[i][j] != -1)
		return dp[i][j];
	if(s[i] == t[j])
	{
		return dp[i][j] = 1+maxSubseqq(i+1,j+1);
	}
	int op1 = maxSubseqq(i,j+1);
	int op2 = maxSubseqq(i+1,j);
	return dp[i][j] = max(op1,op2);
}
void printDP(int s,int e)
{
	repr(i,s,e)
	{
		repr(j,s,e)
		cout << dp[i][j] << " ";
		
		cout << endl;
	}
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	

	cin >> s  >> t;
	memset(dp,-1,sizeof dp);
	

	
	int ans = maxSubseqq(0,0);
		cout << ans << endl;
	string hi="\0";
	
	i=0;j=0;
	printDP(0,3);
	//ans-=1;
	//return;
	while(ans>0)
	{
		if(s[i] == t[j])
		{
			
			hi.push_back(s[i]);
			i++;
			j++;
			ans--;
			//cout << ans <<" " <<i <<" "<< j << " "<< hi<< endl; 
		}
		else
		{
			if(dp[i][j+1]>dp[i+1][j]) j++;
			else i++;
		}
	}
	cout << hi;
	// problem link: https://atcoder.jp/contests/dp/tasks/dp_f

}

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

int LCS(string s1,string s2,int i,int j,vector<vector<int>> dp)
{
	// base case

	if(i==s1.length() or j==s2.length())
		return 0;

	// dp lookup bitch

	if(dp[i][j]!=-1) return dp[i][j];
	// while comparing if it hits the common letter then 
	// there would be no need to consider the options and go forward
	// by addingg 1 to it

	if(s1[i] == s2[j])
	{
		return dp[i][j] = 1+LCS(s1,s2,i+1,j+1,dp);
	}

	// when s1[i] and s2[i] not equal 
	// we have to consider both s1[i] and s2[i]
	// so will have 2 options op1 and op2

	int op1,op2;
	op1 = LCS(s1,s2,i+1,j,dp);
	op2 = LCS(s1,s2,i,j+1,dp);

	return dp[i][j] = max(op1,op2);

}  
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	string s1 = "ABCEDEG";
	string s2 = "ABEDG";

	int n1 = s1.length();
	int n2 = s2.length();


	vector<vector<int>>dp(n1,vector<int>(n2,-1));
	cout << LCS(s1,s2,0,0,dp);

}






















































































/*intput.txt
output.txt*/
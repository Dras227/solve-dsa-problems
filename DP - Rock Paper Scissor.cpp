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
double dp[100][100][100];
void set_dp()
{
	memset(dp,-1.0,sizeof dp);
}  
double f1(int r,int p,int s) // rock survives
{
	if(r==0 || s==0)
	{
		return 0; // if scissor is 0 then no one is there to cut the paper then paper defeats the rock
	}
	if(p==0)
	{
		return 1; // if paper is 0 rock defeats the scissor 
	}

	// dp lookup
	if(dp[r][p][s] > -1) return dp[r][p][s];

	double ret = 0.0;
	double tot = r*p + p*s + s*r;
	ret = f1(r-1,p,s)*(r*p)/tot; // if fight happens btw rock and paper rock loses
	ret += f1(r,p-1,s)*(p*s)/tot; // btw paper and scissor scissor wins
	ret += f1(r,p,s-1)*(r*s)/tot; // btw rock and scissor rock wins

	return dp[r][p][s] = ret;
}
double f2(int r,int p,int s) // paper survives
{
	if(p==0 || r==0)
	{
		return 0; // if rock is 0 then no one is there to defeat the scissor then scissor cuts the paper
	}
	if(s==0)
	{
		return 1; // if scissor is 0 paper defeats the rock 
	}

	// dp lookup
	if(dp[r][p][s] > -1) return dp[r][p][s];

	double ret = 0.0;
	double tot = r*p + p*s + s*r;
	ret = f2(r-1,p,s)*(r*p)/tot; // if fight happens btw rock and paper rock loses
	ret += f2(r,p-1,s)*(p*s)/tot; // btw paper and scissor scissor wins
	ret += f2(r,p,s-1)*(r*s)/tot; // btw rock and scissor rock wins

	return dp[r][p][s] = ret;
}
double f3(int r,int p,int s) // scissor survives
{
	if(s==0 || p==0)
	{
		return 0; // if paper is 0 then no one is there to defeat the rock then rock defeats the scissor
	}
	if(r==0)
	{
		return 1; // if rock is 0 then the scissor cuts the paper 
	}

	// dp lookup
	if(dp[r][p][s] > -1) return dp[r][p][s];

	double ret = 0.0;
	double tot = r*p + p*s + s*r;
	ret = f3(r-1,p,s)*(r*p)/tot; // if fight happens btw rock and paper rock loses
	ret += f3(r,p-1,s)*(p*s)/tot; // btw paper and scissor scissor wins
	ret += f3(r,p,s-1)*(r*s)/tot; // btw rock and scissor rock wins

	return dp[r][p][s] = ret;
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int r,s,p;

	cin >> r >> s >> p;

	set_dp();
	double ans_rock = f1(r,p,s);
	set_dp();
	double ans_paper = f2(r,p,s);
	set_dp();
	double ans_scissor = f3(r,p,s);

	cout << fixed << setprecision(9) << ans_rock <<" "<< ans_paper <<" " << ans_scissor << endl; 
}






















































































/*intput.txt
https://online.codingblocks.com/app/player/117908/content/169161/168/lecture
output.txt*/
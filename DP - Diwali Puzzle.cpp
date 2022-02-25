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

int n,k;
int dp[100][100][100];


int f(int i,int prev,int cnt)
{
	if(i==n)
	{
		if(cnt == k)
			return 1;
		return 0;
	}

	if(dp[i][prev][cnt] > -1)
		return dp[i][prev][cnt];
	// if we put 1 at the current position 

	// if prev 0 then product would be 0

	int ans = 0;
	if(prev == 1)
	{
		ans = f(i+1,1,cnt+1);
	}
	else 
		ans =  f(i+1,1,cnt);
					
	// if we put 0 at the current position prev position value doesnt matter; product would be always 0

	ans = ans + f(i+1,0,cnt);

	return dp[i][prev][cnt] = ans;


}

void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	
	cin >> n >> k;
	memset(dp,-1,sizeof dp);

	cout << f(1,0,0) + f(1,1,0);
	int n,k;
}






















































































/*intput.txt
output.txt*/
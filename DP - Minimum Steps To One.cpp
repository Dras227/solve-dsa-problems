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

int dp[1000];

// top down approach
int minStepsToOne(int n)
{
	// base case
	if(n==1 )
		return 0;

	//dp case 
	if(dp[n] > 0) return dp[n];

	// rec case

	int x,y,z;

	x = y = z = INT_MAX;

	if(n%3==0) x = minStepsToOne(n/3);
	if(n%2==0) y = minStepsToOne(n/2);

	z = minStepsToOne(n-1);

	int ans = min(x,min(y,z))+1;
	dp[n] = ans;
	return ans;
}

// Bottom up approach

int minStep(int n)
{
	int dp[1000] = {0};

	dp[1] = 0;
	int i;
	repr(i,2,n)
	{
		int num = i;
		int x,y,z;

		x = y = z = INT_MAX;
		
		if(num%3==0) x = dp[num/3]+1;
		if(num%2==0) y = dp[num/2]+1;
		z = dp[num-1]+1;

		int ans = min(x,min(y,z));

		dp[i] = ans;
		//cout << i << "-->" << ans << endl; 
	}

	return dp[n];
}

void solve ()
{
	Dungeon_Master();//cout << "Hii,I am @iron_manu22 " <<(1<<4)<< endl;	

	int n;
	cin >> n;

	cout  <<minStep(n);
}






















































































/*intput.txt
output.txt*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
int i, j;
#define NN 1001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

int calorie[NN][NN];
int boy_start[NN][NN];
int girl_start[NN][NN];
int boy_end[NN][NN];
int girl_end[NN][NN];

int maxWorkout(int m,int n)
{
	// calculating boy's total workout from (1,1) to meeting point
	// here we assuming every cell is a meeting point 
	// boy_start is a dp array which contains best way to burn calorie if meeting is at that cell(i,j)
	// same applies to girl_start but it starts from (1,m)

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			boy_start[i][j] = calorie[i][j] + max(boy_start[i-1][j] ,boy_start[i][j-1]);
		}
	}

	// calculating girls total workout to meeting point

	for(i=m;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			girl_start[i][j] = calorie[i][j] + max(girl_start[i+1][j],girl_start[i][j-1]);
		}
	}

	//calculating boy's  best workout from (m,n) to meeting point(i,j)
	for(i=m;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			boy_end[i][j] = calorie[i][j] + max(boy_end[i+1][j],boy_end[i][j+1]);
		}
	}

	// calculating gril's best workout from (1,n) to meeting point(i,j)
	for(j=n;j>=1;j--)
	{
		for(i=1;i<=m;i++)
		{
			girl_end[i][j] = calorie[i][j] + max(girl_end[i-1][j],girl_end[i][j+1]);
		}
	}

	// calculating which meeting point is the best

	int ans = 0;

	for(i=2;i<m;i++)
	{
		for(j=2;j<n;j++)
		{
			int ans1 = boy_start[i-1][j] + boy_end[i+1][j] + girl_start[i][j-1] + girl_end[i][j+1];
			int ans2 = boy_start[i][j-1] + boy_end[i][j+1] + girl_start[i+1][j] + girl_end[i-1][j];

			ans = max(ans,max(ans1,ans2));
		}
	}

	return ans;
}
void solve ()
{
	//Dungeon_Master(); cout << "Hii,I am @iron_mNnu22 \n\n\n";

	int n,m;

	cin >> m >> n;

	memset(calorie,0,sizeof calorie);
	repr(i,1,m)
	{
		repr(j,1,n)
			cin >> calorie[i][j];
	}

	memset(boy_start,0,sizeof boy_start);
	memset(boy_end ,0,sizeof boy_end);
	memset(girl_start,0,sizeof girl_start);
	memset(girl_end,0,sizeof girl_end);

	cout << maxWorkout(m,n);

	return;
	cout << "\nBoy Start : \n";
	repr(i,1,m)
	{
		repr(j,1,n)
			cout << boy_start[i][j] << " ";
		cout << endl;
	}
	cout << "\n\n\nGirl Start : \n";
	
	repr(i,1,m)
	{
		repr(j,1,n)
			cout << girl_start[i][j] << " ";
		cout << endl;
	}
	cout << "\n\n\nBoy end : \n";

	repr(i,1,m)
	{
		repr(j,1,n)
			cout << boy_end[i][j] << " ";
		cout << endl;
	}
	cout << "\n\n\nGirl end : \n";

	repr(i,1,m)
	{
		repr(j,1,n)
			cout << girl_end[i][j] << " ";
		cout << endl;
	}
}






















































































/*intput.txt
output.txt*/
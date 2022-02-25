#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

int a[9] = {0,1,2,3,4,5,6,7,8};
	int n = 9;
	int bit[10000] = {0};
void update(int value)
{
	int i = value ;
	while(i<=n)
	{
		i  = i + (i & (- i));
		bit[i] += value;
		
	}
}
void build()
{
	
	for(int i = 1;i<n;i++)
	{
		update(a[i]);
	}
}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	
	
	
	build();
	
	for(int i=1;i<n;i++)
	{
		cout << bit[i] << " ";
	}


}

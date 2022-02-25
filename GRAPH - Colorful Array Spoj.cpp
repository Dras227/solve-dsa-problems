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
struct dsu
{
	vector<int> par;

	void init(int n)
	{
		par.resize(n);
		rep(i,n) par[i] = i;
	}

	int get(int x)
	{
		return(x==par[x]? x: (par[x]=get(par[x])));
	}

	int unite(int x,int y)
	{
		x = get(x);
		y = get(y);

		if(x!=y)
		{
			par[x] = max(par[x],par[y]);
			par[y] = max(par[x],par[y]);
		}

		return par[y];
	}

};
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,q;

	cin >> n >> q;

	int l[q],r[q],c[q];


	rep(i,q)
	{
		cin >> l[i] >> r[i] >> c[i];
	}
	int res[n+1]= {0};
	dsu G;
	G.init(n+2);

	for(int i=q-1;i>=0;i--)
	{
		int index = G.get(l[i]);

		while(index<=r[i])
		{
			res[index] = c[i];
			G.unite(index,index+1);


			// rightmost
			index = G.get(index);
		}
	}

	repr(i,1,n) cout << res[i]<< endl;

}


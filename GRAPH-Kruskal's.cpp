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
class dsu
{
public:
	int find(int x,int *parent)
	{
		if(parent[x] == -1)
			return x;
		return parent[x] = find(parent[x],parent);
	}

	bool unite_set(int m,int n,int *parent,int *rank)
	{
		int x = find(m,parent);
		int y = find(n,parent);
		if(x!=y)
		{
			if(rank[x]>rank[y])
			{
				 rank[x]+=rank[y];
				 parent[y] = x;
			} 

			else
			{	 

				rank[y]+=rank[x];
				parent[x] = y;
			}

		}
		else return false;
		
		return true;
	}


};
class graphh
{

	vector<vector<int>> edgelist;	
	int v;

	public:graphh(int V)
	{
		this->v = V;
	}
	void addEdge(int x,int y,int w)
	{
		edgelist.push_back({w,x,y});
	}


	void kruskal_msp(int n)
	{
		sort(edgelist.begin(),edgelist.end());
		
		int parent[n+1] = {-1};
		int rank[n+1] = {0};
		repr(i,0,n+1) 
		{
			parent[i] = -1;
			rank[i] = 0;
		}
		
		int ans = 0;
		for(auto edge:edgelist)
		{
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];
			dsu d;
			// whether we want this edge or not
			if(d.unite_set(x,y,parent,rank))
			{
				ans+=w;
				cout << x << " " << y << " " << w << endl;
			}

		}
		pA(parent,0,v);

		cout << ans;
		
	}
};
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,q;

	cin >> n >> q;

	dsu d;
	graphh g(n+1);
	
	int x,y,w;
	rep(i,q)
	{
		cin >> x >> y >> w;
		g.addEdge(x,y,w);
	

	}
	g.kruskal_msp(n);

}

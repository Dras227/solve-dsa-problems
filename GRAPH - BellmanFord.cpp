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
vector<int> bellman_ford(int V,int src,vector<vector<int>> edges)
{
	// create a vector and initialize it to int_max
	vector<int> dist(V+1,INT_MAX);
	dist[src] = 0;

	// relax all edges v-1 times

	for(int i=0;i<V-1;i++)
	{
		for(auto edge: edges)
		{
			int u = edge[0];
			int v = edge[1];
			int wt = edge[2];

			if(dist[u]!=INT_MAX and dist[u]+wt < dist[v])
			{
				dist[v] = dist[u] + wt;
			}
		}
	}

	// negative wt cycle
	for(auto edge:edges)
	{
		int u = edge[0];
		int v = edge[1];
		int wt = edge[2];
		
		if(dist[u]!=INT_MAX and dist[u]+wt < dist[v])
		{
			cout << "NegativeWeightCycleFreakinFound";
		}
	}



	return dist;
}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,m;
	cin >> n >> m;
	//edge list
	vector<vector<int>> edges;

	for(int i=0;i<m;i++)
	{
		int u,v,wt;
		cin >> u >> v >> wt;
		edges.push_back({u,v,wt});
	}

vector<int> distances =	bellman_ford(n,1,edges);

	for(int i=1;i<=n;i++)
	{
		cout << "Node " << i << " is at dist " << distances[i] << endl;
	}
	return ;
}

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
int i, j; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

class graph
{
	int V;
	list<pair<int,int>> *l;
public:
	graph(int v)
	{
		V =v;
		l = new list<pair<int,int>> [V];
	}

	void addEdge(int x,int y,int cost)
	{
		l[x].push_back(make_pair(y,cost));
		l[y].push_back(make_pair(x,cost));
	}

	int dfs_helper(int node,bool *visited,int *count,int &ans)
	{
		visited[node] = true;
		count[node] = 1;

		//traverse all the neighbouring nodes of current node

		for(auto nbr_pair:l[node])
		{
			int nbr = nbr_pair.first;
			int wt = nbr_pair.second;
			if(!visited[nbr])
			{
				int nx = count[nbr] = dfs_helper(nbr,visited,count,ans);
				count[node]+=count[nbr];
				int ny = V - nx;
				ans+=2*min(nx,ny)*wt;
			}
		}

		return count[node];
	}
	int dfs()
	{
		bool *visited = new bool[V];
		int *count = new int[V];

		//mark every node as not visited

		for(int i=0;i<V;i++)
		{
			visited[i] = false;
			count[i] = 0;	
		}

		int ans = 0;

		ans = dfs_helper(0,visited,count,ans);

		return ans;
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	graph g(4);

	g.addEdge(0,1,3);
	g.addEdge(1,2,2);
	g.addEdge(2,3,2);

	cout << g.dfs() << endl;


}
/*
debugged history

*/
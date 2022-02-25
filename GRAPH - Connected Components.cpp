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

template<typename T>
class graph
{
	map<T,list<T>> l;

	public:void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(T src,map<T,bool> &visited)
	{
		cout << src << "-->" ;

		// visit all the neighbours of the current node which are not visited
		visited[src] = true;
		for(auto nbr:l[src])
		{
			if(!visited[nbr])
			{
				dfs_helper(nbr,visited);
			}
		}
	}
	void dfs()
	{
		map<T,bool> visited;

		// mark all the nodes as not visited in the map

		for(auto p:l)
		{
			T node = p.first;
			visited[node] = false;
		}

		// visit each node and init a dfs call
		int components = 0;

		for(auto p:l)
		{
			T node = p.first;

			if(!visited[node])
			{
				components++;
				cout <<endl<< "Component: " <<components << endl;
				dfs_helper(node,visited);
			}
		}
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	

	graph<int> g;
	int n;
	cin >> n;


	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;

		g.addEdge(a,b);
	}
	// g.addEdge(0,4);
	// g.addEdge(0,3);
	// g.addEdge(0,1);
	// g.addEdge(1,2);
	// g.addEdge(2,3);
	// g.addEdge(5,6);
	// g.addEdge(6,7);
	// g.addEdge(8,8);

	g.dfs();

	// problem link:
}
/*
debugged history

*/
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

	public: void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void dfs_helper(T src,map<T,bool> &visited)
	{
		// this function recursively call all the nodes

		cout << src << " ";
		visited[src] = true;
		// visit the neighbours of all the nodes that are not visited

		for(T nbr:l[src])
		{
			if(!visited[nbr])
			{
				
				dfs_helper(nbr,visited);
			}
		}
	}
	void dfs(T src)
	{
		map<T,bool> visited;

		// mark all the nodes as not visited in the begining

		for(auto p:l)
		{
			T node = p.first;
			visited[node] = false;
		}

		dfs_helper(src,visited);
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	graph<int> g;

	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);

	g.dfs(0);

	// problem link:
}
/*
debugged history

*/
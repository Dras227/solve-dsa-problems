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
void Dungeon_Master() {freopen("C:\\Users\\manud\\Downloads\\c++\\compcode\\input.txt", "r", stdin); freopen("C:\\Users\\manud\\Downloads\\c++\\compcode\\output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

class graph
{
	map<int,list<int>>l;

	public: void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	bool dfs_helper(int source,int parent,bool *visited)
	{
		// mark down the source as visited
		visited[source] = true;

		// traverse to all the nodes and find out any node is visited
		// the parent of the current node is not considered to be visited

		for(auto nbr:l[source])
		{
			if(visited[nbr] and nbr!=parent)
			{
				return true;
			}
			else if(!visited[nbr])
			{
				dfs_helper(nbr,source,visited);
			}
		}

		return false;


	}
	void dfs()
	{
		bool *visited = new bool[5];
		for(auto p:l)
		{
			int node = p.first;
			visited[node] = false;
		}
		
		// call dfs helper;
		
		if(dfs_helper(0,0,visited))
			cout << "This graph contains freakin cycles.";
		else 
			cout << "This graph is boring";
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
		
	cout << "hello";
	return;
	graph g;

	g.addEdge(0,1);	
	g.addEdge(2,3);	
	g.addEdge(3,4);	
	g.addEdge(0,4);	
	g.addEdge(2,1);

	g.dfs();	
}
/*
debugged history

*/
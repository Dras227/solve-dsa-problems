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
int fakt(int n)
{	
	int pr = 1;
	repr(i,1,n)
	{
		pr*=i;
	}


	return pr;
}
int comb(int n)
{
	return fakt(n)/(2*fakt(n-2));
}
class graph
{
	map<int,list<int>> l;

	public: void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	int dfs_helper(int src,map<int,bool> &visited)
	{
		int cnt = 1;
		cout << src << "-->";

		visited[src] = true;
		for(int nbr:l[src])
		{
			if(!visited[nbr])
			{
				cnt+=dfs_helper(nbr,visited);
			}
		}
		return cnt;
	}
	int dfs(int n,int p)
	{
		map<int,bool> visited;

		// mark all the nodes as not visited
		for(auto p:l)
		{
			int node = p.first;
			visited[node] = false;
		}

		// call the dfs helper function for each node in the list
		int nc[n] = {0};int cnt = 0;
		for(auto p:l)
		{
			cout << endl << "Component:" << cnt++ << endl;
			int node = p.first;
			nc[node] = dfs_helper(node,visited);
			cout << "nc[node] = " << nc[node] << endl;
		}
		cout << endl;
		int pc = 0;
		
		rep(i,n)
		{cout << "N=" << n <<endl;
			
			if(nc[i]>1)
			{
				cout << nc[i] << " ";
				pc += comb(nc[i]);
			}
			
		}

		cout << endl << pc << endl;;

		return comb(n)-pc;
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	int n,p;

	cin >> n >> p;
	graph g;
	rep(i,p)
	{
		int x,y;
		cin >> x >> y;

		g.addEdge(x,y);
	}

	rep(i,n)
	{
		g.addEdge(i,i);
	}

	cout << endl << g.dfs(n,p);


}
/*
debugged history

*/
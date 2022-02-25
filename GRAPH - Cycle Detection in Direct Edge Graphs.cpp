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
class graph
{
	list<int> *l;
	int v;

	public: graph(int V)
	{
			this->v = V;
			l = new list<int>[v];
	}
	void addEdge(int x,int y)
	{
		// direct edge only
		l[x].push_back(y);
	}

	bool dfs_helper(int src,map<int,bool>&path,map<int,bool>&visit)
	{
		// mark the current node as true
		visit[src] = true;
		path[src] = true;

		for(auto nbr:l[src])
		{
			if(path[nbr] == true)
			{
				return false;
			}
			if(!visit[nbr])
			{
				if(!dfs_helper(nbr,path,visit)) return false;
			}
		}
		path[src] = false;
		return true;

	}
	void cycle_detector()
	{
		map<int,bool> path;
		map<int,bool> visit;

		// mark all nodes as unvisited

		for(int i=0;i<v;i++)
		{
			visit[i] = false;
			path[i] = false;
		}

		// run dfs

		if(!dfs_helper(0,path,visit))
			cout << "This graph contains freakkin cycle";
		else 
			cout << "This graph does not contain any kind of cycles ok";




	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	graph g(7);

	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(1,5);
	g.addEdge(5,6);
	
	g.cycle_detector();
	/*int t, n;
	cin >> n;
	string s;
	cin >> 	s;

	cout << s[0] << s[10];
	return;

	while (scanf("%lld", &t) != EOF)
	{
		cin >> t;
		cout << t << endl; int i, a[100];
		rep(i, t) cin >> a[i];
		rep(i, t) cout << a[i] << " ";
		cout << endl;
	}*/

	// problem link:
}
/*
debugged history

*/
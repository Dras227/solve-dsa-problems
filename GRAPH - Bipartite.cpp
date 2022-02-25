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

bool dfs_helper(vector<vector<int>> graph,int src,int parent,int *visited,int *color,int col)
{
	visited[src] = true;
	color[src] = col;

	for(auto nbr:graph[src])
	{
		if(nbr!=parent and color[src] == color[nbr])
		{
			return false;
		}
		else if(nbr!=parent)
		{
			if(!dfs_helper(graph,nbr,src,visited,color,3-col)) 
				return false;
		}
	}
	return true;
}
bool dfs(std::vector<std::vector<int> > graph,int n,int p)
{
	int visited[n] = {0};
	int color[n] = {0};
	int col = 1;
	bool ans = dfs_helper(graph,0,0,visited,color,col);

	if(ans)
		cout << "Yes the graph is biparite!";
	else 
		cout << "No the graph is not biparite";
	return true;
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,p;
	cin >> n >> p;

	std::vector<std::vector<int>> graph(n);
	
	rep(i,n)
	{
		int x,y;
		cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	dfs(graph,n,p);

}
/*
debugged history

*/
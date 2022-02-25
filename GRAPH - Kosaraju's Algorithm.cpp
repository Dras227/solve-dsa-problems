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

void dfs_ordering(int src,std::vector<int> graph[],std::vector<int> &stack,bool *visited)
{
	visited[src] = true;


	for(auto nbr:graph[src])
	{
		if(!visited[nbr])
		{
			dfs_ordering(nbr,graph,stack,visited);
		}
	}

	stack.push_back(src);

}	
void dfs(int src,std::vector<int> graph[],bool *visited)
{
	visited[src] = true;

	cout << src << " ";

	for(auto nbr:graph[src])
	{
		if(!visited[nbr])
		{
			dfs(nbr,graph,visited);
		}
	}

	
}	
void solver(std::vector<int> graph[],std::vector<int> rev_graph[],int n)
{
	bool visited[n];

	memset(visited,0,n);	

	std::vector<int> stack;
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs_ordering(i,graph,stack,visited);
		}
	}

	// ordering  =  stack

	// step 2 - make the reverse graph - its already done while taking input

	// step 3 - do dfs according to the ordering list i.e. stack vector

	memset(visited,0,n);
	int component_name = 'A';
	for(int i=stack.size()-1;i>=0;i--)
	{
		int node = stack[i];

		if(!visited[node])
		{
			cout << "Component " << " --> ";
			dfs(node,rev_graph,visited);
			component_name++;
		}
	}
}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	// n - no. of nodes
	// p - no. of pairs

	int n,p;
	cin >> n >> p;


	std::vector<int> graph[n];
	
	// rev_graph - to store 
	std::vector<int> rev_graph[n];
cout <<";) "<<cnt++;
	while(p--)
	{
		int x,y;

		cin >> x >> y;

		graph[x].push_back(y);
		rev_graph[y].push_back(x);
	}
	
	 solver(graph,rev_graph,n);





}

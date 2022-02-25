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
	vector<pair<int,int>> *l;
	int v;

public:graph(int v)
	{
		this->v = v;
		l = new vector<pair<int,int>>[v];
	}
	void addEdge(int x,int y,int w)
	{
		l[x].push_back({y,w});
		l[y].push_back({x,w});
	}

	void prims()
	{
		// in this algorithm what i want first is one min_heap which 
		// stores the lowest cost minimum edge in graph in O(logN) time
		// initiating a min heap
		priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> Q;	

		// visited array that denotes whether a node in the graph is visited or not
		bool *visited = new bool[v]{false};


		// now we can start primms algo from any node as longs as we follow the rules

		Q.push({0,0});
		int ans =0 ;
		while(!Q.empty())
		{
			pair<int,int> best = Q.top();

			Q.pop();

			int to = best.second;
			int cost = best.first;

			if(visited[to])
				continue;

			// the vertext has not been visited yet
			ans+=cost;
			visited[to] = 1;
			for(pair<int,int> edge:l[to])
			{
				Q.push({edge.second,edge.first});
			}
		}
		delete [] visited;
		delete [] l;
		cout << ans << endl;
	}
};

void solve ()
{

	Dungeon_Master(); cout << "@Dras227\n\n\n";
	int n,q;

	cin >> n >> q;

	graph g(n);

	rep(i,n)
	{
		int x,y,w;
		cin >> x >> y >> w;
	
		g.addEdge(x,y,w);
	}
	

	g.prims();
}

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
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
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
			
		}
		void dfs_helper(T src,map<T,bool>&visited,list<T> &order)
		{
			visited[src] = true;

			// visit all the neighbours of the src node

			for(auto p:l[src])
			{
				if(!visited[p])
				{
					dfs_helper(p,visited,order);
				}
			}

			// push the visited node in the order list
			order.push_front(src);
		}
		void dfs(T src)
		{
			map<T,bool> visited;

			list<T> order;
			// mark all the nodes as not visited

			for(auto p:l)
			{
				T node = p.first;
				visited[node] = false;
			}

			// call the dfs helper all the nodes which are not visited

			for(auto p:l)
			{
				T node = p.first;

				if(!visited[node])
				{
					dfs_helper(node,visited,order);
				}
			}
			cout << endl;
			for(auto p:order)
			{
				cout << p << " ";
			}
			cout << endl;

		}
};
void solve ()
{
	Dungeon_Master(); cout << "@Dras_227 \n\n\n";
	
	graph<int> g;

	g.addEdge(1,3);
	g.addEdge(1,2);
	g.addEdge(2,4);
	g.addEdge(3,4);

	g.dfs(1);
	// problem link:
}
/*
debugged history

*/
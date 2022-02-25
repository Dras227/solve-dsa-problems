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

		void bfs(T src)
		{
			map<T,int> visited;
			queue <T> q;

			// at first we need to push the source into the queue
			// and mark source as visitied in the map

			q.push(src);
			visited[src] = true;

			while(!q.empty())
			{
				T node = q.front();
				q.pop();

				cout << node << ", ";

				for(T nbr:l[node])
				{
					if(!visited[nbr])
					{
						q.push(nbr);
						visited[nbr] = true;
					}
				}
			}
		}
		void bfs_dist(T src)
		{
			map<T,int> dist;
			queue <T> q;
			cout <<endl << "node\t:\tdistance from source 0\n";
			// at first we need to push the source into the queue
			// and mark source as visitied in the map

			q.push(src);
			dist[src] = 0;

			while(!q.empty())
			{
				T node = q.front();
				q.pop();

				cout << node << "\t\t:\t" <<dist[node] << endl;;

				for(T nbr:l[node])
				{
					if(!dist[nbr])
					{
						q.push(nbr);
						dist[nbr] = dist[node] + 1;
					}
				}
			}
		}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	graph <string> g;

	g.addEdge("0","1");
	g.addEdge("0","3");
	g.addEdge("1","2");
	g.addEdge("2","3");
	g.addEdge("3","4");
	g.addEdge("4","5");
	

	g.bfs("0");
	g.bfs_dist("0");
	// problem link:
}
/*
debugged history

*/
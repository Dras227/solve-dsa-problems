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
	map<T,list<T>>l;

public: void addEdge(T x,T y)
		{
			l[x].push_back(y);
		}

		int bfs(T src,T dest)
		{
			map<T,int> dist;
			map<T,T> parent;
			queue<T> q;

			// setting the distance of all the nodes to INT_MAX

			for(auto node_pair:l)
			{
				T node = node_pair.first;
				dist[node] = INT_MAX;
			}

			// initial hardcoded values 
			dist[src] = 0;
			q.push(src);
			parent[src] = src;

			while(!q.empty())
			{
				T node = q.front();
				q.pop();

				for(auto nbr:l[node])
				{
					if(dist[nbr]==INT_MAX)
					{
						dist[nbr] = dist[node] + 1;
						parent[nbr] = node;
						q.push(nbr);
					}
				}
			}

			// printing the path from destination to source

			T temp = dest;

			while(temp!=src)
			{
				cout << temp << "<--";
				temp = parent[temp];
			}
			cout << src << endl;
			return dist[dest];
		}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	int board [50] = {0};	
	board[2] =13 ;
	board[5] =2;
	board[9] =18;
	board[18] =11; 
	board[17] =-13;
	board[20] =-14;
	board[24] =-8;
	board[25] =10;
	board[32] =-2;
	board[34] =-22;

	// creating graph and adding edges

	graph<int> g;

	for(int i=0;i<=37;i++)
	{
		for(int dice = 1;dice<=6;dice++)
		{
			int j = i + dice;
			j+=board[j];
			if(j<=36)g.addEdge(i,j);
		}
	}
	g.addEdge(36,36);
	cout <<g.bfs(0,36);

	// problem link:
}
/*
debugged history

*/
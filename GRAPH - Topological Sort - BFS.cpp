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

public:graph(int V)
		{
			this->v = V;
			l = new list<int>[V];
		}

		void addEdge(int x,int v)
		{
			//since it is a directed graph
			l[x].push_back(v);
		}

		void topological_sort()
		{
			//indegree
			// making all indegree as zero
			int *indegree = new int[v];
			for(int i=0;i<v;i++)
			{
				indegree[i] = 0;
			}
	cout <<endl<< ";) - " << cnt++;

			// updating all indegrees by traversing through all edges x->y
			// indegree[y]++

			for(int i=0;i<v;i++)
			{
				for(int node:l[i])
				{
					//i->node
					//x->y 
					// hehehe ;)
					indegree[node]++;
				}
			}
	cout <<endl << ";) - " << cnt++;

			// step 1. BFS
			// find the nodes with 0 indegree
			queue<int> q;
			for(int i=0;i<v;i++)
			{
				if(indegree[i] == 0)
				{
					q.push(i);
				}
			}
	cout <<endl << ";) - " << cnt++;;

			// step 2. Removing the selected nodes from the queue whose indegree equal to 0 and 
			// updating(reducing by 1) the indegrees of its neighbour

				
			while(!q.empty())
			{
				int node = q.front();
				q.pop();
				cout << node << " ";

				for(int nbr:l[node])
				{
					indegree[nbr]--;
					if(indegree[nbr] == 0)
					{
						q.push(nbr);
					}
				}
			}

	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	graph g(6);

	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(4,5);
	g.addEdge(3,5);

	cout <<endl<< ";) - " << cnt++;
	g.topological_sort();
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
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
#include<unordered_map>
#include<queue>
#include<set>
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
template<typename T>
class graph
{
	map<T,list<pair<T,int>>> adjlist; // delhiNCR->(bnglr,500)->(mumbai,400)
	int v;
public:graph(int V)
	{
		this->v =V;
	}

	void addEdge(int x,int y,int w,bool bi)
	{
		adjlist[x].push_back({y,w});
			adjlist[y].push_back({x,w});
	}
	void printGraph()
	{
		for(pair<T,list<pair<T,int>>> vertices:adjlist)
		{
			T current_vertex = vertices.first;
			cout << current_vertex << ":";
			for(pair<T,int> nbrs:adjlist[current_vertex])
			{
				cout << "->(" << nbrs.first << ", "<< nbrs.second <<")"; 
			}
			cout << endl;
		}
	}
	void dijkstra(T src)
	{
		unordered_map<T,int> dist;

		for(pair<T,list<pair<T,int>>> d:adjlist)
		{	
			
			dist[d.first] = INT_MAX;
		}
		cout <<";) "<<cnt++ << endl;

		dist[src] = 0;

		set<pair<int,T>> s;
		s.insert({0,src});
		cout <<";) "<<cnt++ << endl;
		while(!s.empty())
		{
			auto p = *(s.begin());
			T name = p.second;
			int nodeDist = p.first ;

			s.erase( s.begin());
			for(auto childs:adjlist[name])
			{
				if((nodeDist+childs.second)< dist[childs.first])
				{
					T dest = childs.first;
					auto f = s.find({dist[dest],dest});
					if(f!=s.end()) s.erase(f);
					dist[dest] = nodeDist+childs.second;
					s.insert({dist[dest],dest}); 
				}
			}


		}

		for(auto d:dist)
		{
			cout << d.first << "is located at the distance of" << d.second << endl;
		}
	}


};
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,q;
	cin >> n >> q;
	graph<int> g(n);


	rep(i,q)
	{
		int x,y,w;
		cin >> x >> y >> w;

		g.addEdge(x,y,w,true);
	}
	g.printGraph();
	g.dijkstra(0);

}

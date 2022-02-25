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
	list<pair<int,int>> edge;
	int v;

	public: graph(int V)
	{
		v = V;
	}

	void addEdge(int x,int y)
	{
		edge.push_back(make_pair(x,y));
	}

	int find(int x,int *parent)
	{
		if(parent[x] == -1)
		{
			return x;
		}
		return find(parent[x],parent);
	}


	bool unionn(int x,int y,int *parent)
	{
		int s1 = find(x,parent);
		int s2 = find(y,parent);

		if(s1!=s2) s2[parent] = s1;

		// if x and y belong to same leader then the edge between them is creating a cycle in the graph
		// glitch in the matrix
		else return true;

		return false;
	}

	int detect_cycle()
	{	 
		int *parent = new int[v];

		repr(i,0,v)
		{
			parent[i] = -1;
		}

		;
		for(auto edger:edge)
		{
			int x = edger.first;
			int y = edger.second;

			if(!unionn(x,y,parent));
			else
			{
				 cout << "Nasty Cycle Exist";
				 return 0;
			}
		}
		
		cout << "Dirty Cycles does not exist";
	return 0;

	}

};
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
int p,n;
	cin >> n >> p;
	graph g(n);

	

	rep(i,n)
	{	
		int x,y;
		cin >> x >> y;

		g.addEdge(x,y);
	}
	
	g.detect_cycle();
	// What this algorthm does 


}

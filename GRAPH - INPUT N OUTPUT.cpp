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
#include<list>
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
class graph
{
	int v;

	list <int> *l;

public:
	graph(int v) // graph constructor 
	{
		this->v = v; // assigning the value of parameter variable 
						//to the class varible
					// i.e v is the total no. of nodes in the graph
		// declaring the lists with v nodes

		l = new list<int> [v];
	}

	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void printAdjList()
	{
		// iterate overall nodes in the list

		for(int i=0;i<v;i++)
		{
			cout << "Vertext: " << i ;

			cout << " -> ";

			for(int nbr:l[i])
			{
				cout << nbr << ", ";
			}

			cout << endl;
		}
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	graph g(5);

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(1,4);
	g.printAdjList();

	// problem link:
}
/*
debugged history

*/
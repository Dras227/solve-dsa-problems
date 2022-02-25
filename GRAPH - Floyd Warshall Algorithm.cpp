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
vector<vector<int>> floyd_warshall(vector<vector<int>> graph)
{
	vector<vector<int>> dist(graph);

	// Phases, in kth phase we inlcude vertices (1,2,..k) has intermediate vertices
	int V = graph.size();
	for(int k=0;k<V;k++)
	{
		//Iterate over entire 2D matrix
		for(int i=0;i<V;i++)
		{
			for(int j=0;j<V;j++)
			{
				//if vertex k is include and can we minimize the dist?
				if(dist[i][j] > dist[i][k] + dist[k][j] )
				{
					  dist[i][j] = dist[i][k] + dist[k][j];
				}					
			}
		}
	}
	return dist;
}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,m;
	// n is the number of vertices
	// m is the number of edges(pair of vertices and edges)
	vector<vector<int>> graph ={
			{0,INT_MAX,-2,INT_MAX},
			{4,0,3,INT_MAX},
			{INT_MAX,INT_MAX,0,2},
			{INT_MAX,-1,INT_MAX,0}
		};
	auto result = floyd_warshall(graph);

	for(int i=0;i<result.size();i++)
	{	
		for(int j=0;j<result.size();j++)
		{
			cout << result[i][j] << " "; 
		}
		cout << endl;
	}

}

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
void Dungeon_Master() {freopen("C:\\Users\\manud\\Downloads\\c++\\compcode\\input.txt", "r", stdin); freopen("C:\\Users\\manud\\Downloads\\c++\\compcode\\output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
std::vector<std::vector<int>> graph(1000);
int bfs(int src,int n)
{

	int visited[n] = {69};
	cout << n; 
	rep(i,n) visited[i] = 69;
	queue<int> q;

	q.push(src);
	visited[src] = 0;
	int ans = INT_MAX;
	
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		
		
		for(int nbr:graph[node])
		{
			if(visited[nbr]==69) //normal case
			{
				cout << endl << "hii" << nbr  ;
				q.push(nbr);
				visited[nbr] = visited[node] + 1;
			}
			else if(visited[node] >= visited[nbr]) 
			{
				ans = min(ans,visited[nbr]+visited[node]+1);
			}
		}
	}

	return ans;
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	int n,p;

	cin >> n >> p;

	rep(i,p)
	{
		int x,y;

		cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);

	}

	
	int ans = 69;
	repr(i,1,n)
	{

		int temp = bfs(i,n);
		ans = min(temp,ans);
	}

	cout << endl << ans ;

	// problem link:
}
/*
debugged history

*/
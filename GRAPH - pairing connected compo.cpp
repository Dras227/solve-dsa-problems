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
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
 
class graph
{
	list<pair<int,int>> edgelist;
	int v;

	public: graph(int V)
	{
		v = V;
	}
	void addEdge(int x,int y)
	{
		edgelist.push_back(make_pair(x,y));
	}
	int find(int i,int *parent)
	{
		if(parent[i] == -1)
		{
			return i;
		}	

		return parent[i] = find(parent[i],parent);
	}

	int union_set(int x,int y,int parent[],int rank[])
	{
		int s1 = find(x,parent);
		int s2 = find(y,parent);
			
		cout <<endl << "parent of" << x <<" = "<<  s1 << endl << "parent of "<< y <<" = "<< s2; 
		cout <<endl << "rank of" << s1 <<" = "<< rank[s1] << endl << "rank of "<< s2 <<" = "<< rank[s2]; 
		if(s1!=s2)
		{
			if(rank[s1]>=rank[s2])
			{
				parent[s2] = s1;

				rank[s1] += rank[s2];
				
			}
			else 
			{
				parent[s1] = s2;
				rank[s2] += rank[s1];
			}
		}
		else return 1;

		return 0;
	}

	int contains_cycle()
	{
		int *parent = new int[v+1];
		int *rank = new int[v+1];

		for(int i=0;i<v;i++)
		{
			parent[i] = -1;
			rank[i] = 1;
		}
		
		for(auto edge: edgelist)
		{
			int x = edge.first;
			int y = edge.second;

			union_set(x,y,parent,rank);
		}

		int tot= 0,ind_sum =0;
		cout << endl;
		rep(i,v)
		{

		 cout <<"rank[i] =" <<rank[i] << " ";cout << endl;
		 if(rank[i]>=2)
		 {
		 	tot+=rank[i];
		 	ind_sum += nCr(rank[i],2);
		 	cout <<endl <<"nCr(" <<rank[i]<< ",2) =" << nCr(rank[i],2) << endl;
		 }
		}
		tot = nCr(tot,2);
		 cout << endl << endl << tot-ind_sum;
		//cout <<rank[] << endl;
		delete [] parent;
		delete [] rank;
		
		
		return 0;
	}
};
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n,p;

	cin >> n >> p;

	graph g(n);


	repr(i,1,p)
	{
		int x,y;
		cin >> x >> y;

		g.addEdge(x,y);
	}
	
	g.contains_cycle();
}

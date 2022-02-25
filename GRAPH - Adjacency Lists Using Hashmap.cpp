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
#include<unordered_map>
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
#include <stdio.h>
#include<stdbool.h>
bool isNotTrackedAlready(int, int[]);

int main()
{
    int arr[1000], a[1000],b[1000],n,a1,b1,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a[i]=-1;
    }
    scanf("%d%d",&a1,&b1);
    while(a1!=-1 && isNotTrackedAlready(a1,a))
    {
        a[a1]=0;
        a1=arr[a1];
    }
    while(b1!=-1 || isNotTrackedAlready(b1,b))
    {
        if(!isNotTrackedAlready(b1,a))
        {
            printf("%d\n",b1);
            return 0;
        }
        b[b1]=0;
        b1=arr[b1];
    }
    printf("-1");
    return 0;
}    
    
bool isNotTrackedAlready(int p, int t[1000])
{
    if(t[p]==0)
    return false;
    else
    return true;
}
class graph
{
	unordered_map<string,list<pair<string,int>>> l;

	public: void addEdge(string x,string y,int wt,bool bidir)
	{
		l[x].push_back(make_pair(y,wt));

		if(bidir) l[y].push_back(make_pair(x,wt));
	}

	void printAdjList()
	{
		for(auto p:l)
		{
			cout << "Vertex: " << p.first << " -> ";

			for(auto nbr:p.second)
			{
				cout  << "(" << nbr.first << "," << nbr.second << "), ";
			}
			cout << endl;
		}
	}
};
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";
	
	graph g;

	g.addEdge("a","b",50,true);	
	g.addEdge("c","s",20,false);

	g.printAdjList();
}
/*
debugged history

*/
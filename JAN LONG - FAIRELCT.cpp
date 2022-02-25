#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int i,j;void pA(int *a,int s,int e){cout << endl;repr(i,s,e) cout << a[i] << " ";return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	//Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;

	while(t--)
	{
		int n,m;

		cin >> n >> m;

		int votesA=0,votesB=0;
		int a[n],b[m];
		rep(i,n)
		{
			cin >> a[i];
			votesA+=a[i];
		}
		rep(i,m)
		{
			cin >> b[i];
			votesB+=b[i];
		}

		//cout << votesA << votesB << endl;

		sort(a,a+n);
		sort(b,b+m,greater<int>());
		int swa=0;
		if(votesA>votesB)
		{
			cout << 0 << endl;
		 	continue;
		 }
		int limit = (m<n)?m:n;
		for(int i=0;i<limit;i++)
		{
			if(votesA<=votesB)
			{
				votesA-=a[i];
				votesA+=b[i];
				votesB-=b[i];
				votesB+=a[i];
				swap(a[i],b[i]);
				swa+=1;
			}
			if(votesA>votesB)
				break;
		}
		if(votesA>votesB) cout << swa << endl;
		else cout << -1 << endl;
	}	

	// problem link:https://www.codechef.com/JAN21C/problems/FAIRELCT 
}
/*
debugged history
2
2 3
2 2
5 5 5
4 3
1 3 2 4
6 7 8


2 2
5 5 5

votesA = 4
votesB = 15

i = 0

A = 4-2 = 2
A = 2 + 5 = 7

swap = 1;

i=1,

votesA = 
*/
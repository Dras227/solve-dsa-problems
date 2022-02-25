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
int greedyAF(int k,int *a)
{
	for(int i=k;i>=0;i++)
	{
		if(a[i]>=1)
		{
			a[i]-=1;
			k-=i;
		}
	}
}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;


	while(t--)
	{
		int n,k;
		cin >> n >> k;


		int a[1000001];


		rep(i,n)
		{
			int item;
			a[item]+=1;
		}

		/*int mike = 0,tracy = 0;int cnt=0;
		bool mikeF=1,tracyF=1;
		repr(i,1,n)
		{
			if(mike<tracy and mikeF)
			{
				mike+=v[i];
				cnt++;

			}
			else if(tracyF)
			{
				tracy+=v[i];
				cnt++;
			}
			//cout << mike << " " << tracy << " " << cnt << endl;
			if(mike>=k) mikeF = 0;
			if(tracy>=k) tracyF = 0;
		}

		cout << cnt;*/

		cout << greedyAF(k,a);

	}

	// problem link: 
}
/*
debugged history

*/
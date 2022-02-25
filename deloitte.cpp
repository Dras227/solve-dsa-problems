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

void solve ()
{
	Dungeon_Master();

	int n;
	cin >> n;


	int  mp[n][2];

	for(int i=0;i<n;i++)
	{
		int i1,i2;

		cin >> i1 >>i2;

		mp[i][0] = i1;
		mp[i][1] = i2;
	}

int diff_min = 100000;

int p1=0,p2=0;
	for(int i=0;i<n;i++)
	{
		int p = mp[i][0] *mp[i][1];

		for(int j=i+1;j<n;j++)
		{

			int c = mp[j][0] *mp[j][1];
			if(abs(p-c) <  diff_min) 
			{
				p1=i;
				p2 = j; 
				diff_min = abs(p - c);
				
			}
		}
	}
	cout << mp[p1][0] <<" " <<  mp[p1][1] << endl;; 
	cout << mp[p2][0] <<" " <<mp[p2][1] << endl;;



}

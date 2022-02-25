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
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int t;

	cin >> t;

	while(t--)
	{
		int _totalDays,_startingAmount,_doubling_rate,_doubling_days;

		cin >> _totalDays >>_doubling_days>> _startingAmount >> _doubling_rate ;

/*
		int nq = 0,thresh = 1,ans = 0;

		for(int i=1;i<=_totalDays;i++)
		{
			if(thresh > _doubling_days)
			{
				thresh = 1;
				nq++;
			}

			ans += (_startingAmount + (nq*_doubling_rate));
			thresh++;
		}
*/
		int ans = 0;
		int n_interval = (_totalDays / _doubling_days);

		n_interval-=1;

		int sum = (n_interval*(n_interval+1))/2;

		ans = (_startingAmount*_totalDays)+(_doubling_days*_doubling_rate*sum);
		
		
		int remian = _totalDays - (_doubling_days*(n_interval+1));
		ans += (_doubling_rate*remian);
		cout << ans << endl;

	}
}

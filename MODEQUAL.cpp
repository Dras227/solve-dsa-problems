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
#include<set>
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
void solver();
void solve ()
{
	//Dungeon_Master(); cout << "@Dras227\n\n\n";
	
	int t;
	cin >> t;
	while(t--)
	{
		solver();
	}
}
void solver()
{
		int n; cin >> n;
		int A[n];
		for (int i = 0; i < n; i++)
			cin >> A[i];

		sort(A, A + n);
		int i = 0;
		while (i < n and A[i] == A[0])
			i++;
		int cnt = i;
		while (i < n) {
			if (A[i] <= A[0] * 2) {
				cout << n << '\n';
				return;				
			}
			i++;
		}
		cout << n - cnt << '\n';
}

/*@Dras227


3
1



while(2<3)
{
i2	i2<=i0*2
	3 <= 1*1 false;
	i++
i3 3<3
}

cout << 1;

===========================
1 1 2 2 20 20 23 23 239

i=0

i=2

while(i < 9)
{
i2 
i3
i4
i5 20 < 1*1

cout << 7
}


*/
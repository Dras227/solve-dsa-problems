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
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; cerr << x; cerr << endl;
#else
#define debug(x)
#endif
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("Error.txt", "w", stderr);
cout << "@Dras227\n\n\n";
#endif
solve();return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,k;

		cin >> n >> k;

		string s;

		cin >> s;

		

		int required_ops1 = 0;
		

		int low = 0,high = n-1;

		while(low<=high)
		{
			if(s[low] != s[high])
				required_ops1++;

			low++;
			high--;
		}

		debug(required_ops1);

		int rem = k - required_ops1;


		if(rem>=0 and rem%2 == 0) cout << "Yes" << endl;
		else if(rem >=0 and n%2 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;

	}
}



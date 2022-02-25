#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; cerr << x; cerr << endl;
#else
#define debug(x)
#endif
void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); 
#ifndef ONLINE_JUDGE
cout << "@Dras227\n\n\n";
freopen("Error.txt", "w", stderr);
#endif
solve();return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE


void solve ()
{
	int n,d;
		cin >> n >> d;

		int a[n];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort(a,a+n);

		for (int i = 0; i < n; i++)
		{	
			if(i!=n-1)
			if(a[i+1]-a[i] <=d)	
				i++,count++;	
		}
		cout << count << endl;
	



	return;
}



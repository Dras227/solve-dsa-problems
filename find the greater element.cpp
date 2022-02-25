#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
   IOS;
   cin.tie(NULL);
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
void solve ()
{
	int i,n;
	stack<int> s;
	cin >> n;

	int a[n];

	rep(i,n) cin >> a[i];

	//rep(i,n) cout << a[i] << " ";
	int res[10000];
	rep(i,2*n)
	{
		while(!s.empty() and a[i%n] > a[s.top()])
		{
			res[s.top()] = a[i%n];
			s.pop();
		}
		
		if(i<n) s.push(i);
	}
	
	rep(i,n){
	if(!res[i])
	{
		cout << "-1" << " ";
		continue;
	}
	 cout << res[i] << " ";}
} 

/*intput.txt
output.txt*/
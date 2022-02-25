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
    int n,i;
 cin >> n;
    int a[n];

    rep(i,n) cin >> a[i];

    int span[n];

    stack<int>s;
    rep(i,n)
    {
    	int current = a[i];

    	while(!s.empty() and current >= a[s.top()]) s.pop();

    	if(s.empty()) span[i] = i+1;
    	else
    	{
    		int prev_high = s.top();
    		span[i] = i - prev_high;
    	}
    	s.push(i);
    }

    rep(i,n) cout << span[i] << endl;
} 

/*intput.txt
output.txt*/
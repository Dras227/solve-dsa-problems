#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS ios_base::sync_with_stdio(false); 
void solve();
void dras227()
{
#ifndef dras2272000
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
    dras227();
    IOS;
    cin.tie(NULL);
    int t;cin >> t; while(t--)
    solve();
    return 0;
}
int tile(int n,int m)
{
    if(m>n || n==1) return 1;
    if(m==n) return 2;
    return tile(n-1,m)+tile(n-m,m);
}
void solve ()
{
      int i,n,m;
    cin >> n >> m;
    cout << tile(n,m)<<endl;
} 

/*intput.txt
output.txt*/
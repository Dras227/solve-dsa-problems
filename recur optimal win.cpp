#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
int coins[1000] ;
optimalGame(ll i,ll j){
    if(i > j){
        return 0;
    }

    // Consider both the possibilities. You can pick either the first or the last coin.
    // Since the opponent plays optimally , we would get the minimum of the remaining coins for each choice.
    ll pickFirst = coins[i] + min( optimalGame(i+2,j) , optimalGame(i+1,j-1) ) ;
    ll pickLast = coins[j] + min( optimalGame(i,j-2) , optimalGame(i+1,j-1) ) ;

    // Pick the max of two as your final result
    ll ans = max(pickFirst,pickLast);

    return ans;
}
void solve ()
{
    
    int i;int n;cin >> n;
    rep(i,n)cin >> coins[i];
   
    cout << optimalGame(0,n-1);//cout << " hello";
   
}

/*intput.txt
output.txt*/
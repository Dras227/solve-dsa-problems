#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
int find(string s,int n,int p)
{
    if(n==-1)
        return 0;

    int ans = (s[n]-'0')*p;
    p*=10;
    return ans+find(s,n-1,p); 
}

void solve ()
{
    int i,j,n;
    string s;
    cin >> s;
    n = s.length();
   // cout << n << endl << endl;
    cout << find(s,n-1,1);
} 

/*intput.txt
output.txt*/
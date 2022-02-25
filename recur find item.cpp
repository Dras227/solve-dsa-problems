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
   //Dungeon_Master();
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
void find(int a[],int n,int item)
{
	if(n==-1)
		return;

	if(a[n]==item)
	{
		find(a,n-1,item);
		cout << n << " ";
	}else
	find(a,n-1,item);
}
void solve ()
{
    int i,j,n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    cin >> j;

    find(a,n-1,j);
} 

/*intput.txt
output.txt*/
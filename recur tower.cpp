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
void hanoi(int n,char source,char temp,char dest)
{
	if(n==0) return;

	hanoi(n-1,source,dest,temp);

	cout<<"Moving ring "<<n<<" from " <<source <<" to " <<dest << endl;

	hanoi(n-1,temp,source,dest);
}
void solve ()
{
    int i,j,n;
     cin >> n;

    hanoi(n,'A','C','B');
} 

/*intput.txt
output.txt*/
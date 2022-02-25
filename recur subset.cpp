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
    int t;cin >>t;while(t--)
        solve();
    return 0;
}
void find(int *a,int i,int n,int *out,int j)
{
	if(i==n-1){int k,sum =-1;
		rep(k,j){ 
			cout << a[k] << " + ";
			sum+=a[k];
		} cout << "=" << <<endl;

		//cout << endl;

		if(sum==0)
		{
			cout << "Yes";
			 	
		} 
		return;
	}
	out[j] = a[i];
	find(a,i+1,n,out,j+1);

	find(a,i+1,n,out,j);
	
	



}
void solve ()
{
	int i,j,n;
	cin >> n; int a[n];

	rep(i,n) cin >> a[i] ;
	int out[1000] ={0};
	find(a,0,n,out,0);  
} 

/*intput.txt
output.txt*/
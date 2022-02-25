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
int partition(int *a,int s,int e)
{
	int j=s;int i=s-1;
	int pivot=a[e];

	for(;j<=e-1;)
	{
		if(a[j]<=pivot)
		{	i=i+1;
			swap(a[i],a[j]);
		}
		j = j+1;
	}

	swap(a[i+1] ,a[e]);

	return i+1;
}
void quick_sort(int *a,int s,int e)
{
	if(s>=e)
	{
		return;
	}

	int p = partition(a,s,e);

	//sort the element that are at right of the pivot
	quick_sort(a,0,p-1);

	//sort the element that are at left of the pivot
	quick_sort(a,p+1,e);
}
void solve ()
{
  int i,j,n;

    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    quick_sort(a,0,n-1) ;
    rep(i,n) cout << a[i] << " "; 

} 

/*intput.txt
output.txt*/
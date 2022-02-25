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
void merge(int a[],int s,int e)
{
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;int k=s;
	int out[1000];
	while(i<=mid and j<=e)
	{
		if(a[i]<a[j])
		{
			out[k++] = a[i++];
		}
		else 
			out[k++] = a[j++];
	}

	if(i<=mid)
	{
		out[k++] = a[i++];
	}
	if(j<=e)
	{
		out[k++] = a[j++];
	}

	for(int i=s;i<=e;i++)
	{
		a[i] = out[i];
	}
}
void mergesort(int a[],int s,int e)
{
	if(s>=e) return;

	int mid = (s+e)/2;

	//sort the left part of the array

	mergesort(a,0,mid);

	//sort the right part of the array

	mergesort(a,mid+1,e);

	merge(a,s,e);



}
void solve ()
{
    int i,j,n;

    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    mergesort(a,0,n-1) ;
    rep(i,n) cout << a[i] << " "; 
} 

/*intput.txt
output.txt*/



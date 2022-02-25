#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i) 
void solve();
void dras227()
{
#ifndef dras2272000
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void count_101()
{
    cout << "\n\n\n\n\n\n\nIts dras227 and its try no. ";
    ifstream in("count.txt");
    int n;
    in >> n;
    cout << n; // get int from the file
    ofstream myfile;
    myfile.open ("count.txt");
    n = n+1;
    myfile << n;
}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
    dras227();
    solve();
    count_101 ();
    return 0;
}
void merge(int a[],int s,int e)
{
    int i=s,mid = (s+e)/2,j=mid+1,k=s,temp[1000];

    while(i<=mid && j <=e)
    {
        if(a[i] >= a[j])
            temp[k++] = a[j++];
        else
            temp[k++] = a[i++];
    }

    while(i<=mid)
    {
        temp[k++] = a[i++];
    }
    while(j<=e)
    {
        temp[k++] = a[j++];
    }

   repr(i,s,e) a[i] = temp[i];

    return;

}
void merge_sort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    //follow 3 steps
    // 1. Divide the array
    int mid = (s+e)/2;
    // 2. Sort the Divided array recursively
    merge_sort(a,0,mid);
    merge_sort(a,mid+1,e);

    // 3. Merge the divided arrays into the single array
    merge(a,s,e);
}
void solve ()
{
    int i,n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];

    merge_sort(a,0,n-1);

    rep(i,n)cout << a[i] <<" ";
} 

/*intput.txt
output.txt*/
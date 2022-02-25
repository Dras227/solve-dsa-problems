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
int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;

    int pivot=a[e];

    for(;j<=e-1;)
    {
        if(a[j] <=pivot){
            i = i+1;
           swap(a[i],a[j]);
        }
       
       j = j+1;
    }
    
    swap(a[i+1],a[e]);

    return i+1;
}
void quick_sort(int *a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    //finding the pivot element
    int p = partition(a,s,e);
    //sorting the left part of the array recursively
    quick_sort(a,s,p-1);
    //sorting the right part of the array recursively
    quick_sort(a,p+1,e);
    
}
void solve ()
{
    int i,n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];

    quick_sort(a,0,n-1);

    rep(i,n) cout << a[i] <<" ";
} 

/*intput.txt
output.txt*/
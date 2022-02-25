#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
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
int reclinear(int a[],int n,int item)
{
    
    if(a[0] == item) 
        {
            return n;
        }
    if(n==0) return -1;
    return reclinear(a+1,n-1,item);
    
}
void solve ()
{
    int n;
    cin >> n;
    int a[n];
int i;
    rep(i,n) cin >> a[i];
    
    
    int item; cin >> item;

    cout  <<  reclinear(a,n,item);
} 

/*intput.txt
output.txt*/
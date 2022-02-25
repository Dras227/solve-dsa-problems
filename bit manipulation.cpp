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
int clearbitsItoJ(int n,int i,int j)
{
    int ones =(~0);
    int a = ones << (j+1);
    int b = (1<<i) -1;

    int mask =  a|b;

    int ans = n&mask;
    return ans;
}
int setBitsItoJ(int n,int i,int j,int m)
{
    int cleard_bit = clearbitsItoJ(n,i,j);
    int mask = (m << i);
    int ans = cleard_bit | mask;

    return ans;
}
void solve ()
{   int n=31,j=3,i=1,m=5;
    cout << setBitsItoJ(n,i,j,m);
} 

/*intput.txt
output.txt*/
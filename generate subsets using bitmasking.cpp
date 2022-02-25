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
void getcharr(char a[],int n)
{
    int j=0;

    while(n>0)
    {
        int last_bit = n&1;
        if(last_bit ==1)
        {
            cout << a[j] ;
        }
        j++;
        n = n >> 1;
    }
    cout << endl;
}
void solve ()
{
    int i;
    char a[10];int n;cin >> n;
    rep(i,n) cin >> a[i];

    for( i=0;i<=((1<<n)-1);i+=1)
        getcharr(a,i);
       

    cout<<i;



} 

/*intput.txt
output.txt*/
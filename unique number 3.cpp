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
void solve ()
{
    int n,i;

    cin >> n ; int b[n];int a[64] = {0};
    rep(i,n)
    {
        int no;
        cin >> no;
        b[i] = no;

        int pos =-1;int bit =0;
        while(no > 0)
        {

            
            a[++pos]+=no & 1;
            //cout << b[i] <<" = " << (no & 1) << endl ;
            no = no >> 1;
        }
        
    }

    rep(i,64) 
    {
        a[i] %=3;
    }
    int p=1,sum =0;
    rep(i,64)
    {
        sum+=(a[i]*p);
        p*=2;
    }

    cout <<sum ;

} 

/*intput.txt
output.txt*/
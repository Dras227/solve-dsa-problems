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
    int i,t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n],pre[n]={0};int sum = 0;
        pre[0] = 1;
        rep(i,n)
        {
            cin >> a[i];    
            sum+=a[i];
            sum%=n;
            sum = (sum+n)%n;
           pre[sum]++;
        }
        int ans = 0;
       // rep(i,n) cout << pre[i] << " ";
        rep(i,n)
        {   
            int m =pre [i] ;
                ans += (m)*(m-1)/2;
        }

        cout <<ans<< endl;
    }

} 

/*intput.txt
output.txt*/
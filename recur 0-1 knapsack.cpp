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
void Dungeon_Master()
{
#ifndef Dungeon_Master
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
    Dungeon_Master();
    solve();
    count_101 ();
    return 0;
}
int knapsack(int n,int prof[],int wt[],int w)
{
    if(w == 0 || n == 0)
    {

        return 0;
    }
    int ans=0;
    int inc,exc = 0;

    if(wt[n-1]<=w)
    inc = prof[n-1] + knapsack(n-1,prof,wt,w-wt[n-1]);

    exc = knapsack(n-1,prof,wt,w);

    return max(inc,exc);
}
void solve ()
{
      int i,n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    int w[n];
    rep(i,n) cin >> w[i];

   cout << knapsack(n,a,w,7) << endl;
} 

/*intput.txt
output.txt*/
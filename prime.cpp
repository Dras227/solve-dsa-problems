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
#define pb push_back
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
void prime(vector<int> &primes,int n)
{
    std::vector<int> v(1000005,0);

    //cout << " hekki";
    for(int i=3;i<=n;i+=2)
    {
        v[i] = 1;
        //cout << prime[i] << endl;
    }

    for(int i=3;i<=n;i+=2)
    {
        if(v[i]==1)
        {
            for(int j = i*i;j<=n;j = j + i)
            {
                v[j] = 0;
            }
        }
    }    
    v[0] = v[1] = 0;
    v[2] = 1;

    int i;
    
    
    rep(i,n) 
    {
        if(v[i]==1)
        {
            primes.push_back(i);
        }
    }  
}
void solve ()
{   
    

    int t;
    cin >> t;
   // cout << n;
    std::vector<int> primes;
    
    prime(primes,1000005);
    int i;
    
    while(t--)
    {
        int n;
        cin >> n;
        cout << primes[n-1] <<endl;
    }    
  
}
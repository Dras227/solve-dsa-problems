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
void prime_sieve(int p[],int a,int b)
{
   
    for(int i=3;i<=b;i+=2)
    {
        p[i] = 1;
    }

    for(int i=3;i<=b;i+=2)
    {
        if(p[i] ==1)
        {
             for(int j = i*i;j<=b;j+=i)
                p[j] = 0; 
        }
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}
void solve ()
{
    int t; 

    cin >> t;

//
    while(t--)
    {
        int i,a,b;//cout<< "ehllo";
    cin >> a >> b;
    
    int p[b]={0};
    prime_sieve(p,a,b);
    int count =0;
    for (int i = a; i <=b; ++i)
    {
        if(p[i] == 1)
             count +=1;
    }
    cout << count << endl;
    }
} 

/*intput.txt
output.txt*/
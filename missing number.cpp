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
    cout <<endl << INT_MAX;
    return 0;
}
void solve()
{

    int t;
    cin >>t; 
    while(t--)
   {
    int i,n;
    cin >> n;
    int a[n]={0};

    int number_missing = 1000000,repeating_number = 1000000;
    int no;

    rep(i,n) 
    {
        cin >> no;
        a[no] +=1;
    }
    repr(i,1,n)
    {
        if(a[i]>1) repeating_number =  min(repeating_number,i);
        if(a[i]==0)number_missing =  min(number_missing,i);
    }
   
    //cout << "number_missing:" <<number_missing <<endl<<"repeating_number:" << repeating_number << endl;
    cout << repeating_number << " "<< number_missing <<endl;
   }
}
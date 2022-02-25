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
int sort_checkk(int a[],int n)
{
    if(n==1 || n==0)
    {
       //cout << a[n-1] << " less than " << a[n] << endl; 
        return a[0] <= a[1]?1:0;

    }
    int k = a[n]  >= a[n-1]? 1:0;
   // cout << a[n-1] << " less than " << a[n] << endl; 
    return min(k,sort_checkk(a,n-1)); 

}
bool sort_check(int a[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if((a[0] < a[1]) and sort_check(a+1,n-1))
    {
        return true;
    }
    return false;
}
void solve ()
{
    int n;
    cin >> n;
    int a[n];int i;
    rep(i,n) cin >> a[i] ;

    if(sort_checkk(a,n-1)) cout << "true" ;
    else cout <<"false";
} 

/*intput.txt
output.txt*/
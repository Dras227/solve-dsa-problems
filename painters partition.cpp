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
bool check(int boards[],int n,int k,int t,int min_minutes)
{
    
    int minutes_spent = 0,painters_used =1;
    for(int i=0;i<n;i+=1)
    {
        if((minutes_spent+(boards[i])*t) > min_minutes)
        {
            painters_used++;
            minutes_spent = (boards[i]*t);
            if(painters_used > k) 
            {
                return false;
            }
        }
        else
            minutes_spent += (boards[i]*t);
    }

    return true;
}
int find(int boards[],int n,int k,int t)
{
    int s = boards[n-1]*t,e=0,mid=0,ans=0,i;

    rep(i,n) e+=(boards[i]*t); //cout << e << endl;

    while(s<=e)
    {
        mid = (s+e) /2;

        if(check(boards,n,k,t,mid))
        {   
           
            e = mid -1;
            ans = mid;
        d        else 
            s=mid+1;

    }
    return ans;
}
void solve ()
{
    int i;
    int n,k,t;

    cin >> n >> k >> t; 
    int boards[n];
    rep(i,n) cin >> boards[i];
    cout << (find(boards,n,k,t));
} 

/*intput.txt
output.txt*/
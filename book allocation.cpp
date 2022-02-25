#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i) 
int i;
void solve_7();
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
    solve_7();
    count_101 ();
    return 0;

}
bool check(int a[],int n,int m,int min_pages)
{
    int pages_read = 0,students=1;


    rep(i,n)
    {
        if((pages_read+a[i] )> min_pages)
        {
            students++;
            pages_read =a[i];
            if(students > m) return false;
        }
        else
        {
            pages_read+=a[i];
        }
    }

    return true;
}
int find(int a[],int n,int m)
{
    int s=a[n-1];int sum =0;
    rep(i,n) sum+=a[i];
    int e = sum;
    int mid;
    int ans = INT_MAX;
    while(s<=e)
    {
        int mid = (s+e)/2;

        if(check(a,n,m,mid))
        {
           //cout << mid << endl;
            ans = min(mid,ans);
            e = mid-1 ;
        }
        else 
        {
            s= mid +1;
        }
    }

    return ans;
}
void solve_7()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n,m;

        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << find(a,n,m) <<endl;
    }
} 

/*intput.txt
output.txt*/
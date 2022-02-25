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
  //  cout << "helolo";
    solve();//cout << "helolo";cout << "helolo";cout << "helolo";cout << "helolo";cout << "helolo";
    count_101 ();
    return 0;

}
bool check(int n,int m,int x,int y,int mid)
{
    int total_coupons = m + (n-mid)*y;

    int required_coupons = mid * x;

    if(total_coupons >= required_coupons) return true;
    return false;
}
int find(int n,int m,int x,int y)
{
    int s = 0,e =n,mid =0,ans=0;

    while(s<=e)
    {
        mid = (s+e) /2;

        if(check(n,m,x,y,mid))
        {
            s=mid+1;
            ans = mid;
        }
        else 
            e = mid -1;
    }
    return ans;
}
void solve ()
{
    int i;
    int n,m,x,y;

    cin >> n >> m >> x >> y ;

    cout << find(n,m,x,y);
} 

/*intput.txt
output.txt*/
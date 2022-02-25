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
int find(int a[], int n)
{
   int i,ans =0;

   rep(i,n) ans = ans^a[i];


   int res = ans,pos =0;
   while((res&1) != 1)
   {
        
         pos++;
        res = res >> 1;
   }

   int mask =  (1 << pos) ;
   int ans1 =0;
   rep(i,n) 
   {
        if(mask & a[i]) 
         {
            ans1 = a[i]^ans;
        }
   }

  // cout << ans1 << endl;
   int ans2 = ans^ans1;
   cout <<ans1 << " " <<  ans2 ;
   return ans;
}
int find(int a,int b)
{
    int ans =1;

    while(b>0)
    {
        if((b&1)==1)
        {
            ans = ans*a;
        }
        a = a*a;
        b = b >> 1;

    }
    cout << ans;
    return ans;
}
void solve ()
{
   int a,b; 
   cin >>  a>> b;


    int t= find(a,b);
} 

/*intput.txt
output.txt*/
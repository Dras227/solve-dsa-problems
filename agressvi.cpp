#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
//
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

   //odras227();
   // cout << "helolo";
    solve();//cout << "helolo";cout << "helolo";cout << "helolo";cout << "helolo";cout << "helolo";
   //o count_101 ();
    return 0;

}
bool check(int stalls[],int n,int cows_to_be_placed,int min_gap)
{
    int last_placed = stalls[0],cows=1;
   for (int i = 1; i < n; ++i)
    {
        if((stalls[i] - last_placed) >= min_gap)
        {
            last_placed = stalls[i];
            cows+=1;
            if(cows_to_be_placed == cows) return true;
            
        }
    }
   return false;
}
int find_optimal(int stalls[],int n,int c)
{
    int s=0;int e=stalls[n-1]-stalls[0];int ans=0;
    ans = 0;
    while(s<=e)
    {
        int mid =(s+e)/2;

        if(check(stalls,n,c,mid))
        {
            ans = mid; 
            s=mid+1;
            
        }
        else
        {
            e=mid-1;
        }
    }

    return ans;
}
void solve ()
{   int t; cin >> t;

    while(t--)
    {
    int i;
    int n,c;

    cin >> n >> c;
    int stalls[n];
    rep(i,n) cin >> stalls[i];
    sort(stalls,stalls+n);
    cout << find_optimal(stalls,n,c) <<endl;
}
} 

/*intput.txt
output.txt*/
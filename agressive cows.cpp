#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
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
bool check(int a[],int n,int c,int x)
{   
   int  last_pos = a[0],cows_placed =1;
    for(int i=1;i<n;i+=1)
    {
        if(a[i] - last_pos >= x)
        {
            if(++cows_placed == c)
                return true;
            last_pos = a[i];
        }
    }

    return false;
}
void solve()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,c; cin >> n >> c;

        int a[n];

        for(int i=0;i<n;i+=1) cin >> a[i];
            
        sort(a,a+n);
        //for(int i=0;i<n;i+=1) cout << a[i];
        int s=0,mid,e=100000,pos = 0;

        while(s<=e)
        {
            mid = (s+e)/2;

            if(check(a,n,c,mid))
            {
                s= mid+1;
                pos = mid;
            }
            else 
                e = mid -1;

        }

         cout << pos <<endl;


    }
}
    

/*intput.txt
output.txt*/

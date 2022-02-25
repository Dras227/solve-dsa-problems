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
void Dungeon_Master()
{
#ifndef Dungeon_Master
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
    Dungeon_Master();
    solve();
   count_101 ();
    return 0;
}
bool compare(int i,int j)
{
    return i>j;
}
void solve ()
{
     int t;
     cin >> t;

     while(t--)
     {
        int n,i;
        cin >> n;
        int a[n];
        int no;

        rep(i,n){
          cin >> a[i];
            
        } 

        sort(a,a+n,compare);
        int count=0;
        repr(i,1,n-1)
        {
            if(a[i]!=a[i-1])
            {
                count+=1;
            }

        }
        if(a[n-1]!=0) count+=1;
        
        cout << count << endl;

     }
} 

/*intput.txt
output.txt*/
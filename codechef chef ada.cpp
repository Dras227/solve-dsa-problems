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
bool arraysor(int a[][64],int n,int i,int j,int count){
    if(i==n-1 && j==n-1)
    {
        cout << count;
        return true;
    }


}
void solve ()
{
    int i,j,n;
    cin >> n;
    int a[n][n];
    rep(i,n)
    {
      rep(j,n)
        cin >> a[i][j];  
    }

     rep(i,n)
    {
      rep(j,n)
        cout << a[i][j] << " ";

      cout << endl;
    }

    arraysor(a,n);

    rep(i,n)
    {
        rep(i,n)
        {
            if
        }
    }

} 

/*intput.txt
output.txt*/
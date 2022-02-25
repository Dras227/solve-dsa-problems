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
void solve()
{
    int n;

    cin >> n; int a[n];

    for(int i=0;i<n;++i) cin >> a[i];

    for(int i=0;i<n;i++)
        for (int j = 0; j < n-i-1 ; ++j)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }

     for(int i=0;i<n;++i) cout << a[i] <<endl
}
    

/*intput.txt
output.txt*/
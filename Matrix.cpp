#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
int solve();
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
//                     MA BITCHES   
int32_t  main()
{
   dras227();
   int t= solve();
    count_101 ();
    return 0;

}
int solve()
{
    int m,n;

    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }


    int item;

    cin >> item;



    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(item==a[i][j])
            {
                cout << "1";
                return 0;
            }
        }
    }

    cout << "0";
    return 0 ;

}

/*intput.txt
output.txt*/
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
void spellings(int n)
{
    switch(n)
    {
        case 0:cout << "zero" << " ";
                return;
        case 1:cout << "one" << " ";
                return;
        case 2:cout << "two" << " ";
                return;
        case 3:cout << "three" << " ";
                return;
        case 4:cout << "four" << " ";
                return;
        case 5:cout << "five" << " ";
                return;
        case 6:cout << "six" << " ";
                return;
        case 7:cout << "seven" << " ";
                return;
        case 8:cout << "eight" << " ";
                return;
        case 9:cout << "nine" << " ";
                return;
    }
    return;
}
void find(int n)
{
    if(n==0)
    {
        return;
    }
    
    find(n/10);
    spellings(n%10);
    return;
}
void solve ()
{
      int i,n;
    cin >> n;
    find(n);
} 

/*intput.txt
output.txt*/
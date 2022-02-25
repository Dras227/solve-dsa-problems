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
void hanoi(int n,char source,char helper,char destiny)
{
    if(n==0) return;

    //shift n-1 disks to the helper using destiny
    hanoi(n-1,source,destiny,helper);
    cout <<"shifting disk"<<n<<" from "<<source <<" to "<<destiny<<endl;
    hanoi(n-1,helper,source,destiny);
    return;
}
void solve ()
{
      int i,n;
    cin >> n;
    hanoi(n,'A','B','C');
} 

/*intput.txt
output.txt*/
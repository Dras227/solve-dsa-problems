#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define endl "\n"
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   dras227();

    solve();
    count_101 ();
    return 0;

}
void search(int n,int k)
{
    if(n==k) cout << "0" << endl;
    else if(n==0) cout << k<< endl;
    else if(k==0 && n%2==0) cout << "0"<< endl;
    else if(k==0 && n%2!=0) cout << "1"<< endl;
    else if(n<k) cout << abs(n-k)<< endl;
}
void solve ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;

        cin >> n >> k;

        search(n,k);
    }
} 


/*intput.txt
output.txt*/
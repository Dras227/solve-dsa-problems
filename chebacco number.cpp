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
//                     MA BITCHES   
int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    string n,final;

    getline(cin , n);
 
    for (int i = 0; i<=n.length()-1; ++i)
    {
        int dig = n[i] - '0';
        //cout << n[i] << endl;

        int invert_dig = 9 - dig;

        dig = invert_dig > dig ? dig:invert_dig;

        if(i==0 && dig == 0)
        {
            dig = n[i]-'0';
        }

        final+= dig +'0' ;
        
    }

    cout << final;
}

/*intput.txt
output.txt*/
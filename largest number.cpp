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
bool lexicoCompare(string s1,string s2)
{
    return s1 > s2;
    if(s1 < s2) printf("True" );
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

int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    int t;

    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        sort(s,s+n,lexicoCompare);

        /*string final;
    
        for (int i = 0; i < n; ++i)
        {
            final+=s[i];
        }

        cout << final;
        int ans = 0,p=1;
        for(int i= final.length()-1;i>=0;--i)
        {
            ans+=((final[i]-'0')*p);
            p*=10;
        }*/

        string a;

        for(int i=0;i<n;i+=1)
        {
             int ans = 0,p=1;
             string cur = s[i];
           /* for(int i= cur.length()-1;i>=0;--i)
            {
                char item = cur[i];
                ans+=((item-'0')*p);
                p*=10;
            }*/

            a+=s[i];
        }

        cout << a;

        /*for (int i = 0; i < n; ++i)
        {
            cout << a[i];
        }*/






        cout << endl;
    }
}

/*intput.txt

88018527808377687671752574036545536552852745250521950485022365832723154309130671304753044229532949929429291662884228649284052791827917267922631825855258042576025688256102536925295249162352723321226422253521635214222051201882018720050188111813178411766717478169181562315620155681546814201385813692135751259912342117591146511151026
output.txt*/
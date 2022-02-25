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
bool compare(pair<string,int>p1 ,pair<string,int>p2)
{
    int sal1 = p1.second;
    int sal2 = p2.second;

    if(sal1==sal2)
    {
        return p1.first < p2.first;
    }
    else
        return sal1>sal2;

}
void solve()
{
    int thresh;

    cin >> thresh;

    int n; cin >> n;
    pair<string,int> emp[n];

    for (int i = 0; i < n; ++i)
    {
        string a; int b;

        cin >> a >> b;

        emp[i].first= a;
        emp[i].second = b;
    }

    sort(emp,emp+n,compare);

    for (int i = 0; i < n; ++i) 
    {
        if(emp[i].second >= thresh)
        {
        cout << emp[i].first << " "<<emp[i].second<<endl;
    }
    }
}
    

/*intput.txt
output.txt*/
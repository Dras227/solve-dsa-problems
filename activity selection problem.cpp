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
bool cmp(pair<int,int> p1,pair<int,int>p2)
{
    return p1.second < p2.second;
}
void solve()
{
    int t; cin >> t;

    while(t--)
    {
        int n; 
        cin >> n;
       pair<int,int>p[n];
        for(int i=0;i<n;i+=1)
        {
            int item1,item2;
            cin >> item1 >> item2;

            p[i].first = item1;
            p[i].second = item2; 

        }
        sort(p,p+n);
        int great = 0;
        int ans = 1,chosen = 0;
         for(int i=1;i<n;i+=1)
        {
            if(p[i].first>=p[chosen].second)
            {
                ++ans;
                chosen = i;

            }
           
        }
        cout << ans<<std::endl;;


    }
}
    

/*intput.txt
output.txt*/
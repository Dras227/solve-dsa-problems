#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
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
bool check(int p,int f,int sword,int axe,int s,int w,int mid_sword,int mid_axe)
{
    int swords_used=0,axe_used = 0;

    if((mid_sword*s)+(mid_axe*w)<=p) return true;
}
int find(int p,int f,int sword,int axe,int s,int w)
{
    int s_sword=0;int e_sword=(sword*s);

    int s_axe=0,e_axe=(axe*w);
    
    int mid_sword=0,mid_axe=0;
    int ans_sword=0,ans_axe =0;

    //int energy = (p+f);
    while(s<=e)
    {
        mid_sword = (s_sword+e_sword)/2;
        mid_axe = (s_axe+s_sword) /2;
        if(check(p,f,sword,axe,s,w,mid_sword,mid_axe))
        {
            ans_sword =max (mid_sword,ans_sword);
            ans_axe = mid_axe; 
        }

    }








}
void solve ()
{
    
    int t;cin >> t;

    while(t--)
    {
        int p,f,sword,axe,s,w;

        cin >> p >> f >> sword >> axe >> s >> w ;

        cout << find(p,f,sword,axe,s,w) << endl;
    }
} 

/*intput.txt
output.txt*/
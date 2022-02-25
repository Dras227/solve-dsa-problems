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
    string s;
    int key; cin >> key;
    cin >> s;
    int a[s.length()],b[s.length()];
    int swa = 0;
  

    cout << "hello";
    
}

int countch(string s,char ch,int k)
{
    int ans = 0,count = 0;

    for (int i = 0; i <= s.length(); ++i)
    {
        if(s[i]!=ch)
        {
            c++;
        }
        
    }
}
    

/*intput.txt

247

output.txt*/
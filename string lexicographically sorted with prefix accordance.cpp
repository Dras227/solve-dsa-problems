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

bool compare(string s1,string s2)
{
    if(s1[0]!=s2[0])
    {
        return s1 < s2;
    }
    if(s1[1]!=s2[1])
        return s1 < s2;


    int i = -1;

    string substring = s1.length() > s2.length() ? s2:s1;
    string bigstring =  s1.length() < s2.length() ? s1:s2;
    
    while(substring[++i]!='\0')
    {
        if(substring[i]!=bigstring[i])
            break;
    }
   // cout << "substring length and i is" << substring.length() <<" " << i << endl;
    if(substring.length()==i) return s1.length() > s2.length();
    else return s1 < s2;


}
void solve()
{
    int n;
    cin >> n;

    string a[n];

    cin.ignore();
    for (int i = 0; i <n; ++i)
    {
        cin >> a[i];
    }

    

    sort(a,a+n,compare);

     for (int i = 0; i <n; ++i)
    {
        cout <<  a[i] << endl;
    }
   
}
    

/*intput.txt
output.txt*/
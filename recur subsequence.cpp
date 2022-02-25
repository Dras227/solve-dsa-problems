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
void generate_subs(char *in,int i,char *out,char j)
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
        cout << out<<endl ;
        return;
    }

    //generate the subsequence with character
    
    out[j] = in[i];
    generate_subs(in,i+1,out,j+1);

    //generate the subsequence without current character

    generate_subs(in,i+1,out,j);
}
void solve ()
{
    char a[] = "abs";
    int n=strlen(a);
    char out[100000];
    generate_subs(a,0,out,0);
} 

/*intput.txt
output.txt*/
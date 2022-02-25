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
char keypad[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void Dungeon_Master()
{
#ifndef Dungeon_Master
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
    Dungeon_Master();
    solve();
    count_101 ();
    return 0;
}


void generate_names(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
       cout << out <<endl;
        return;
    }

    if(in[i]=='1'||in[i]=='0')
    {
        generate_names(in,out,i+1,j);
    }
    int digit = in[i] -'0';
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        out[j] = keypad[digit][k];
        generate_names(in,out,i+1,j+1);  
    }
    return;
}
void solve ()
{
      int i;
    char in[100];
    cin >> in;

    char out[10000];

    generate_names(in,out,0,0);
} 

/*intput.txt
output.txt*/
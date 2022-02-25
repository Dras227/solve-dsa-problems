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
//char key[27] ={"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
char keys[100] ={" ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
int32_t  main()
{
    Dungeon_Master();
    solve();
    count_101 ();
    return 0;
}
void generate_strings(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j] ='\0';
        cout << out << endl;
        return;
    }

    /*if(in[i] == '0'&&in[i+1]=='0')
        generate_strings(in,out,i+1,j);*/
    //cout << "hii" << endl;
    int d1 = in[i]-'0';
    int d2 = in[i+1] - '0';
   // cout << in[i]-'0' << endl;
    int d = d1*10 + d2;

    out[j] = keys[d1];
    generate_strings(in,out,i+1,j+1);
    if(in[i+1]!='\0'&&d <26)
    {
        out[j] = keys[d];
        generate_strings(in,out,i+2,j+1);
    }
    return;

}
void solve ()
{
    char in[100];

    cin >> in ;

    char out[1000];

    generate_strings(in,out,0,0);
} 

/*intput.txt
output.txt*/
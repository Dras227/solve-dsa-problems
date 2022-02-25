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
int32_t  main()
{
    Dungeon_Master();
    solve();
    count_101 ();
    return 0;
}
void generate_permutation(char *a,int i)
{
    if(a[i]=='\0')
    {
        cout << a << endl;
        return;
    }

    for(int k=i;a[k]!='\0';k++)
    {
        swap(a[i],a[k]);
        generate_permutation(a,i+1);
        //becktracking
        swap(a[i],a[k]);
    }
}
void solve ()
{
    char a[4]= {"abc"};
    int n = strlen(a);
    char out [1000];

    generate_permutation(a,0);
} 

/*intput.txt
output.txt*/
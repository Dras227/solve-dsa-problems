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

int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    char s[100]="I am a very Successful Man!!";

    char *ptr = strtok(s," ");
    
    string st[100];
    st[0] = ptr;
    cout << st[0];
    int i = 0;
    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        st[++i] = ptr;
        cout << st[i]<< endl;

    }


}

/*intput.txt
output.txt*/
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
void replacepi(char a[],int i)
{
    if(a[i] == '\0'&& a[i+1] =='\0')
        return;

    if(a[i]=='p' and a[i+1] == 'i')
    {
       // cout << "hii";
        int j = i+2;

        while(a[j]!='\0')
            ++j;

        while(j>=i+2){
            a[j+2] = a[j];
            j--;
        }      
            


        a[i] = '3';
        a[i+1] ='.';
        a[i+2] = '1';
        a[i+3]='4'; 
        replacepi(a,i+4);
    } 
    else  
    replacepi(a,i+1);  

    return;   
}
void solve ()
{
    char a[] = "xhzpinnnpi143pibpi";
    int n = strlen(a);

    replacepi(a,0);
    cout << a ;
} 

/*intput.txt
output.txt*/
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
int cross_inversion(int a[],int s,int e)
{
    int mid = (s+e)/2;
    int i=s;
    int k=s;
    int j=mid +1;
    int temp[100000];
int cnt = 0;
    while(i<=mid && j <=e)
    {
        if(a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            cnt+=(mid-i)+1;
        }
    }

    while(i<=mid)
        temp[k++] = a[i++];

     while(j<=e)
        temp[k++] = a[j++];

    repr(i,s,e) a[i] = temp[i];
    return cnt;

}
int inversion(int a[],int s,int e)
{
    if(s>=e)
    {
        return 0;
    }

    int mid = (s+e) /2;

    int x= inversion(a,s,mid);
    int y= inversion(a,mid+1,e);
    int z = cross_inversion(a,s,e);

    return x+y+z;
}
void solve ()
{
    
    cout << inversion(a,0,n);
}

/*intput.txt
output.txt*/
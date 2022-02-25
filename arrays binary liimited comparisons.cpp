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
void binary(int n,int k)
{
    int high =n;int low= 0,mid;
    int pro=0,pro2=0,ans=0;

    while(low <= high)
    {
        mid = (high + low)/2;

       
        if((pow (mid,k) <= n )&& (pow (mid+1,k) >n))
        {
           // cout << mid;
            ans = mid;
        }
        else if(pow (mid,k) < n) low = mid+1;
        else high = mid - 1;

    }
    
    //cout << "hello";
    cout << ans<< endl;//

    
}
void solve ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k; 
        cin >> n >>k;
        binary(n,k);
    }
    //cout << "hello";
    //cout << mid; 


} 


/*intput.txt
output.txt*/
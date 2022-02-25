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
bool compare(int a,int b)
{
    return a<=b;
}
void solve()
{
    int arr[] = {1,2,5,10,20,50,100,200,500,2000};

    int n= sizeof(arr)/sizeof(int);

    int money; cin >> money;

    while(money)
    {
        auto lb = lower_bound(arr,arr+n,money,compare)-1;
        cout <<arr[ (lb - arr)]<<",";
        money-=arr[(lb-arr)] ;   
    }
   

}    
    

/*intput.txt
output.txt*/
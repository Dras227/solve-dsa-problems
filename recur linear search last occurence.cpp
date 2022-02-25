#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define pb push_back
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
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
void storeAllPos(int *a,int i,vector<int> &store,int n,int item)
{
    if(n==i) return;
   // cout << a[i] << " " << item << endl;
    if(a[i] == item)  
        {   //cout << " got em" << endl;
            store.pb(i);
        }


    return storeAllPos(a,i+1,store,n,item);

}
void reclinear(int *a,int i,int n,int item,int flag)
{
     if(n==i) {
        if(!flag) cout << -1;
        return;}

    
    if(a[i] == item) 
        {
            flag = 1;
            cout << i << " ";
            
        }
    
   
    return reclinear(a,i+1,n,item,flag);
    
}
void solve ()
{
    int n;
    cin >> n;
    int a[n];
int i;
    rep(i,n) cin >> a[i];
    
    
    int item; cin >> item;
    vector<int> store;
     

     storeAllPos(a,0,store,n,item);
     

    //cout<<size << endl;
     rep(i,store.size()) cout << store[i] << " " ;

} 

/*intput.txt
output.txt*/
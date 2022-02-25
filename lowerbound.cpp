#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
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
    //cout << "helolo";
    solve();//cout << "helolo";//cout << "helolo";cout << "helolo";cout << "helolo";cout << "helolo";
    count_101 ();
    return 0;

}

void solve ()
{
   int n,i;

   cin >> n;
   int a[n];
   rep(i,n)
   cin >> a[i];

   //rep(i,n) cout << a[i];  

   int t; cin >> t; int test[t];
   rep(i,t) cin >> test[i];
   
   
  rep(i,t)
   {


        int item = test[i];
        int check=0,low=-1,up=-1;int j;
        rep(j,n)
        {
            //cout << " check " << check << endl;
            if(check==0)
            {
                if(a[j] == item){
                    low = j;
                    check = 1;}
            }
            if(a[j] == item)
                up = j;
        }

        cout << low << " " << up << endl ;
   }

} 


/*intput.txt
output.txt*/
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
    void solve()
{
    int n;
    cin >> n;
    
    int a[n];

        //cout << "hello";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //cout << a[i] << " ";
    }
        //cout << "hello";
    //cout << endl;
    int e = *max_element(a,a+n);
   //cout << e;

    int count[10000];
    for(int i=0;i<=e;++i)
    {
        count[i] = 0;

    }
    //cout << endl;
    for(int i=0;i<n;++i)
    {
        count[a[i]] +=1;
    }
    //cout << endl;
    int sorted[n];
     for(int i=1;i<=e;++i)
    {
       count[i] = count[i]+count[i-1];
       //cout << count[i] << " "; //cout << count[i] <<" ";
    }

    for(int i=n-1;i>=0;--i)
    {
        count[a[i]]-=1;

        sorted[count[a[i]]] = a[i];
    }
     for(int i=0;i<n;++i)
     {
         cout << sorted [i] << " " ;
     }


}
    

/*intput.txt
output.txt*/
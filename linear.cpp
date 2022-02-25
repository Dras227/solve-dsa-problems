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
   int n ;cin >> n;
   int count1=0,count0=0,count2=0;
	int a[n];
	for(int i=0;i<n;i+=1) {
        cin >> a[i];
        if(a[i] == 1) count1+=1;
        if(a[i] == 0) count0+=1;
        else count2+=1;
    }

    for (int i = 0; i < count0; ++i)
    {
        cout << "0" << endl;
    }
    for (int i = 0; i < count1; ++i)
    {
        cout << "1" << endl;
    }
    for (int i = 0; i < count2; ++i)
    {
        cout << "2" << endl;
    }

	 
}
    

/*intput.txt
output.txt*/
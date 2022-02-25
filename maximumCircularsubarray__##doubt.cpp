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
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        int a[n],sub_max=0,temp_max=0,counted=0;
        int check = 1;
        for (int i = 0; i < n ; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n ; ++i){
            sub_max+=a[i];
            //cout<<a[i] << "is added to sub_max and now sub_max is "<<sub_max<<endl;
            temp_max = max(temp_max,sub_max);
            if(sub_max<0){
               // cout << "setting sub max to 0 cz sub max is "<<sub_max<<endl;
                sub_max = 0;
                counted = 0;
            }
            counted+=1;
        }
        if(n>counted){
        for(int i=0;i<n;i+=1)
        {
            if(counted>n)
            {
                break;
            }
            sub_max+=a[i];
            temp_max = max(temp_max,sub_max);
            counted+=1;
            if(sub_max<0){
                sub_max=0;
                counted = 0;
            }
            
        }}

        cout<<temp_max<<endl;//<<counted<<endl;
    }
}

/*intput.txt

It does not runs on coding blockes ide
output.txt*/
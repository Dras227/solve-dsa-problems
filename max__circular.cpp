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
int32_t kadane(int a[],int n);
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

        int a[n],tot_sum=0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            tot_sum+=a[i];
        }

        int max_kadane = kadane(a,n);

        for (int i = 0; i < n; ++i)
        {
            a[i] = -a[i];
        }

        int invert_max_kadane = kadane(a,n);

        int max_wrapped = tot_sum + invert_max_kadane;

        cout << max(max_kadane,max_wrapped) << endl;
    }
}
int32_t kadane(int a[],int n)
{
    int max_sum=0,temp_sum=0,zero = 0;

    for (int i = 0; i < n; ++i)
    {
        temp_sum += a[i];
        temp_sum = temp_sum<0?0:temp_sum;
        max_sum = max(max_sum,temp_sum);
    }
    return max_sum;
}
/*intput.txt
output.txt*/
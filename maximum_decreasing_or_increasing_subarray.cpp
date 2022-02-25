#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
int bitonic(int arr[], int n);
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

   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   {
       cin >> a[i];
   }
   int max= bitonic(a,n);
   // dec[0] = a[0]>a[1]?1:0;
   // inc[0] = a[0]<a[1]?1:0;

   //  for(int i=1;i<n-1;i+=1)
   // {
   //      if(a[i] < a[i+1])
   //      {
   //          inc[i] = inc[i-1]+1;
   //      } else inc[i] = 1;
   //      if(a[i] > a[i+1])
   //      {
   //          dec[i] = dec[i-1]+1;
   //      }else dec[i]= 1;
   // }
   // dec[n-1] = a[n-2]>a[n-1]?dec[n-2]+1:1;
   // inc[n-1] = a[n-2]<a[n-1]?inc[n-2]+1:1;
   // // for(int i=0;i<n;i+=1)
   // // {
   // //  cout<<a[i] << " ";
   // // }
   // // cout << endl;
   // //  for(int i=0;i<n;i+=1)
   // // {
   // //  cout<<inc[i] << " ";
   // // }
   // // cout << endl;
   // //  for(int i=0;i<n;i+=1)
   // // {
   // //  cout<<dec[i] << " ";
   // // }
   // int max = inc[0] + dec[0] - 1;
   // for (int i = 1; i < n; i++)
   //      if (inc[i] + dec[i] - 1 > max)
   //          max = inc[i] + dec[i] - 1;

   cout <<max<< endl;
}
}
int bitonic(int arr[], int n)
{
    int inc[n]; // Length of increasing subarray ending at all indexes
    int dec[n]; // Length of decreasing subarray starting at all indexes
    int i, max;

    // length of increasing sequence ending at first index is 1
    inc[0] = 1;

    // length of increasing sequence starting at first index is 1
    dec[n-1] = 1;

    // Step 1) Construct increasing sequence array                                                                 
    for (i = 1; i < n; i++)
    inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1;

    // Step 2) Construct decreasing sequence array
    for (i = n-2; i >= 0; i--)
    dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1;

    // Step 3) Find the length of maximum length bitonic sequence
    max = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > max)
            max = inc[i] + dec[i] - 1;

    return max;
}
/*intput.txt
Its dras227 and its try no. 16
output.txt*/
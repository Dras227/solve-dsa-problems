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
bool check(int a[],int cooks,int pratas,int minutes)
{
    int ans = 0;
     for(int i=0;i<cooks;i+=1)
    {
        int current_cook = a[i];
        int taken_time = 0,p=1;
        while(taken_time<=minutes)
        {
            
            taken_time=taken_time+(current_cook *p++);
            
            if(taken_time>minutes) break;
            if(ans>=pratas) return true;
            ans+=1;
            cout << "time taken by "<<a[i] << " ranked cook to make " << ans <<" pratas are" <<taken_time <<" minutes"<<endl;
        }   
    }

    if (ans>=pratas) return true;
    else return false;

}
void solve()
{
    int t;
    cin >> t;

    while(t--)
    {
        int pratas;
        cin >> pratas;
        int cooks;
        cin >> cooks;
        int a[cooks];
        for(int i=0;i<cooks;++i) cin >> a[i];

        int s=0,e=100000000,mid,ans;
        sort(a,a+cooks);
        int p = check(a,cooks,pratas,12);
        
        
       /* while(s<=e)
        {
            mid = (s+e)/2;

            if(check(a,cooks,pratas,mid))
            {
                e= mid -1;
                ans = mid;
            }
            else 
                s=mid+1;
        }

        cout << mid <<endl;*/

    }
}   
    

/*intput.txt
output.txt*/
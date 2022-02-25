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
float square_root(int n)
{
    int s=0;int e=n;
    int mid;
    float ans=0;
    while(s<=e)
    {
        mid = (s+e)/2;
        //cout << mid <<endl;
        if((mid*mid) == n)
        {
            ans =  mid;
            break;
        }
        else if((mid*mid)> n)
        {
            e = mid -1;
        }
        else
            s = mid+1;
    }

   float inc= 0.1;
    int p=3;
    for(int times = 0;times <p;times+=1)
    {
        while((ans*ans)<=n)
        {
            ans = ans+inc;
        }

        ans = ans - inc;
        inc/=10;
    }
    return ans;
}
void solve()
{
    int n; 
    cin >> n;

    cout << square_root(n) <<std::endl;;
}
    

/*intput.txt
output.txt*/
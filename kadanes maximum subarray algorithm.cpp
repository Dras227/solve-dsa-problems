#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
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
int32_t  main()
{
    dras227();
    solve();
    cout<<"\n\n\n\n\n\n\n\nhello";
    return 0;
}

void solve()
{
   int count;
   int cursum=0,ms=0;
   cin >> count;
   int a[count];
   for (int i = 0; i < count; ++i)
    {
    	cin >> a[i];

    	cursum = cursum+a[i];

    	if(cursum<0) cursum=0;

    	ms = max(cursum,ms);
    } 

    cout << ms;
}
/*intput.txt
9
-4 1 3 -2 6 2 -8 -9 4


output.txt
10







hello
*/
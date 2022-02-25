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
    cout<<"hello";
    return 0;
}

void solve()
{
    int count;
    cin >> count;

    int a[count];

    for (int i = 0; i < count; ++i)
    {
    	cin >> a[i];
    }

    for (int i = 0; i < count; ++i)
    {
    	int item = a[i];

    	int j = i-1;

    	while(j>=0 && a[j] > item)
    	{
    		a[j+1] = a[j];
    		a[j] = item;
    		j-=1;
    	}

    	a[j] = item;
    }

    for (int i = 0; i < count-1; ++i)
    {
    	cout << a[i] <<endl;
    }


}
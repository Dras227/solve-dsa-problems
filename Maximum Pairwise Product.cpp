#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define int long long
void dras227()
{
#ifndef dras2272000
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	int n,a[100000],big1,big2,p,q;
	cin >> n; 
	big1 = -9;
	big2 = -9;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
		if(a[i]>big1)
		{
			big2 = big1;
			q  = p;
			big1 = a[i];
			p = i;
		}
		else if(a[i]>big2 && p!=q)
		{
			big2 = a[i];
			q = i;
		}

	}

	 cout << big1*big2;
	

}
int32_t  main()
{
    dras227();
 	solve();   
    return 0;
}


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
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}

int32_t  main()
{
    dras227();
    solve();
    cout<<"hello"<<endl;
    return 0;
}
void solve(){

	int n;

	cin >> n;

	int a[n][n];

	for (int i = 0; i <n; ++i)
	{
		for (int j=0; j < n; ++j)
		{
			/* code */

			cin >> a[i][j];
		}
	}
	for (int j = n-1; j >=0; --j)
	{
		for (int i=0;i<n;++i)
		{
			/* code */

			cout<< a[i][j] << " ";
		}
		cout<< endl;
	}
	
}
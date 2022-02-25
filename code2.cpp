#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
mt19937	rng(chrono::steady_clock::now().time_since_epoch().count());
/*void dras227()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
}*/

int main()
{
	/*dras227();*/
	int x;
	cin >> x;
	int casei = 0;
	while (x--)
	{
		long long count;

		cin >> count;

		long long peak = 0, a[count];
		casei += 1;
		for (int i = 0; i < count; i += 1)
		{
			scanf("%lld", &a[i]);
		}
		for (int i = 1; i < count - 1; ++i)
		{
			if (a[i] > a[i - 1] && a[i] > a[i + 1])
				peak += 1;
		}

		cout  << "Case #" << casei << ": " << peak << "\n";
	}

	return 0;
}
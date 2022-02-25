#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define int long long
void dras227()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
const int N = 51;
const int P = 51 * 30;
int n, k, p;
int cache[N][P];
int a[N][31], pref[N][31];
int rec(int idx, int taken)
{
	if (taken == p)
		return 0;
	if (idx  > n ) return 0;
	if (taken > p)
		return 0;
	if (cache[idx][taken] != -1)
		return cache[idx][taken];
	int ans = -1e9;
	for (int i = 0; i <= k; i++)
		ans = max(ans, pref[idx][i] + rec(idx + 1, taken + i));
	return cache[idx][taken] = ans;
}
int32_t  main()
{
	dras227();
	int x;
	cin >> x;
	int casei = 0;
	while (x--)
	{
		casei += 1;

		cin >> n >> k >> p;



		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < k; j++)
			{
				scanf("%lld", &a[i][j]);

				pref[i][j] = pref[i][j - 1] + a[i][j];
			}
		}

		memset(cache, -1, sizeof(cache));
		int ans = rec(1, 0);
		cout << "Case #" << casei << ": " << ans << endl;
	}


	return 0;
}
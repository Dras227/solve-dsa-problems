#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
void dras227()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	dras227();

	int row, col, k, s, st = 0;

	cin >> row >> col >> k >> s;
	st = s;
	char a[row][col];


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%s", &a[i][j]);
		}
	}


	for (int i = 0; i < row; i += 1)
	{
		for (int j = 0; j < col; j++)
		{
			char item = a[i][j];

			if (st < k) break;

			if (item == '#')
				break;
			if (j == col - 1)
			{
				if (item == '.') st -= 2;
				else st += 5;
			}
			else if (item == '.') st -= 3;
			else st += 4;
			if (st < col - 1) continue;


		}
	}
	if (st >= k)
	{
		printf("Yes\n%d\n", st);
	}
	else printf("No\n");



	return 0;
}
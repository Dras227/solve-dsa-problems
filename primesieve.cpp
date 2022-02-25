#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define int long long
void dras227()
{
#ifndef dras2272000
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}

void prime_sieve(int *p,int n)
{
	for (int i = 3; i < n; i+=2)
	{
		/* code */
		p[i] = 1;
	}

	for(int i=3;i<n;i+=1)
	{
		//if the current number is not marked (it is prime)

		if(p[i]==1)
		{
			//mark all the multiples of i as not prime
			for (int j =i*i ; j <=n ; j+=i)
			{
				/* code */
				p[j]=0;
			}
		}
	}

	p[2] = 1;

	p[1] = p[0] = 0;
}

int32_t  main()
{
    dras227();
    int a,b;
    cin >> b;
    int p[1000000] = {0};
    printf("hello\n");

    return 0;
}

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
    	cin >> a[i];

    int i =0;int j = sizeof(a)/sizeof(int) -1;
    sort(a,a+count);
    int key;cin >>key;
    while(i<j)
    {
    	int sum = a[i] + a[j];

    	if(sum>key) j--;
    	else if(sum<key) i++;
    	else if(sum==key){
    		cout << a[i] <<" and "<< a[j] << endl;
    		i++;j--;

    	}
    }
}

/*input.txt
9
-4 1 3 -2 6 2 -8 -9 4
7
output.txt
1 and 6
3 and 4
hello*/

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
    cout<<"\n\n\n\nits Dr.227 bitch";
    return 0;
}

void solve()
{
   int count;

   cin >> count;

   int a[count],l[count],r[count],key;
   cin >> a[0];
   l[0] = a[0];
   for (int i = 1; i < count; ++i)
   {
   		cin >> a[i];
   		l[i] = max(l[i-1],a[i]);
   }
   r[count-1] = a[count-1];
   int saved = 0;
   for (int i = count -2; i >= 0; --i)
   {
   		r[i] = max(a[i],r[i+1]);
   	}

   	for (int i = 0; i < count; ++i)
   	{
   		saved+=(min(r[i],l[i]) -a[i]);
   	}
   cout<<saved;

}

/*intput.txt
output.txt*/
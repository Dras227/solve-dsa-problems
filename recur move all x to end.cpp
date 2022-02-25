#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
int c;
void find(char *in,int i)
{
	if(in[i]=='\0')
	{
		while(c>0) 
			{
				cout << 'x';
				c--;}
		return;
	}

	if(in[i] == 'x')
	{
		c++;
		find(in,i+1);
	}else{
	cout << in[i];
	find(in,i+1);}
}
void solve ()
{
    char in[1000];
    char out[29999];

    cin >> in;
    //n= strlen(in);
    find(in,0);
} 

/*intput.txt
output.txt*/
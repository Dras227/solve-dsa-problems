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
void find(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j] = '\0';

		cout << out << " ";
		return;
	}


	int d1 = in[i] - '0';
	out[j] = d1+64;
	find(in,out,i+1,j+1);

	int d2 = in[i] - '0';

	int d = d1*10+d2;

	if(d<=26)
	{
		out[j] = 65+d;

		find(in,out,i+2,j+1);
	}


}
void solve ()
{
    char in[1000];

    cin >> in;
    char out[10000];
    find(in,out,0,0);
} 

/*intput.txt
output.txt*/
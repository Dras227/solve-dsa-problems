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

void replace_pi(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j] ='\0';
		cout << out ;
		return;
	}

	if(in[i]=='p' and in[i+1]=='i')
	{
		out[j] = '3';out[++j] ='.';out[++j] = '1';out[++j]='4';
		replace_pi(in,out,i+2,j+1); 
	}else{
		out[j] = in[i];
		replace_pi(in,out,i+1,j+1);
	}
	return;
	



}
void solve ()
{
    char in[1001];

    cin >> in;
    char out[10000];
    replace_pi(in , out,0,0)  ;
} 

/*intput.txt
output.txt*/
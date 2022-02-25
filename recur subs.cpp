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
int c=0;  
int32_t  main()
{
   Dungeon_Master();
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}

void subs(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j] ='\0';
		cout << out << " ";
		c+=1;
		return;
	}

	// subset including the current character
	

	//subset without including the current character

	subs(in,out,i+1,j);
	out[j] = in[i];
	subs(in,out,i+1,j+1);
	if(in[i]=='\0')
	{
		out[j] ='\0';
		cout << out << " ";
		c+=1;
		return;
	}
}
void solve ()
{
    char in[1000];

    char out[10000];

    cin >> in;

    subs(in,out,0,0); cout << endl << c ;
} 

/*intput.txt
output.txt*/
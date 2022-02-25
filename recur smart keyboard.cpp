#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
   IOS;
   cin.tie(NULL);
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
int c;
char table[][10] ={"", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx","yz" };
void find(char *in,char *out,int i,int j)
{
	if(in[i] =='\0')
	{
		out[j] = '\0';
		cout << out << " ";
		c++;	

		return;
	}

	int num = in[i]-'0';
	if(num==0) find(in,out,i+1,j);
	for(int k=0;table[num][k] != '\0';k++)
	{
		out[j] = table[num][k];
		find(in,out,i+1,j+1);
	}

	
}
void solve ()
{
	char in[1000];
   cin >> in;
    //int n= strlen(n);
    char out[1000];
  find(in,out,0,0);
  cout << endl << c;
} 

/*intput.txt
output.txt*/
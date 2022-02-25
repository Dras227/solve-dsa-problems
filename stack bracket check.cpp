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
void check(char *s1)
{	
	stack<char>s;
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='(') s.push(s1[i]);
		else if(s1[i]==')')
		{
			if(s.empty()) 
			{
				cout << "expression is invalid";
				return;
			}
			s.pop();
		}
	}
	if(s.empty()) cout << "expresion is valid";
	else cout << "expression is not valid";
}
void solve ()
{
	char c[] = "(())";

	check(c);

} 

/*intput.txt
output.txt*/

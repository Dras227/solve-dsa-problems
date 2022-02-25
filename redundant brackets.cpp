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
    int t;cin >>t;while(t--)
        solve();
    return 0;
}
bool redundancy(string s)
{
	stack<char>st;

	for(int i=0;i<s.length();i++)
	{
		switch(s[i])
		{
			case '(':st.push(s[i]);
						break;
			case ')':if(st.top()=='(') return true;
						while(!st.empty() and st.top()!='(')
						{
							st.pop();
						}
						st.pop();
						break;
			default:st.push(s[i]);
					break;
		}

	}
	return false;
}
void solve ()
{
    string s;

    cin >> s;


    if(redundancy(s)) cout <<"Duplicate"<< endl;
    else cout << "Not Duplicates" << endl;
} 

/*intput.txt
2
(((a+(b))+(c+d)))
((((a+(b))+(c+d)))
output.txt
Duplicate
Duplicate
*/
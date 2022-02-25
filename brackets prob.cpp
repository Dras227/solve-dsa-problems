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
bool balanced(string s)
{	
	stack<char> s1,s2,s3;
	for(int i=0;s[i]!='\0';i++)
	{
		char item = s[i];

		switch(item)
		{
			case '(':s1.push(item);
						break;
			case ')':if(s1.empty()) return false;
						s1.pop();
						break;
			case '{':s2.push(item);
						break;
			case '}':if(s2.empty()) return false;
						s2.pop();
						break;
			case '[':s3.push(item);
						break;
			case ']':if(s3.empty()) return false;
						s3.pop();
						break;

		}
	}
	return true;
}
void solve ()
{
    string s;

    cin >> s;

    if(balanced(s)) cout << "Yes";
    	else cout << "No";
} 	

/*intput.txt
output.txt*/
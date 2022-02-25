#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
void solve ()
{
	Dungeon_Master();
    
    string s;

  	getline(cin,s);

  	string st;
  	st = s;
  	string s1,s2;int i=-1;
  	while(s[++i]!='\0')
  	{

  		if((int)s[i]==32 and s[i+1]=='a' and s[i+2]=='n' and s[i+3]=='d' and(int) s[i+4] ==32)
  		{
  			
  			break;
  		}
  		s1+=s[i];
  	}
  	i+=4;
 	while(st[++i]!='\0')s2+=st[i];
 	

 	int count=0;i=0;
 	while(s1[i]!='\0' and s2[i]!='\0')
 	{
 		if(s1[i]==s2[i]) count++;
 		i++;
 	}
 	cout << count;
}

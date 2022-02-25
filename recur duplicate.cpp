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
   //Dungeon_Master();
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
void find(char *s,int i)
{
	if(s[i]=='\0')
	{
		cout << s ;
		return;
	}

	if(s[i]==s[i+1]){
		int j=i;int count =0;
		while(s[i] == s[j+1]){
			count++;
			j++;
		}
		int h=i;
		while(s[j]!='\0')
		{
			s[h++] = s[j++];

		}
		s[h] = '\0';


			
		
	}
	find(s,i+1);
}
void solve ()
{
    int i,j,n;
    char s[100004];
    cin >> s;
    find(s,0);  
} 

/*intput.txt
output.txt*/
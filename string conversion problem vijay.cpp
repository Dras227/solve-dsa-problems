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
    string s1,s2;

    cin >> s1 >> s2;
    int a[1000],b[1000];
    for (int i = 0; i < s1.length(); ++i)
    {
    	int pos = s1[i];
    	a[pos]+=1;
    }
    for (int i = 0; i < s2.length(); ++i)
    {
    	int pos = s2[i];
    	b[pos]+=1;
    }
    int steps=0;
    for(int i=97;i<=122;i++)
    {
    	if(a[i]>b[i] or b[i] > a[i])
    	{
    		steps+=abs(a[i] - b[i]);
    	}
    	 
    }
    int i;
   	repr(i,97,122) cout << a[i] <<" ";cout << endl;
   	repr(i,97,122) cout << b[i] <<" ";

    cout <<endl<< steps ;

}

/*intput.txt
output.txt*/
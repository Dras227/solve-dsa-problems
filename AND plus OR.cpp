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
	
	int t;
	cin >> t;
	while(t--)
	{
		int x;

		cin >> x;

		if(x%2==0)
		{
			cout << x/2 << " " << x/2 << endl;
			auto t = ((x/2)&(x/2));cout << (x/2) << "&" << (x/2) << " = " << t << endl; 
			auto u = ((x/2)|(x/2));cout << (x/2) << "|" << (x/2) << " = " << u << endl;  
   			cout <<t << "+" << u << "=" << t+u << endl << endl;
		}
		else
		{
			x-=(x/2);
			cout <<  x/2<<" "<<x << endl;
			auto t = (x&(x/2));cout << x << "&" << (x/2) << " = " << t << endl; 
			auto u = (x|(x/2));cout << x << "|" << (x/2) << " = " << u << endl;  
   			cout <<t << "+" << u << "=" << t+u << endl << endl;
		}
	}	
}


/*intput.txt
output.txt*/
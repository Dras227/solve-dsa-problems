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
//                        ENDSa
//                        HERE  
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;

	while(t--)
	{
		int a,b;

		cin >> a >> b;

		int left_odd,left_even,righ_odd,righ_even;
		//calculating odds and even at left

		if(a%2!=0)
		{
			left_odd = (a/2)+1;
			left_even = (a/2);
		}
		else
		{
			left_odd = a/2;
			left_even = a/2;
		}

		//calculating odds and even at right

		if(b%2!=0)
		{
			righ_odd = (b/2)+1;
			righ_even = (b/2);
		}
		else
		{
			righ_odd = b/2;
			righ_even = b/2;
		}


		cout << ((left_odd*righ_odd)+(left_even*righ_even)) << endl;
	}

}






















































































/*intput.txt
output.txt*/
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
int32_t  main(){//IOS;cin.tie(NULL);
	solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE  
void solve ()
{
	Dungeon_Master();
	
	int t;

	cin >> t;

	while(t--)
	{
		int n,queries;

		cin >> n;

		unordered_set<int> s;

		int i;
		rep(i,n)
		{
			int item;
			cin >> item;
			s.insert(item);
		}

		cin >> queries;

		while(queries--)
		{
			int item;
			cin >> item;

			auto it = s.find(item);

			if(it!=s.end()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
}






















































































/*intput.txt
output.txt*/
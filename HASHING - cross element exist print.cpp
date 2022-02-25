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
	
	int n;
	cin >> n;


	int  s1[100000];
	int i;
	rep(i,n)
	{
		int item;

		cin >> item;

		s1[item]++;
		
	}

	vector<int> q;
	rep(i,n)
	{
		int item;
		cin >> item;
		if(s1[item]>0)
		{
			q.push_back(item);
			s1[item]--;
		}
	}
	sort(q.begin(),q.end());
	cout << "[";
	for(auto s:q)
	{
	 	cout << s ;
	 	if(s!=q[q.size()-1])cout<< ", "; 
	}
	cout << "]";




}






















































































/*intput.txt
output.txt*/
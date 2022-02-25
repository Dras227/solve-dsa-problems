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
map<int,int> m;
bool comp(int a,int b)
	{
		return m[a]<m[b];
	}
void solve ()
{
	Dungeon_Master();//cout << "Hii,I am @iron_manu22" << endl;	

	int n,i,count=0;std::vector<int> v;
	cin >> n;int a[n];

	
	rep(i,n) 
	{
		cin >> a[i];

		int index = a[i];

		if(m[index]<1) v.push_back(index);

		m[index] = count +1;

		count++;

	}
	
	sort(v.begin(),v.end(),comp);
	for(auto i:v) cout << i << " ";
}






















































































/*intput.txt
output.txt*/
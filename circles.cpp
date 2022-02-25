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
bool compare(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 " <<(1<<4)<< endl;	
	int n;

	cin >> n;

	vector<pair<int,int>> v;
	int t= n;
	while(t--)
	{
		int pos,rad;
		cin >> pos >> rad;

		v.push(make_pair(pos,rad));
	}

	sort(v.begin(),v.end(),compare);

	

}






















































































/*intput.txt
output.txt*/
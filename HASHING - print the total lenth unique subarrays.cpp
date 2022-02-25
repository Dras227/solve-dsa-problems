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
	Dungeon_Master();//cout << "Hii,I am @iron_manu22" << endl;	
	int n,i;
	cin >> n;
	int a[n];
	rep(i,n) cin >> a[i] ;
	unordered_set<int> mp;int ans=0,j=0;
	rep(i,n)
	{
		//mp[a[i]]+=1;
	
		while(j<n and mp.find(a[j])==mp.end())
		{
			mp.insert(a[j]);
			j++;
		}

		ans+= (((j-i+1)*(j-i))/2);
		mp.erase(a[i]);
	}
	cout << ans;
}






















































































/*intput.txt
output.txt*/
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
		int N,K;		

		cin >> N >> K;
        int i;

        if(K==N) repr(i,1,N) cout << i << " ";
        repr(i,1,K) cout << i << " ";


		repr(i,K+1,N) cout << -i << " ";

        
        
        cout << endl;
		
	}
}






















































































/*intput.txt
output.txt*/


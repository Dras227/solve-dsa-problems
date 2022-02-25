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
int power[] = {
	1,2, 4 ,8 ,16, 32, 64, 128, 256, 512, 1024 ,2048, 4096, 8192 ,16384, 32768 ,65536 ,131072, 262144, 524288, 1048576 ,2097152 ,4194304, 8388608 ,16777216 ,33554432, 67108864 ,134217728 ,268435456 ,536870912 
}
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;



	while(t--)
	{
		int n,x;

		cin >> n >> x;

		int i;

		int a[n];
		rep(i,n) cin >> a[i];

		rep(i,n)
		{

			int item = a[i];

			

		}
	}
}






















































































/*intput.txt
output.txt*/
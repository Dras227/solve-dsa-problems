#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 1001
int i, j;
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

 int n;
 
    cin >> n;
 
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
 
   int last = 0;
   int prev = abs(a[2] - a[1]);
    int ans =0;
   for(int i=3;i<=n;i++)
   {
       int op1 = last + abs(a[i] - a[i-2]);
       int op2 = prev + abs(a[i] - a[i-1]);
       // cout << op1 << " " <<op2 << endl;
       ans = min(op1,op2);
        last = prev;
       prev = ans;
 
       
   }
    cout << prev;

}



















































/*intput.txt
output.txt*/
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
int solver (int n, int M, vector<int> arr)
{

    double l;
    double r=*max_element(arr.begin(),arr.end());
    double mid;
    double cnt;
        
        l=l-1;
        int N;
        
        while(l<r)
        {
            mid = (l + r) / 2;
            cnt=0;

            for(auto & i:arr)
                cnt+=ceil(1.0*i/mid);

            if(cnt>N)l=mid+1;

            else r=mid;

        }
        return l;
}
void solve()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

    ios::sync_with_stdio(0);

        cin.tie(0);

    int t;

    cin >> t;

    for(int i = 0;i<t;i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> arr(m); 

        for(int j=0;j<m;j++)
        {
        	cin >> arr[j];
    	}

    int out;

    out= solver(n, m, arr);

    cout << out;

    cout << "\n";



	}
}



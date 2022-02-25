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
int a[10000];
int b[10000];
int cd[10000];
int n;
int solver(int l,int r,int c)
{
	// if l becomes 10
	// if the left becomes greater than right
	if(l>r || l>n)
		return n; // if another index is stored in b[l](i.e.at 10) b[l] acquires
									// the value of that and returns to previous index
									// if the index stored is less than l then l will be returned
	// if the place is filled already then we can jump to next empty space by using 
	// b[l] which track the empty positions
	if(a[l]!=-1 and l<=r)
		return b[l]=solver(b[l],r,c);


	// if the place is blank
	a[l] = c; // a[6] = 44
	b[l] = l; // b[6] = 6

	// calling the solver function with next index

	return b[l]=solver(l+1,r,c);

}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int q;

	cin >> n >> q;

	int l[q],r[q],c[q];
	repr(i,0,n+1)
	{
		 a[i] = -1;
		 b[i] = i;
		 cd[i] = i;
	}

	repr(i,1,q)
	{
		cin >> l[i] >> r[i] >> c[i];
	}

	

	for(int i=q;i>0;i--)
	{
		solver(l[i],r[i],c[i]);
		
		
	}

	repr(i,1,n) cout << a[i] << endl;
}

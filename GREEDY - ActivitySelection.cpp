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
class pairr {
	
	public:
		int first,second;

	pairr(int a,int b)
	{
		first = a;
		second = b;
	}
};
bool comparator(pairr p1,pairr p2)
{
 	///p1 -> 7 , 9
 	/// p2 -> 0 , 10

 	// according to end time which one shouold come first 
	//cout << "comparing (" << p1.first << "," << p1.second << ")" << "(" << p2.first << "," << p2.second << ")" << endl; 
 	return p1.second < p2.second? true: false;
 	// 10 < 9 : false;

}

void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	int n;
	cin >> n;

	vector<pairr> v;
	for(int i=0;i<n;i++)
	{
		int s,e;
		cin >> s >> e;

		pairr p(s,e);
		v.push_back(p);
	}

	sort(v.begin(),v.end(),comparator);

	for(auto i:v)
	{
		cout << i.first <<" " << i.second << endl;
	}
	int last_activity_ending_time = v[0].second;

	int count = 1;
	for(int i=1;i<n;i++)
	{
		int current_activity_starting_time = v[i].first;
		

		// if last is done
		/// starting time < endting time of last activity

		if(current_activity_starting_time >= last_activity_ending_time)
		{
			count++;
			last_activity_ending_time = v[i].second;
			cout << v[i].first << " " << v[i].second << endl;
		}
	}

	cout << count << endl;
}

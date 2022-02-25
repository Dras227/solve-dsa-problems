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
int minEatingSpeed(vector<int>& piles, int h) {
        
        // warming up for binary search 
        // considering in the best case koko can eat 1 banana in 1h              
        // and in worst case it has to eat max no. of banana in 1h 
        
        int high = *max(piles.begin(),piles.end()),low = 1,mid;
        
        while(low<=high)
        {
            // lets find a middle ground apart from the extremes
            mid = (low+(high-low))/2;
            
            int cnt = 0;
            for(auto a:piles) cnt += (a/mid + a%mid);
            
            // if we find exactly how much koko should eat perhour 
            // to get bananas for all h hours
            if(cnt == h) 
            {
                return mid; 
            }
            
            // if number of hours it is taking to eat is taking 
            // more than the given hours h
            // then koo koo should increase the eating rate k/h
            if(cnt > h)
            {
                low = mid + 1;
            }
            
            // if number of hours it is taking is less
            // then koo koo ma still eat less banana perhour
            // and may complete in the given hours h
            else high = mid-1;
            
        }
        return -1;
    } 
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	int n,h;
	cin >> h >> n;

	vector<int> a;

	for(int i=0;i<n;i++)
	{
		int item;

		cin >> item;
		a.push_back(item);
	}

	cout << minEatingSpeed(a,h);


}

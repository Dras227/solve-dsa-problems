#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; cerr << x; cerr << endl;
#else
#define debug(x)
#endif
void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); 
#ifndef ONLINE_JUDGE
cout << "@Dras227\n\n\n";
freopen("Error.txt", "w", stderr);
#endif
solve();return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	int t;
		cin >> t;
		
		while(t--)
		{
			int n;
			cin >> n;

			vector<int> v;			
			int a[n];

			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}

			for (int i = 0; i < n; i++)
			{
				//for every element there are two possiblities
				// 1. if all the elements of vector (vector contains the top of the stacks)
				//		are less than the current then we have to insert that element
				// 2. if any element is strictly greater than the current element 
				// 		then we can insert the current element on top of that stack

				int current = a[i];

				// check the vector for the existence of the element which is strictly greater than current
				auto  it = upper_bound(v.begin(),v.end(),current);

				if(it!=v.end()){
					*it = current;
				}
				else v.push_back(current);
			}
			cout << v.size()  << " ";
			for(auto item:v)
			{
				cout << item << " " ;
			}

			cout << endl;

			cout << endl;
		}	

	return;
}



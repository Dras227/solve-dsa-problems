#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int i,j;void pA(int *a,int s,int e){cout << endl;repr(i,s,e) cout << a[i] << " ";return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;

	while(t--)
	{
		int n,k,x,y;
		cin >> n >> k >> x >> y;

		//pair<int,int> point;
		vector<int> X;
		vector<int> Y;
		X.push_back(x);
		Y.push_back(y);
		if(x==y)
		{
				cout << n <<" " <<  n  << endl;
				continue;
		}

		if(x>y)
		{
			
			// first strike right dead end
			y = y + (n-x);
			x = x+(n-x);
			X.push_back(x);
			Y.push_back(y);
			// second strike from right dead end to top end

			swap(x,y);
			X.push_back(x);
			Y.push_back(y);

			// third strike from top end to the left dead end
			y = y - x;
			x = 0;
			X.push_back(x);
			Y.push_back(y);

			// fourth strike from left end to the down end finally forming the cycle

			swap(x,y);
			y = 0;
			X.push_back(x);
			Y.push_back(y);
		}
		else
		{
			// first strike to the top end
			x = x + (n-y);
			y = y + (n-y);
			X.push_back(x);
			Y.push_back(y);
			// second strike from top end to right dead end

			swap(x,y);
			X.push_back(x);
			Y.push_back(y);

			// third strike from right end to bottom edge
			x = x - y;
			y=0;
			X.push_back(x);
			Y.push_back(y);
			//	fourth strike from bottom edge to top edge

			swap(x,y);
			X.push_back(x);
			Y.push_back(y);
		}

		/*for(auto item:p)
		{
			cout << item.first << " " << item.second << endl;
		}*/

		X[0] = X[4];
		Y[0] = Y[4];
		
		//cout << k;
		//if(k<=4)
		k = k%4;
		cout << X[k] << " " << Y[k] << endl;
	}

	
	// problem link: 
}
/*
debugged history

*/
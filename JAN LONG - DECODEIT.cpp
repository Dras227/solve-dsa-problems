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
string alphabets = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
void solve ()
{
	//Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;
	string alpha = "abcdefghijklmnop";
	while(t--)
	{	
		int n;
		cin >> n;

		string dn;
		cin >> dn;
		string en;
		int i=0;
		while(i<n)
		{
			int start = 0, end = 15;
			int mid = (start+end) / 2;

			for(int j=0;j<=3;j++)
			{
				mid = (start+end) / 2;

				if(dn[i]=='0')
				{
					end = mid-1;
				}
				else 
				{
					start = mid + 1;
				}

				i+=1;
			}

			//cout << alpha[start] << alpha[end] << endl;
			en+=alpha[start];
		}
		cout << en << endl;
	}

	// problem link: 
}
/*
debugged history

*/
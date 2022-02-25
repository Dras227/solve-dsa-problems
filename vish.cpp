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

#include<stdio.h>
#include<string.h>


int count_unique_char(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;

	
	for (i = 0; i < strlen(str); ++i) {
		
		hash[str[i]] = 1;
	}

	
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}

	return c;

}


void main ()
{
	

	char str[300];

	int n;
	cin >> n;	
	gets(str);

	printf("%d", count_unique_char(str));

}

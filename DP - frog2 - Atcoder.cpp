#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include <climits>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data) {return atoi(data.c_str());}
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void pA(vector<int> a,int s,int e){int i;cout << endl;repr(i,1,e)cout << a[i] << " ";};
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 1001
int i, j;
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	Dungeon_Master();// cout << "Hii,I am @iron_manu22 \n\n\n";

	int n,k;

	cin >> n >> k;

	vector<int> a(n+1);

	repr(i,1,n) cin >> a[i];


	vector<int> minimum_cost(n+1);

	minimum_cost[1] = 0;
	minimum_cost[2] = abs(a[2] - a[1]);

	//int final_ans = INT_MAX;
	for(int i=3;i<=n;i++)
	{	
		int ans =INT_MAX;
		for(int j=1;j<=k;j++)
		{
			if(i-j<=0)  	break;
			if(i-j>0)
			{
				int local_ans = minimum_cost[i-j] + abs(a[i] - a[i-j]);
				//cout << local_ans  << " ";
				ans = min(local_ans,ans);
			}
		}
		//cout << endl;
		minimum_cost[i] = ans;
	}
	cout << minimum_cost[n];

	//pA(minimum_cost,1,n);
}



/*

intput - Debugged
10 4
40 10 20 70 80 10 20 70 80 60


minimum cost array

1	2	3	4	5	
10	30  40  50  20

0	20	30	40	

i=3
j=1		 local_ans = minimum_cost[i-j] + abs(a[i] - a[j]);
						= 10 + 
						= 50
j=2
output - Debugged
Hii,I am @iron_manu22 


40 20 
70 90 30 
40 80 100 40 
110 90 30 30 
40 100 80 20 
70 90 50 30 
40 80 100 40 
60 40 60 80 
40
0 30 20 30 40 30 20 30 40 40 */
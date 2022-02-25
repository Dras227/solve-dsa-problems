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
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; cerr << x; cerr << endl;
#else
#define debug(x)
#endif
string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("Error.txt", "w", stderr);
cout << "@Dras227\n\n\n";
#endif
solve();return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void display(vector<pair<int,int>> &v)
{
				cout << v.size() << endl;
				for(auto item:v)
				{
					cout << item.first+1 << " " << item.second+1 << endl;
				}
}
void solve ()
{
	
int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int a[n];
		string s1;
		vector<pair<int,int>> v1;
		vector<pair<int,int>> v2;
		int not_all_same=0,even1=-1,odd1=-1,even2 = -1, odd2 = -1;
		for (int i = 0; i < n; i++)
		{	
			cin >> a[i];
			if(a[i]&1) 
			{
				odd2 = odd1;
				odd1 = i;
				s1+='o';
			}
			else 
			{
				even2 = even1;
				even1 = i;
				s1+='e';
			}
		}

		if(odd1!=-1)
		{
			not_all_same = 1;
		}


		
		if(not_all_same)
		{
			int req_oe = 0,req_eo = 0;bool eo_possible=true,oe_possible=true;
			for (int i = 0; i < n; i++)
			{
				// lets go first for oe sequence
				// in every odd place there shoud be odd 
				if(i%2 == 0) 
				{
					if(s1[i] == 'o') 
						continue;
					else
					{
					   req_oe++;
					   //even number is existing in the place of odd
					   // to get an odd number we should XOR this even with odd number
					   // last places doesn not match and we will get an odd number
					   // e-> 0 convert 0 -> 1 --> 0^1 = 1 -> even^odd
					   if(i!=odd1) v1.push_back({i,odd1});
					   else if(odd2!=-1 and i!=odd2) v1.push_back({i,odd2});
					   else
					   {
					   		oe_possible = false;
					   		break;
					   }
					    
					}
				}
				else {
					if(s1[i] == 'e') 
						continue;
					else
					{
					   req_oe++;
					   // odd is existing in the place of even
					   // that existing odd number XOR odd number (1^1 = 0 (even))
					   // last places matches and we will get a 0 bit at the end and is a even number now
					   // odd -> 1 convert to 0 -> 1^1 -> odd^odd = even
					   if(i!=odd1) v1.push_back({i,odd1});
					   else if(odd2!=-1 and i!=odd2) v1.push_back({i,odd2});
					   else
					   {
					   		oe_possible = false;
					   		break;
					   }
					}
				}
			}

			for (int i = 0; i < n; i++)
			{
				// lets go first for oe sequence
				// in every odd place there shoud be odd 
				if(i%2 == 0) 
				{
					if(s1[i] == 'e') 
						continue;
					else
					{
					   req_eo++;
					   // odd is existing in the place even
					   // that existing odd number XOR odd number
					   // last places does match now and it gives us a even number 
					   // odd to even -> even = odd^odd -> 1^1
					   if(i!=odd1) v2.push_back({i,odd1});
					   else if(odd2!=-1 and i!=odd2) v2.push_back({i,odd2});
					   else
					   {
					   		 eo_possible = false;
					   		 break;
					   }
					}
				}
				else {
					if(s1[i] == 'o') 
						continue;
					else
					{
					   req_eo++;

					   //even is existing in the place of odd, so now we have to make 
					   // that even number odd, so we should xor with an odd number 
					   // last place doesnt match so %2 gives 1 and we get an odd number
					   // even to odd -> odd = even ^ odd  -> 0^1
					   if(i!=odd1) v2.push_back({i,odd1});
					   else if(odd2!=-1 and i!=odd2) v2.push_back({i,odd2});
					   else
					   {
					   		 eo_possible = false;
					   		 break;
					   }
					}
				}
			}


			if(eo_possible and oe_possible)
			{
				if(req_eo < req_oe) display(v2);
				else display(v1);
			}
			else if(eo_possible) display(v2);
			else if(oe_possible) display(v1);
		}
		else cout << "-1" << endl;
		

	}
}

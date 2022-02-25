#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){//IOS;cin.tie(NULL);
	solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE  
int mostFrequent(vector<int> &arr, int n) 
{ 
    // Insert all elements in hash. 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
 
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 
  
void solve ()
{
	Dungeon_Master();
	int n,i;

	cin >> n;
	map<int,int> m;

	int max_f = INT_MIN;int great;
	std::vector<int> v;
	rep(i,n)
	{	
		int t;
		cin >> t;
		v.push_back(t);
	}

	cout <<mostFrequent(v,n);
	
}






















































































/*intput.txt
output.txt*/
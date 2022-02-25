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
bool cmp(pair<int, int>& a, 
         pair<int, int>& b) 
{ 
    return a.second < b.second; 
} 
void KswapPermutation( 
    int arr[], int n, int k) 
{ 
    // Auxiliary dictionary of 
    // storing the position of elements 
    int pos[n + 1]; 
  
    for (int i = 0; i < n; ++i) 
        pos[arr[i]] = i; 
  
    for (int i = 0; i < n && k; ++i) { 
        // If element is already i'th largest, 
        // then no need to swap 
        if (arr[i] == n - i) 
            continue; 
  
        // Find position of i'th 
        // largest value, n-i 
        int temp = pos[n - i]; 
  
        // Swap the elements position 
        pos[arr[i]] = pos[n - i]; 
        pos[n - i] = i; 
  
        // Swap the ith largest value with the 
        // current value at ith place 
        swap(arr[temp], arr[i]); 
  
        // decrement number of swaps 
        --k; 
    } 
}
void solve ()
{
	Dungeon_Master();
	
	int n,k;
	cin >> n >> k;

	int a[n];
	
	int i;

	rep(i,n)
	{
		
		cin >> a[i];
	}

	KswapPermutation(a,n,k);

	rep(i,n) cout << a[i] <<" ";
	

}






















































































/*intput.txt
output.txt*/
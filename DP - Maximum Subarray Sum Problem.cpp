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
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE  
int maxSum(int arr[],int n)
{
	int i;
	

	int cur_sum = arr[0]>0?arr[0]:0;
	int max_so_far = cur_sum;
	repr(i,1,n-1)
	{
		cur_sum = cur_sum + arr[i];

		if(cur_sum < 0) {cur_sum = 0;}
		

		max_so_far = max(cur_sum,max_so_far);
	}

	return max_so_far;
}
// special case 
// if array contains all -ve elements 
// you need to output the smallest -ve element

void solve ()
{
	Dungeon_Master();//cout << "Hii,I am @iron_manu22 \n\n\n";

	int arr[] = {-3,2,5,1,6,3,-2,7,-5,2};

	int n = sizeof(arr)/sizeof(int);

	cout << maxSum(arr,n);	
}






















































































/*intput.txt
output.txt*/
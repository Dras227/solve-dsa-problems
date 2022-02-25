#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
   IOS;
   cin.tie(NULL);
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
vector<long long> geekAnd(int n, vector<int> &a, int qn, vector<vector<int>> &q)
	{
		// Your code goes here
		vector<long long> ans;
		for(int i=0;i<qn;i++)
		{
		    int fust = a[q[i][0]];
   	    	int sec = a[q[i][1]];int c = fust&sec;
   		    //cout << a[i] << " " << fust <<" "<< sec <<" "<<c<<" ";
   		  
   		if(c==0) ans.push_back(1); 
   		else ans.push_back(0); 
		}
		return ans;
	}
void solve ()
{	
	int i,n;
	cin >> n;
	vector<int> a;
	rep(i,n) 
	{
		int item;
		cin >> item;
		a.push_back(item);
	}
	int qn;
	cin >> qn;
	vector<vector<int>> q;
	rep(i,n)
	{	
		int l,r;
		cin >> l >> r;
		
		vector<int>v1;
		v1.push_back(l);v1.push_back(r);
		q.push_back(v1); 
	}
	vector<long long> ans = geekAnd(n,a,qn,q);

	rep(i,n) cout << ans[i] << " ";
	return;

			

   // int c  = 1000069 & 3; //cout << c;
     rep(i,qn)
   {
		int fust = a[q[i][0]];
   		int sec = a[q[i][1]];int c = fust&sec;
   		//cout << a[i] << " " << fust <<" "<< sec <<" "<<c<<" ";
   		if(c==0) cout << "1 "; 
   		else cout <<"0 "; 
   }
} 

/*intput.txt
output.txt*/
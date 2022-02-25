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
void solve ()
{
    int i,n;

    cin >> n;

    int a[n];
    deque<int> q;
   
    int item;
    rep(i,n)
    {
 		cin >> item;
    	q.push_back(item);
    }
    int count = 0;
    rep(i,n) cin >> a[i];
    for(int i=0;i<n;i+=1)
    {
    	while(q.front()!=a[i] and !q.empty())
    	{
    		item = q.front();
    		q.pop_front();
    		q.push_back(item);
    		count+=1;
    	}
    	count+=1;
    	q.pop_front();
    	/*cout << (q.empty()?-1:q.front()) << " "<<a[i] << endl;
    	q.pop_front(); */
    }

    cout <<  count ;
} 

/*intput.txt
output.txt*/
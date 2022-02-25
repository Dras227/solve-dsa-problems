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
    int i,n,max_area=0,area=0;
    cin >> n;

    int a[n];

    rep(i,n) cin >> a[i];

    stack<int> s;
    int tp;i=0;
    while(i<n)
    {
    	if(s.empty()||a[i] >= a[s.top()])
    		s.push(i++);

    	else
    	{
    		tp = s.top();s.pop();

    		int bar = a[tp];

    		area = bar*(s.empty()? i :i - s.top() - 1);
    		max_area = max(max_area,area);
    	}
    }

    while (!s.empty())
    {
    	tp = s.top();
    	s.pop();

    	int bar = a[tp];

    	 area = bar*(s.empty()? i :i - s.top() - 1);
    		max_area = max(max_area,area);

    	

    }

    cout << max_area;
    //its prepcoding soln not worked
    /*stack<int> sr;

    int rb[n];
    sr.push(n-1);
    rb[n-1] = n;

    for(int i=n-2;i>=0;i--)
    {
    	if(!sr.empty() and a[i] < a[sr.top()])
    	{
    		sr.pop();
    	}

    	if(sr.empty()) rb[i] = n;
    	else rb[i] = sr.top();

    	sr.push(i);
    }
    rep(i,n) cout << rb[i] << " ";

     stack<int> sl;

    int lb[n];
    sl.push(0);
    lb[0] = -1;

    for(int i=1;i<n;i++)
    {
    	if(!sl.empty() and a[i] < a[sl.top()])
    	{
    		sl.pop();
    	}

    	if(sl.empty()) lb[i] = -1;
    	else lb[i] = sl.top();

    	sl.push(i);
    }
    cout << endl;
    rep(i,n) cout << lb[i] << " ";
    int area = -1;
    rep(i,n)	
    {
    	area = max(area,(rb[i] - lb[i]-1) * a[i]);
    }
    cout << area;*/
   // cout << "hello" << max_area;
} 

/*intput.txt
output.txt*/
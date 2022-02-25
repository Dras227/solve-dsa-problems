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
   	int i,n,k;
   	
   	cin >> n;
   	
   	int a[n];

   	rep(i,n) cin >> a[i];
   	cin >> k;
   	deque<int> q(k);
   
   	for(i=0;i<k;i+=1)
   	{
   		while(!q.empty() and a[i] > a[q.back()])
   		{
   			//cout << a[i] <<" is greater than "<< a[q.back()] << endl;
   			//cout << "popping out "<<a[q.back()] <<endl;
   			q.pop_back();
   		}
   		//else if(q.empty())
   		//cout << "inserting "<<a[i] <<endl;
   		q.push_back(i);
   	}
   	
   	for(;i<n;i++)
   	{
   		cout << a[q.front()] << " ";

   		//remove the elements which are not belonging to this window
   		while(!q.empty() and  q.front()<=i-k)
   		{
   			q.pop_front();
   		} 

   		//check the current element greatest in the window
   		while(!q.empty() and a[i] >= a[q.back()])
   		{
   			q.pop_back();
   		}
   		q.push_back(i);
   	}
   	while(!q.empty())
   	{
   		cout << a[q.front()] << " ";q.pop_front();
   	}
   /*	while(!q.empty())
   	{
   		cout << a[q.back()];
   		q.pop_back();
   	}*/
} 

/*intput.txt
output.txt*/
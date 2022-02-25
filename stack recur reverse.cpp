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
void insertAtTheBottom(stack<int> &

	s,int x)
{
	//vase case
	if(s.empty())
	{
		s.push(x);
		return;
	}

	//rec case

	int data = s.top();
	s.pop();
	insertAtTheBottom(s,x);
	s.push(data);
}
void reverse(stack<int> &s)
{
	//base case
	if(s.empty())
	{
		return;
	}

	int x = s.top();
	s.pop();

	
	reverse(s);
	insertAtTheBottom(s,x);
	

}
void solve ()
{
	stack<int>s;
	int item;
	while(cin >> item)
	{
		s.push(item);
	}

	reverse(s);
	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}

	//cout << "hello";
} 

/*intput.txt
output.txt*/
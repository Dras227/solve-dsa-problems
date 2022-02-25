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
class Queue
{
	stack<int>s1;
	stack<int>s2;

public:
	stack<int> reverse(stack<int> &s)
	{
		stack<int>temp;

		while(!s.empty())
		{
			int ele = s.top();
			s.pop();
			temp.push(ele);
		}

		return temp;
	}
	void push_back(int item)
	{
		// the stack s1 will be in queue form
		// so in order to push at the back we have to reverse the
		s1 = reverse(s1);
		s1.push(item);
		s1 = reverse(s1); 
	}
	void pop_front()
	{
		s1.pop();
		return;
	}
	void display()
	{
		int i;
		while(!s1.empty())
		{
			cout << s1.top() << " ";
			s1.pop();
		}
	}

};
void solve ()
{
	Queue q;

	int i,n;
	cin >> n;
	rep(i,n) q.push_back(i);

	q.display();
} 

/*intput.txt
output.txt*/
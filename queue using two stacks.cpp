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
template<typename T>
class Queue
{
	stack<T> s1;
	stack<T> s2;

public:
	void add(T item)
	{
		s1.push(item);
	}
	stack<T> reverse(stack<T> s)
	{	stack<T>temp;
		while(!s.empty())
		{
			T ele = s.top();
			temp.push(ele);
			s.pop();
		}

		return temp;
	}
	void remove()
	{
		if(s1.empty()) return;

		s1 = reverse(s1);
		T r = s1.top();
		cout << r << " is removed" << endl;
		s1.pop();
		s1 = reverse(s1);
		return;
	}

	void display(T i)
	{
		stack<T>s = reverse(s1);
		if(i==1)
		{
			cout << "front = "<<s.top() << endl;
		}
		while(!s.empty())
		{
			cout << s.top() << " ";
			s.pop();
		}
		//s1 = reverse(s1);
		cout << endl;
		return;
	}
};
void hi()
{
	while(1)
		cout << "hii";
}
void solve ()
{
	Queue <char >q1;

	q1.add(65);
	q1.add(66);
	q1.add(67);
	q1.add(69);
	q1.display(0);
	q1.remove();
	//q1.display(0);
	q1.remove();
	q1.display(0);


} 

/*intput.txts
output.txt*/
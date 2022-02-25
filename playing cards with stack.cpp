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
void prime_sieve(vector<int> &primes)
{
	//vector<int> primes;
	int a[10000];
	primes.push_back(2);

	for(int i=3;i<=10000;i+=2)
	{
		a[i] = 1;
	} 

	for(int i=3;i<=10000;i+=2)
	{
		if(a[i]==1)
		{
			for(int j=i*i;j<=10000;j+=i)
				a[j] = 0;
		}

	}

	for(int i=3;i<=10000;i++)
	{
		if(a[i]==1) primes.push_back(i);
	}
	
}
void solve ()
{
	vector<int>primes;
	int item,n, i,q;
 	
 	prime_sieve(primes);
	rep(i,100) cout << primes[i] << endl;return;
	cin >> n;
	cin >> q;
	
	stack<int> s1;
	stack<int> s2;
	
	
	rep(i,n)
	{
		cin >> item;
		s1.push(item);
	}
///	cout <<"hello!";
	rep(i,q)
	{
		if(s1.empty()) break;

		int div = primes[i];

		stack<int> s3;
		while(!s1.empty())
		{
			int ele = s1.top();
			s1.pop();
			if(ele%div == 0) 
				s2.push(ele);
			else 
				s3.push(ele);

		}
		while(!s2.empty())
		{
			cout << s2.top() << endl;
			s2.pop();
		}
		s1 = s3;
		

	}

	while(!s1.empty())
	{
		cout << s1.top() << endl;
		s1.pop();
	}
}
/*intput.txt
10

           S1
4
5
4
15
11
10
5
7
5
3

1) div = 2  2)  div = 3       3) div = 5                                            
s1		s2   	s1     s2		s1     s2														
3																			
5																			
7		10		5																
5		4		22															
11		4		7		15															
15				5		3															
5																						
																					
output.txt*/
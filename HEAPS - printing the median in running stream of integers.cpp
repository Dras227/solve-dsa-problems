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
void solve ()
{
	//this wont work for all the test cases kindly refactor it
	Dungeon_Master();

	int t;
	cin >> t; 

	while( t--)
	{
		int  n;
		cin >> n;


		std::vector<int> v;

		int d;

		cin >> d;

		priority_queue<int> left;
		priority_queue<int,vector<int>,greater<int>>right;


		left.push(d);
		cout << d <<" ";
		float median = d;
		cin >> d;
		n-=1;
		while(n--)
		{
			if(right.size() > left.size())
			{
				if(d > median)
				{
					left.push(right.top());
					right.pop();
					right.push(d);
				}
				else left.push(d);

				median = (right.top() + left.top())/2;
			}
			else if(right.size() == left.size())
			{
				if(d>median)
				{
 					right.push(d);
 					median = right.top();
 				}
				else
				{
				   left.push(d);
				   median = left.top();
				}
			}
			else
			if(right.size() < left.size())
			{
				if(d < median)
				{
					right.push(left.top());
					left.pop();
					left.push(d);
				}
				else right.push(d);

				median = (right.top() + left.top())/2;
			}

			cout << median  << " ";
			cin >> d;
		}
		

	}
}






















































































/*intput.txt
You are given a running data stream of n integers. You read all integers from that running data stream and find effective median of elements read so far in efficient way. All numbers are unique in the datastream. Print only the integer part of the median.

Input Format
First line contains integer t as number of test cases. Each test case contains following input. First line contains integer n which represents the length of the data stream and next line contains n space separated integers.

Constraints
1 < t < 100
1< n < 10000

Output Format
Print the effective median of running data stream..

Sample Input
1
6
5 15 1 3 2 8
Sample Output
5 10 5 4 3 4
Explanation
Iteration 1 :
Array = {5}
Median = 5

Iteration 2 :
Array = {5,15}
Median = (5+15)/2 = 10

Iteration 3 :
Array = {1,5,15}
Median = 5

Iteration 4 :
Array = {1,3,5,15}
Median = (3+5)/2 = 4

Iteration 5 :
Array = {1,2,3,5,15}
Median = 3

Iteration 6 :
Array = {1,2,3,5,8,15}
Median = (3+5)/2 = 4
output.txt*/
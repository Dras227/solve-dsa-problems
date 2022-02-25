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
typedef pair<int,pair<int,int>> node; 
void solve ()
{
	Dungeon_Master();
	int m,n,i,j;

	cin >> m >> n;


	vector<vector<int>> pq;

	rep(i,m)
	{
		vector<int> q;
		rep(j,n)
		{

			int item;
			cin >> item;
			q.push_back(item);
		}
		pq.push_back(q);
	}

	priority_queue<node,vector<node>,greater<node>> p;

	// push the first elements of the every array into the heap
	for(int i=0;i<pq.size();i++)
	{
		p.push({pq[i][0],{i,0}});
	}
	vector<int> result;
	while(!p.empty())
	{
		node pr = p.top();
		p.pop();
		int element = pr.first;
		int x = pr.second.first;
		int y = pr.second.second;
		result.push_back(element);

		if(y+1 < pq[x].size())
		p.push({pq[x][y+1],{x,y+1}});
	}

	for(auto i:result)
		cout << i << " ";

	/*rep(i,m)
	{
		rep(j,n)
			cout << pq[i][j] << " ";
		cout << endl;
	}*/


}






























/*intput.txt
Given K sorted arrays each with N elements merge them and output the sorted array

Input Format
First line contains 2 space separated integers K and N.
Next lines contain K*N space separated integers

Constraints
Elements of array <= |10^15|
N <= 10^5
K <= 10

Output Format
Single line consisting of space separated numbers

Sample Input
3 4
1 3 5 7 2 4 6 8 0 9 10 11
Sample Output
0 1 2 3 4 5 6 7 8 9 10 11
Explanation
If we were to combine all the arrays into one and then sort it , the output would be as above.
output.txt*/
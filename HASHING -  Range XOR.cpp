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
class node
{
	public:node* left;
	node* right;
	vector<int> v;

	public:node()
	{
		left = NULL;
		right = NULL;
	}
};

class trie
{
	node* root;

	public:trie()
	{
		root=new node();
	}

	void insert(int data,int index)
	{
		node *temp = root;
		int i;
		for(i=31;i>=0;i--)
		{
			int bit = (data >> i)&1;

			if(bit==0)
			{

				if(temp->left==NULL)
				{
					temp->left = new node();
				}
				temp->left->v.push_back(index);
				temp = temp->left;
			}
			else
			{
				if(temp->right==NULL)
				{
					temp->right = new node();
				}
					temp->right->v.push_back(index);
					temp = temp->right;
			}
		}
		temp->v.push_back(index);

	}

	bool find(int data)
	{
		node *temp = root;
		int i;
		for(i=31;i>=0;i--)
		{
			int bit = (data>>i)&1;

			if(bit==0)
			{
				if(temp->left!=NULL)
					temp=temp->left;
				else  
					return false;
			}
			else if(bit==1)
			{
				if(temp->right!=NULL)
					temp=temp->right;
				else  
					return false;
			}
		}

		return true;
	}
	bool check(std::vector<int> &v,int l,int r)
	{
		for(auto i:v)
		{
			if(i>=l and i<r)
			{
				cout << i << " ";
				return true;
			}
		}

		return false;
	}
	int max_xor_helper(int data,int l,int r)
	{
		node *temp = root;
		int current_ans=0;
		for(int i=31;i>=0;i--)
		{
			int bit = (data >> i)&1;
			
			if(bit==0)
			{
				bool flag = false;
				if(temp->right!=NULL and (check(temp->right->v,l,r)))
				{
					current_ans+=(1<<i);
					temp=temp->right;
					flag = true;
				}
				else if(check(temp->left->v,l,r))
						{
							temp=temp->left;
							flag = true;
						}
						
				else  return current_ans;	
			}
			else
			{
				bool flag = false;
				if(temp->left!=NULL and (check(temp->left->v,l,r)))
				{
					current_ans+=(1<<i);
					temp=temp->left;
					flag = true;
				}
				else if(check(temp->right->v,l,r))
						{
							temp=temp->right;
							flag = true;
						}
						
				else  return current_ans;	
			}
		}

		return current_ans;
	}

	int max_xor(int *a,int l,int r,int x)
	{
		int current_ans=0,max_ans=0;

		for(int i=l;i<r;i++)
		{
			current_ans = max_xor_helper(x,l,r);

			max_ans = max(current_ans,max_ans);
		}

		return max_ans;
	}
};

void solve()
{
	Dungeon_Master();

	int q ;

	cin >> q;
	int a[10000];
	trie t;
	int i,j=0,queryType;
	rep(i,q)
	{
		cin >> queryType;
		

		if(queryType==0)
		{
			j+=1;
			cin >> a[j];
			t.insert(a[j],j);
		}
		else
		{
			int l,r,x;

			cin >> l >> r >> x;
	
			cout << t.max_xor_helper(x,l,r);
		}
		
	}	



}





















































































/*intput.txt
output.txt*/
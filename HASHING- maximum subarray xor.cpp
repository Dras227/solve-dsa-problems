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

	void insert(int data)
	{
		node *temp = root;
		int i;
		for(i=31;i>=0;i--)
		{
			int bit = (data >> i)&1;

			if(bit==0)
			{

				if(temp->left==NULL)
					temp->left = new node();
				temp =temp-> left;
			}
			else
			{
				if(temp->right == NULL)
					temp->right = new node();

				temp = temp->right;
			}
		}

	}

	bool find(int data)
	{
		node *temp = root;
		int i;
		for(i=31;i>=0;i--)
		{
			int bit = (data>>i)&1;

			if(bit==0)
				if(temp->left!=NULL)
					temp=temp->left;
				else  
					return false;
			else if(bit==1)
				if(temp->right!=NULL)
					temp=temp->right;
				else  
					return false;

		}

		return true;
	}

	int max_xor_helper(int data)
	{
		node *temp = root;
		int current_ans=0;
		for(int i=31;i>=0;i--)
		{
			int bit = (data >> i)&1;

			if(bit==0)
			{
				if(temp->right!=NULL)
				{
					temp=temp->right;
					current_ans+=(1<<i);
				}

				else temp = temp->left;
			}
			else
			{
				if(temp->left!=NULL)
				{
					temp=temp->left;
					current_ans+=(1<<i);
				}

				else temp = temp->right;
			}
		}

		return current_ans;
	}

	int max_xor(int *a,int n)
	{
		int current_ans=0,max_ans=0;

		for(int i=0;i<n;i++)
		{
			current_ans = max_xor_helper(a[i]);

			max_ans = max(current_ans,max_ans);
		}

		return max_ans;
	}
};

void solve()
{
	Dungeon_Master();

	int n ;
	trie t;
	cin >> n;
	int a[n];int i;
	rep(i,n)
	{
		cin >> a[i];
		if(i>0) a[i] = a[i]^a[i-1];
		t.insert(a[i]);
		
	}	

	cout <<t.max_xor(a,n);


}





















































































/*intput.txt
output.txt*/
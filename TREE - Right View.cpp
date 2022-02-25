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
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDS
//                        HERE
class node
{
	public: int data;
			node* right;
			node* left;

			node(int d)
			{
				data = d;
				right = left = NULL;
			}
};
void bfs(node* root )
{
	queue<node*> q;
	q.push(root);

	while(!q.empty())
	{
		node* temp = q.front();

		q.pop();

		cout << temp->data << " ";

		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
	}
}
node* insertInBinaryTree()
{
	int d;
	cin >> d;

	node* root = new node(d);
	int c1,c2;
	queue<node*> q;
	q.push(root);
	cin >> c1 >> c2;
	
	while(!q.empty())
	{
		node* temp = q.front(); q.pop();
		if(c1!=-1)
		{
			node* left = new node(c1);
			temp->left = left;
			q.push(left);
		}
		if(c2!=-1)
		{
			node* right = new node(c2);
			temp->right = right;
			q.push(right);
		}
		cin >> c1 >> c2;
	}

	return root;
}
void right_view(node* root,int level,int &max_level)
{
	if(root==NULL) return;

	if(level>max_level)
	{
		cout << root->data << " ";
		max_level = level;
	}

	right_view(root->right,level+1,max_level);
	right_view(root->left,level+1,max_level);
	return ;
}
void solve()
{
	Dungeon_Master();
	node* root = NULL;

	root = insertInBinaryTree();
	int u=-1;
	right_view(root,0,u);
	//bfs(root);
}
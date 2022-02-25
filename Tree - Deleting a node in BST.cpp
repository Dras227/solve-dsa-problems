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
node* insertInBST(node* root,int item)
{
	if(root == NULL)
		{
		 	return  new node(item);
		
		}

	if(root->data>=item)
		root->left = insertInBST(root->left,item);
	else
		root->right = insertInBST(root->right,item); 
	
	return root;
}
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
void preorder(node* root)
{
	if(root==NULL) return ;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
	return;
}
node* deleteNodeInBST(node* root,int item)
{
	//base case
	if(root == NULL) return NULL;

	//rec case

	//if the root->data greater than the item - goto left

	if(root->data>item)
	{
		root->left = deleteNodeInBST(root->left,item);
		return root;
	}
	//if root->data is equal to the item - we found the node to be deleted
	else if(root->data == item)
	{
		// there are 3 cases
		//case #1 - 0 childs

		if(root->left == NULL and root->right == NULL)
		{
			delete root;
			return NULL;
		}

		//case #2 - 1 childs
		if(root->left!=NULL and root->right==NULL)
		{
			node* temp = root->left;
			delete root;
			return temp;
		}
		else if(root->right!=NULL and root->left==NULL)
		{
			node* temp = root->right;
			delete root;
			return temp;
		}

		//case #3 - 2 childs

		// i) finding the replacment node - usually replacement node is at extreme left on right of the root node to be deleted 
		node* replace = root->right;

		while(replace->left!=NULL)
		{
			replace=  replace->left;
		}
		// ii) making replacement node as the root node
		root->data = replace->data;

		// iii)deleting the replacement node
		root->right = deleteNodeInBST(root->right,replace->data);

		return root;
	}
	//if the root->data lesser than the item - goto left

	else(root->data<item)
	{
		root->left = deleteNodeInBST(root->right,item);
		return root;
	}

	return NULL;
}
void solve()
{
	Dungeon_Master();
	
	int t;
	cin >> t;
	while(t--)
	{
		int i,n,item;
		cin >> n;
		
		//cin >> item;
		node* root =NULL;
		
		
		//preorder(root);
		rep(i,n)
		{
			cin >> item;
			//cout << item;
			root = insertInBST(root,item);
		}
		int nd;
		cin >> nd;
		int del[nd];
		rep(i,nd) 
		{
			cin >>del[i];
			root = deleteNodeInBST(root,del[i]);
		}

		preorder(root);
		cout << endl;
	}
}
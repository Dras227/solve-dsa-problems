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
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data = d;
		left = right = NULL;
	}

};
void preorder(node* root)
{
	if(root == NULL) return ;

	cout << root->data <<" ";

	preorder(root->left);
	preorder(root->right);
	return;
}
node* build_binary_tree(int *pre,int *in,int s,int e)
{
	static int i=0;
	if(s>e) return NULL;

	node* root = new node(pre[i]);

	int index = -1;

	int j;
	repr(j,s,e)
	{
		if(pre[i]==in[j]) 
		{
			index = j;
			break;
		}
	}
	i++;
	root->left = build_binary_tree(pre,in,s,j-1);
	root->right = build_binary_tree(pre,in,j+1,e);

	return root;
}
class node_attributes
{
public:
	int size;
	int maxi;
	int mini;
	int ans;
	bool isBst;
};
node_attributes larBST(node* root);
void solve ()
{
	Dungeon_Master();
	
	int n,i;

	cin >> n;

	int pre[n],in[n];

	rep(i,n) cin >> pre[i];

	rep(i,n) cin >> in[i];

	node* root =  build_binary_tree(pre,in,0,n-1);
	cout << larBST(root).ans;
	//preorder(root);
}


node_attributes larBST(node* root)
{
	//base case
	//if the tree is empty
	if(root==NULL) return {0,INT_MIN,INT_MAX,0,true};

	//if there is only one node
	if(root->left==NULL and root->right==NULL)return {1,root->data,root->data,1,true};


	// recursive case
	node_attributes left = larBST(root->left);
	node_attributes right = larBST(root->right);
	
	node_attributes current;

	current.size = left.size + right.size +1;

	//checking whether the tree is bst
	
	if(left.maxi<=root->data 
		and
		right.mini>root->data
		and
		left.isBst
		and
		right.isBst)
	{

		current.mini = min(left.mini,min(right.mini,root->data));
		current.maxi = max(left.maxi,max(right.maxi,root->data));
		current.isBst = true;
		current.ans = current.size;

		return current;
	}

	current.mini = min(left.mini,min(right.mini,root->data));
		current.maxi = max(left.maxi,max(right.maxi,root->data));
	//if whole tree is not bst return the maximum of right and left subtrees

	current.ans = max(left.ans,right.ans);
	current.isBst = false;
	return current;




}
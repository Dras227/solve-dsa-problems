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
node* buildBSTtree(int *in,int s,int e)
{
	if(s>e) return NULL;

	int mid = (s+e)/2;

	node* root = new node(in[mid]);

	root->left = buildBSTtree(in,s,mid-1);
	root->right = buildBSTtree(in,mid+1,e);
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
void replaceSum(node* root,int *sum)
{
	if(root == NULL)
		return;

	replaceSum(root->right,sum);

	*sum+=root->data;
	root->data = *sum;

	replaceSum(root->left,sum);




}
void preorder(node* root)
{
	if(root==NULL) 
		{	
			return;
		}

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void solve_bst_sum_replace()
{
	Dungeon_Master();
	int n,i;
	cin >> n;
	int in[n];

	rep(i,n) cin >> in[i];

	node* root = buildBSTtree(in,0,n-1);
	int sum = 0;	    
	replaceSum(root,&sum);
	preorder(root);
}


/*intput.txt
output.txt*/
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
	node* left;node*right;
	node(int d)
	{
		data = d;
		left = right = NULL;
	}

};

node* buildTree_from_true_false(string s)
{
	if(s=="true")
	{
		int data;
		cin >> data;

		node* root = new node(data);


		string left,right;
		cin >> left;

		if(left == "true") root->left = buildTree_from_true_false("true");
		cin >> right;
		if(right=="true") root->right=buildTree_from_true_false("true");
		return root;
	}

	return NULL;



}
void bfs(node* root)
{
	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{
		node* temp = q.front();
		cout << temp->data << " ";
		q.pop();

		if(temp->left)q.push(temp->left);
		if(temp->right)q.push(temp->right);
	}
}
int flag = 1;
class HBpair
{
	public:int height;
			bool balance;
};

HBpair is_balance(node* root)
{
	HBpair p;
	if(root==NULL)
	{
		p.height = 0;
		p.balance = true;
		return p;
	}

	HBpair left = is_balance(root->left);
	HBpair right = is_balance(root->right);

	p.height = max(left.height,right.height)+1;

	if((left.height - right.height) <2) p.balance = true;

	return p;
} 
void solve_isbalance()
{
	Dungeon_Master();
    node* root = buildTree_from_true_false("true");//bfs(root);
 	HBpair p = is_balance(root);
    if(p.balance) cout << "true";
    else cout << "false";
}

void zigzag(node* root)
{
	if(!root) return;
	
	stack<node*>current;
	stack<node*>next;

	current.push(root);
	bool leftorright = true;
	while(!current.empty())
	{
		node* temp = current.top();
		current.pop();

		if(temp)
		{
			cout << temp->data << " ";

			if(!leftorright)
			{
				if(temp->right) next.push(temp->right);
				if(temp->left) next.push(temp->left);
			}
			else
			{
				if(temp->left) next.push(temp->left);
				if(temp->right) next.push(temp->right);

			}

			if(current.empty())
			{
				leftorright = !leftorright;
				swap(current,next);
			}


		}		

	}	

}

void solve_zigzagprint()
{
	Dungeon_Master();

	node* root = buildTree_from_true_false("true");

	zigzag(root);

}
node* create_tree_using_preAndin(int *pre,int *in,int s,int e)
{
	static int i=0;

	if(s>e) return NULL;

	node* root = new node(pre[i]);

	int index =-1;
	for(int j=s;j<=e;j++)
	{
		if(in[j]==pre[i])
		{
				index=j;
				break;
		}
	}
	i++;
	root->left = create_tree_using_preAndin(pre,in,s,index-1);
	root->right = create_tree_using_preAndin(pre,in,index+1,e);
	return root;
}
void preorder(node *root)
{
	if(root==NULL)	return;

	if(root->left==NULL)	cout<<"END => ";
	else	cout<<root->left->data<<" => ";
	cout<<root->data;
	if(root->right==NULL)	cout<<" <= END";
	else	cout<<" <= "<<root->right->data;
	cout<<endl;
	preorder(root->left);
	preorder(root->right);
}
void bfs_print_child_first(node* root)
{
	queue<node*> q;

	q.push(root);

	while(!q.empty())
	{
		node* temp = q.front();
		if(temp==NULL) break;
		if(temp->left) cout << temp->left->data <<" >= ";
		else cout << "END >= ";
		cout << temp->data <<" <=";
		if(temp->right) cout << temp->right->data << " ";
		cout << " END ";
		q.pop();
		cout << endl;
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
	}
}
void solve()
{
	Dungeon_Master();
	int n,i;
	cin >> n;
	int pre[n],in[n];
	rep(i,n) cin >> pre[i];

	cin >> n;

	rep(i,n) cin >> in[i];
	//rep(i,n) cout << in[i];
	///ep(i,n) cout << pre[i];

	
	
	node* root = create_tree_using_preAndin(pre,in,0,n-1);bfs_print_child_first(root);

}

/*intput.txt
output.txt*/
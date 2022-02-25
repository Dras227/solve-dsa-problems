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
	public:int data,hd;
			node* left;
			node* right;
			node(int d)
			{
				data = d;
				right = left = NULL;
			}
};
node* buildTreeLevelByLevel()
{
	queue<node*> q;
	int data;
	cin >> data;
	node* root = new node(data);

	q.push(root);

	int c1,c2;

	while(!q.empty())
	{
		
		node* temp = q.front();
		q.pop();
		cin >> c1 >> c2;
		
		if(c1!=-1)
		{
			node* left  = new node(c1);
			temp->left = left;
			q.push(temp->left);
		}
		if(c2!=-1)
		{
			node* right  = new node(c2);

			temp->right = right;
			q.push(temp->right);
		}

	}
	return root;
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
void bottom_View(node* root)
{
	if(root == NULL) return ;
	queue<node*> q;int hd = 0;

	map<int,int> m;

	
	root->hd = hd;
	q.push(root);

	while(!q.empty())
	{
		node *temp = q.front();
		hd = temp->hd;
		q.pop();
		m[hd] = temp->data;
		if(temp->left)
		{
			temp->left->hd = hd -1;
			
			q.push(temp->left);
		}
		if(temp->right)
		{
			temp->right->hd = hd +1;
			
			q.push(temp->right);
			
		}
	}
	for(auto i=m.begin();i!=m.end();i++) cout << i->second << " ";
}
void solve ()
{
	Dungeon_Master();
   	node *root = buildTreeLevelByLevel();
   	//cout << "hi";
   	bottom_View(root);
   	//bfs(root);
   	//preorder(root);
}

/*intput.txt
output.txt*/
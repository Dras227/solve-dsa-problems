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
class node{
	public:
	int data;node*left;node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildBinaryTreeLevelByLevel()
{


	queue<node*> q;

	int item;
	cin >> item;

	node* root = new node(item);

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

void verticalOrderPrint(node* root,int d,map<int,vector<int>> &m)
{
	if(root == NULL) return;

	m[d].push_back(root->data);

	verticalOrderPrint(root->left,d-1,m);
	verticalOrderPrint(root->right,d+1,m);

	return ;
}


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
		else temp->left = NULL;
		if(c2!=-1)
		{
			node* right  = new node(c2);

			temp->right = right;
			q.push(temp->right);
		}
		else temp->right = NULL;

	}
	return root;
}

void inorder(node* root)
{
	if(root==NULL )return;

	cout << root->data << " ";
	inorder(root->left);
	inorder(root->right);

}
node* buildbst()
{
	queue<node*>q;
	int d;cin>>d;
    node*root=new node(d);
    q.push(root);node*ll;node*rr;node*f;int l,r;
	while(!q.empty())
	{
		f=q.front();
		cin>>l>>r;
		q.pop();
		if(l==-1)
		f->left=NULL;
		else
		{
			ll=new node(l);
			q.push(ll);
			f->left=ll;
		}
		if(r==-1)
		f->right=NULL;
		else{
			rr=new node(r);
			q.push(rr);
			f->right=rr;
		}
	}
	return root;
}
void solve ()
{
	Dungeon_Master();	

	int n;
	cin >> n;
	
	node* root =   buildbst();
	map<int,vector<int>> m;
	verticalOrderPrint(root,0,m);

	for(auto s:m)
	{
		//cout << s.first << "->";
		for(auto p:s.second)
		{
			cout << p << " ";
		}
		cout << endl;
	}
	//inorder(root);
}






















































































/*intput.txt
output.txt*/
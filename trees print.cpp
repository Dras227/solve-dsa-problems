#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
   IOS;
   cin.tie(NULL);
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
class node
{
	public: int data;
			node* left;
			node* right;

			node(int d)
			{
				data = d;
				left = NULL;
				right =NULL;
			}
};

node* buildTree()
{
	int d;
	cin >> d;

	if(d==-1)
	{
		return NULL;
	}
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}	
void printPre(node* root)
{
	if(root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	printPre(root->left);
	printPre(root->right);
}
void printIn(node* root)
{
	if(root == NULL)
	{
		return;
	}
	printIn(root->left);
	cout << root->data << " ";
	printIn(root->right);
}
void printPost(node* root)
{
	if(root == NULL)
	{
		return;
	}
	printPost(root->left);
	printPost(root->right);
	cout << root->data << " ";
}
int height(node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh,rh)+1;
}
void printKthLevel(node *root,int k)
{
	if(root == NULL)
	{
		return;
	}

	if(k==1)
	{
		cout << root -> data << " ";
		return;
	}

	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
	return;
}
void printAllTheLevels(node *root)
{
	int H = height(root);

	for (int i =1;i<=H; ++i)
	{
		printKthLevel(root,i);
		cout << endl;
	}
	return;
}
pair<int,int> countAndSum(node *root)
{	
	pair<int,int> p;
	if(root == NULL)
	{
		p.first = 0;
		p.second = 0;
		return p;
	}

	pair<int,int> right = countAndSum(root->right);
	pair<int,int> left = countAndSum(root->left);

	p.first = right.first+left.first+1;
	p.second = right.second+left.second+root->data;
	return p;

}
class Pair
{
	public:int height;
		int diameter;

};
Pair fastDiameter(node* root)
{
	Pair p;

	if(root==NULL)
	{
		p.height = 0;
		p.diameter =0;
		return p;
	}

	Pair right = fastDiameter(root->right);
	Pair left = fastDiameter(root->left);

	p.height = max(right.height , left.height) + 1;
	p.diameter = max(right.height+left.height,max(right.height,left.height));
	return p;

}
void BFS(node* root)
{
	queue<node*> q;

	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node* temp = q.front();
		if(temp == NULL)
		{
			cout << endl;
			q.pop();

			if(!q.empty()) q.push(NULL);
		}
		else
		{
			cout << q.front()->data  <<" ";

			q.pop();

			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}	
	}
}
int makeNodeSumOfChildeNode(node *root)
{	
	if(root==NULL)
	{
		return 0;
	}
	if(root->right==NULL and root->left == NULL) return root->data;
	int left = makeNodeSumOfChildeNode(root->left);
	int right = makeNodeSumOfChildeNode(root->right);

	int temp = root->data;
	root->data = left+right;

	return temp+root->data;

}
void  printRightView(node* root,int level,int &max_level)
{
//	static int level = 0;static int max_level = 0;
	if(root==NULL) return;
	
	if(level > max_level)
	{
		//cout << level << " " << max_level<<" ";
		cout << root->data << endl;
		max_level = level;
	}
	level++;
	printRightView(root->right,level,max_level);
	printRightView(root->left,level,max_level);


}
void solve ()
{
    node* root = buildTree();
    cout << "PRE-ORDER:"<<endl;
    printPre(root);cout << endl<<endl;
    cout << "IN-ORDER:"<<endl;
    printIn(root);cout << endl<<endl;
    cout << "POST-ORDER:"<<endl;
    printPost(root);cout << endl<<endl;
    cout << "LEVEL-ORDER:"<<endl;
    printAllTheLevels(root);cout << endl;
    cout << "HEIGHT OF FIN TREE:";
    cout << height(root);cout << endl << endl;;
    cout << "BFS:" << endl;
    BFS(root);cout<<endl<<endl;
    Pair p = fastDiameter(root);
    cout << "DIAMETER OF THE TREE:"<<p.diameter;
    cout << endl << endl;
    pair<int,int> t = countAndSum(root);
    cout << "SUM:"<<t.second<<endl;
    cout << "NO OF NODES:"<<t.first<<endl<<endl;
    int a = -1;
    cout << "RIGHT VIEW OF THE TREE ESPESIALLY FOR YA:"<<endl;
    printRightView(root,0,a);
    int s =makeNodeSumOfChildeNode(root);
    cout << endl << "AFTER CHANGING EVERY NODE AS THE SUM OF THEIR CHILD NODES:"<<endl;
    BFS(root);

} 

/*
intput.txt
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

output.txt
PRE-ORDER:
8 10 1 6 9 7 3 14 13 

IN-ORDER:
1 10 9 6 7 8 3 13 14 

POST-ORDER:
1 9 7 6 10 13 14 3 8 

LEVEL-ORDER:
8 
10 3 
1 6 14 
9 7 13 

HEIGHT OF FIN TREE:4

BFS:
8 
10 3 
1 6 14 
9 7 13 

DIAMETER OF THE TREE:6
*/
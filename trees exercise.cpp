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
	public:int data;
			int hd;
			node* left;
			node* right;
			node(int d)
			{
				data = d;
				right = left = NULL;
			}
};
node* buildTree_using_true_false(string s)
{
	if(s=="true")
	{	
		int data;
		cin >> data;
		node* root = new node(data);

		string left;
		cin >> left;
		if(left=="true") root->left = buildTree2("true");

		string right;
		cin >> right;
		if(right=="true") root->right = buildTree2("true"); 
		return root;
	}
	return NULL;
	
}
void bfs(node* root)
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
bool check(node* root1,node* root2)
{
	if(root1==NULL and root2!=NULL) return false;
	if(root1==NULL and root2==NULL) return true;

	
	if(((root1->left!=NULL and root2->left!=NULL) or (root1->left==NULL and root2->left==NULL)) and ((root1->right!=NULL and root2->right!=NULL) or (root1->right==NULL and root2->right==NULL)))
	{
		bool left = check(root1->left,root2->left);
		bool right = check(root1->right,root2->right);
		return left and right;
	}
	return false;
}
void checkStructureAreSame()
{
    node* root1 = buildTree2("true");
    node* root2 = buildTree2("true");
    if(check(root1,root2)) cout << "true";
    else cout << "false";
    /*10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false*/ 
} 
node* buildBST(int *in,int s,int e)
{
	if(s>e) return NULL;

	int mid = (s+e)/2;

	node* root = new node(in[mid]);

	root->left = buildBST(in,s,mid-1);
	root->right= buildBST(in,mid+1,e);
	return root;
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
void inorderPrintInTheRange(node* root,int l,int r)
{
	if(root==NULL)
	{
		return;
	}
	inorderPrintInTheRange(root->left,l,r);
	if(root->data>=l and root->data<=r)
	cout << root->data << " ";
	inorderPrintInTheRange(root->right,l,r);
}
void buildBST_using_sorted_array()
{
	int n,i;

	cin >> n;

	int in[n];

	rep(i,n) cin >> in[i];
	

	node* root = buildBST(in,0,n-1);
	preorder(root);
	/*1
	  8
	  1 2 3 4 5 6 7 8
	*/
}
node* build_generic_tree()
{
	int data;
	int no_of_childs;
	cin >> data >> no_of_childs;

	node* root = new node(data);
	if(no_of_childs == 0) 
		{	
			root->right = root->left = NULL;
			return root;
		}
	if(no_of_childs == 1)
	{
		root->left = build_generic_tree();
		root->right = NULL;
		return root;
	}
	root->left = build_generic_tree();
	root->right = build_generic_tree();
	return root;

}
int sumAtLevelK(node* root,int k)
{
	if(root == NULL) return 999;
	if(k==0) return root->data;

	int leftAns = sumAtLevelK(root->left,k-1);
	int rightAns = sumAtLevelK(root->right,k-1);
	return leftAns+rightAns; 


}
void printAtLevelKInTheGenericTree()
{
	Dungeon_Master();
	node* root = build_generic_tree();
	int k;cin >> k;
	cout << sumAtLevelK(root,k);
	/*  
		1 2
		2 2
		3 0
		4 0
		5 2
		6 0
		7 0
		2
	*/
}
node* insertInBST(node* root,int item)
{
	//if there are no nodes 
	if(root == NULL)
		return new node(item);

	//rec case
	if(root->data>=item)
	{
		root->left = insertInBST(root->left,item);
	}
	else
	{
		root->right = insertInBST(root->right,item);
	}
	return root;
}
void insert_In_BST_and_Print_The_Nodes_Within_Range()
{
	int n,i; cin >> n;

	int item;
	cin >> item;
	node* root = new node(item);
	rep(i,n-1)
	{
		cin >> item;
		root = insertInBST(root,item);
	}int l,r;cin >> l >> r;
	cout << "# Preorder : ";
	preorder(root);
	cout <<endl;
		cout << "# Nodes within range are : ";
	inorderPrintInTheRange(root,l,r);
	cout << endl;
	/*
	1
	5
	4 3 2 5 6
	3 5
	2 3 4 5 6
	*/
}
node* buildTreeLevelByLevel()
{
	int d;
	cin >> d;
	node* root = new node(d);
	root->hd = 0;
	int c1,c2;
	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{
		node *temp = q.front();
		q.pop();
		cin >> c1 >> c2;
		if(c1!=-1)
		{
			node* left = new node(c1);
			left->hd = temp->hd-1;
			temp->left = left;

				q.push(temp->left);
		}
		if(c2!=-1)
		{	
			node* right = new node(c2);
			temp->right = right;
			right->hd = temp->hd+1;
			q.push(temp->right);
		}
	}
	return root;

}

void bottomView(node *root) 
{ 
    if (root == NULL) 
        return; 
  
    // Initialize a variable 'hd' with 0 
    // for the root element. 
    int hd = 0; 
  
    // TreeMap which stores key value pair 
    // sorted on key value 
    map<int, int> m; 
  
    // Queue to store tree nodes in level 
    // order traversal 
    queue<node *> q; 
  
    // Assign initialized horizontal distance 
    // value to root node and add it to the queue. 
    root->hd = hd; 
    q.push(root);  // In STL, push() is used enqueue an item 
  
    // Loop until the queue is empty (standard 
    // level order loop) 
    while (!q.empty()) 
    { 
        node *temp = q.front(); 
        q.pop();   // In STL, pop() is used dequeue an item 
  
        // Extract the horizontal distance value 
        // from the dequeued tree node. 
        hd = temp->hd; 
  
        // Put the dequeued tree node to TreeMap 
        // having key as horizontal distance. Every 
        // time we find a node having same horizontal 
        // distance we need to replace the data in 
        // the map. 
        m[hd] = temp->data; 
  
        // If the dequeued node has a left child, add 
        // it to the queue with a horizontal distance hd-1. 
        if (temp->left != NULL) 
        { 
            temp->left->hd = hd-1; 
            q.push(temp->left); 
        } 
  
        // If the dequeued node has a right child, add 
        // it to the queue with a horizontal distance 
        // hd+1. 
        if (temp->right != NULL) 
        { 
            temp->right->hd = hd+1; 
            q.push(temp->right); 
        } 
    } 
  
    // Traverse the map elements using the iterator. 
    for (auto i = m.begin(); i != m.end(); ++i) 
        cout << i->second << " "; 
} 
void solve()
{
	Dungeon_Master();
	node* root = buildTreeLevelByLevel();
	bottomView(root);
	 
}


/*intput.txt
output.txt*/
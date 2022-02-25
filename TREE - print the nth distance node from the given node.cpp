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

void printAtLevelK(node* root,int k)
{
	if(root==NULL)
		return;
	if(k==0)
	{
		 cout << root->data <<  " ";
		 return;
	}

	printAtLevelK(root->left,k-1);
	printAtLevelK(root->right,k-1);
}

int printAllKDistanceNodes(node* root,int item,int k)
{
	if(root==NULL) 
		return -1;

	if(root->data==item)
	{
		printAtLevelK(root,k);
		return 0;
	}

	int DL = printAllKDistanceNodes(root->left,item,k);

	if(DL!=-1)
	{
		if(DL+1 == k) cout << root->data << " ";

		else
			printAtLevelK(root->right,k-DL-2);

		return DL+1;
	}
	int DR = printAllKDistanceNodes(root->right,item,k);
	if(DR!=-1)
	{
		if(DR+1 == k) cout << root->data << " ";

		else
			printAtLevelK(root->left,k-DR-2);

		return DR+1;
	}

	return -1;
}
void solve ()
{
	Dungeon_Master();
    int n,i;
    cin >> n;

    int pre[n],in[n];

    rep(i,n) cin >> pre[i];

    rep(i,n) cin >> in[i];

    node* root = build_binary_tree(pre,in,0,n-1);

    int t;
    cin >> t;
    while(t--)
    {
    	int item,k;

    	cin >> item >> k;
    	printAllKDistanceNodes(root,item,k);
    	cout << endl;
    }

    //preorder(root);
}

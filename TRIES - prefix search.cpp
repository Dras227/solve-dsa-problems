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
class node
{
	public: char ch;
			unordered_map<char,node*> children;
			bool terminator;

			node(char d)
			{
				ch = d;
				terminator = false;
			}
};

class trie
{
	node* root ;

	public: trie()
			{
				root = new node('\0');
			}


			void insert(string s)
			{
				node* temp = root;

				for(int i=0;i<s.length();i++)
				{
					char ch = s[i];

					if(temp->children.count(ch))
					{
						temp=temp->children[ch];
					}
					else
					{
						node* neww = new node(ch);
						temp->children[ch] = neww;
						temp = neww;
					}
				}

				temp->terminator = true;
			}

			bool find(string s)
			{
				node* temp = root;

				for(int i=0;i<s.length();i++)
				{
					char ch = s[i];

					if(temp->children.count(ch))
					{
						temp = temp->children[ch];
					}
					else return false;
				}

				if(temp->terminator) return true;
				return false;
			}
			node* _wordUsingPrefix(string s)
			{
				node* temp = root;

				int i;for( i=0;i<s.length();i++)
				{
					char ch = s[i];
				
					if(temp->children.count(ch))
					{
						temp = temp->children[ch];
					}
					else
					{
						return NULL;
					}
				}
				return temp;
			}
			void printTheSuffix(node* temp,vector<string>&v,string s)
			{

				
					if(temp->terminator)
						v.push_back(s);
					
						for(auto i= temp->children.begin();i!=temp->children.end();i++)
						{
							s+=i->second->ch;
							printTheSuffix(i->second,v,s);
							s.pop_back();
							
					}
						
			}

};


void solve ()
{
	Dungeon_Master();//cout << "Hii,I am @iron_manu22" << endl;	

	trie t;
	int n,i;
	cin >> n;
	rep(i,n)
	{
		string s;
		cin >> s;

		t.insert(s);
	}

	int q;
	cin >> q;
	rep(i,q)
	{
		string s;

		cin >> s;
		node* temp = t._wordUsingPrefix(s);
		if(temp!=NULL)
		{
			vector<string> v;
			t.printTheSuffix(temp,v,s);
			sort(v.begin(),v.end());
			for(auto i:v) cout << i << endl;

		}
		else
		{
			t.insert(s);
			cout << "No suggestions" <<endl;
		}
	}



}






















































































/*intput.txt
output.txt*/
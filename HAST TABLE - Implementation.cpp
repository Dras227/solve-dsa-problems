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
//                        ENDS
//                        HERE
template<typename T>
class node 
{
	public: string key;
			T value;

			node<T> *next;

			node(string key,T val)
			{
				this->key = key;
				value = val;
				next = NULL;
			}
			~node()
			{
				if(next!=NULL)
				{
					delete next;
				}
			}
};

template<typename T>
class HashTable
{
	node<T>** table;
	int table_size;
	int current_size = 0;

	int hash(string key)
	{
		int idx = 0,p=1;


		for(int i=0;i<key.length();i++)
		{
			idx = idx + (key[i]*p)%table_size;

			idx = idx % table_size;

			p = (p*27)%table_size;
		}

		return idx;
	}
	void rehash()
	{
		node<T>** oldTable = table;

		int oldTablesize = table_size;

		table_size *=2;

		table = new node<T>* [table_size];

		for(int i=0;i<table_size;i++)
		{
			table[i] = NULL;
		}

		current_size = 0;

		for(int i=0;i<oldTablesize;i++)
		{
			node<T>* temp = oldTable[i];

			while(temp!=NULL)
			{
				insert(temp->key,temp->value);
				temp= temp->next;
			}

			if(oldTable[i]!=NULL)
				delete oldTable[i];// this is the chain deletion prevent memory leak
		}

		delete [] oldTable;

	}

	public:HashTable(int ts = 7)
		{
			table_size = ts;

			table = new node<T>*[table_size];

			current_size = 0;

			int i;
			rep(i,table_size)
			{
				table[i] = NULL;
			}
		}

		void insert(string key,T value)
		{
			int idx = hash(key);

			node<T>* temp = new node<T> (key,value);

			temp->next = table[idx];

			table[idx] = temp;

			current_size++;

			float load_factor = current_size/(1.0 * table_size);

			if(load_factor > 0.7) rehash();
		}

		void print()
		{
			for(int i=0;i<table_size;i++)
			{
				cout << "Bucket-"<<i <<"->"; 
				node<T>* temp = table[i];

				while(temp!=NULL)
				{
					cout << temp->key <<"->";
					temp= temp->next;
				}
				cout << endl;

			}
		}
		T* search(string key)
		{
			int idx = hash(key);
			node<T>* temp = table[idx];

				while(temp!=NULL)
				{
					if(temp->key == key)
					{
						return &temp->value;
					}
					temp= temp->next;
				}

			return NULL;
		}
		void remove(string key)
		{
			int idx = hash(key);

			node<T>* cur = table[idx];
			node<T>* prev = table[idx];

			if(cur->key == key) 
			{
				table[idx] = cur->next;
				cout << endl << cur->key << " is deleted\n";
				// if we dont make cur->next NULL it recursivley deletes the entire fucking bucket

				cur->next = NULL;
				delete cur;
				return;
			}

			while(cur!=NULL)
			{

				if(cur->key==key)
				{
					prev->next = cur->next;
					cout << endl << cur->key << " is deleted\n";
					cur->next = NULL;
					delete cur;
					return;
				}
				prev = cur;		
				cur = cur->next;
			}

			cout << "\nItem not found\n";
		}

		T& operator[](string key)
		{
			T *f = search(key);

			if(f==NULL)
			{
				//insert key in the table
				T garbage;
				insert(key,garbage);
				f = search(key);
			}
			return *f;
		}

		



};



void solve ()
{
	Dungeon_Master();

	HashTable <int> price_menu;

	price_menu.insert("burger",157);
	price_menu.insert("corn",9);
	price_menu.insert("honey",127);
	price_menu.insert("corn pizza",99);
	price_menu.insert("caramel custard",170);
	price_menu.insert("vk",197);
	price_menu.insert("cocaine",1597);

	price_menu.print();
	
	price_menu.remove("honey");
	//price_menu.remove("");
	price_menu["shreya"] = INT_MAX;
	price_menu.print();

	price_menu["Dosa"]+90;
	int *t= price_menu.search("cocaine");



	if(t) cout << *t;
}






















































































/*intput.txt
output.txt*/
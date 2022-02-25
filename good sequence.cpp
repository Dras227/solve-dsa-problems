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
class Pair
{
public:	int index;
	int item;
	int count_till;
	
};
void solve ()
{
	Dungeon_Master();
	int t;
	cin >> t;
	while(t--)
	{
		int n,q;

		cin >> n >> q;
		int i,a[n];
		repr(i,1,n) cin >> a[i];
		vector<Pair*>v;

		int count = 1;
		repr(i,1,n-1)
		{
			if(a[i]==a[i+1])
			{
				Pair* p;
				p->index = i;
				p->item = a[i];
				p->count_till = count;
			
				v.push_back(p);
				count = 0;
			}
			count++;
		}
	
		for(auto i:v)
		{
			cout << i->count_till << endl;
		}
		/*while(q--)
		{
			int x,y;
			cin >> x >> y;
			a[x] = y;
			int max_count = -1;
			int count = 1;
			int vec_indexing=0;
			for(auto i:v)
			{
				if(i->index == x)
				{
					int index = i->index;

					//check whether the adjacent numbers has been changed
					if(a[index]!=a[index+1] and a[index]!=a[index-1])
					{

						(i+1)->count_till=  (i+1)->index - (i-1)->index;
						cout << i->index << " is deleted" << endl;
						v.erase(v.begin()+vec_indexing);
						i++;
						count = i->count_till;
					}
				}

				max_count = max(max_count,count);
				vec_indexing++;
			}

			cout << max_count << endl;

		}*/

	}
}

/*intput.txt
output.txt*/
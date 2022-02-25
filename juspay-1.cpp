#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
int tree[1000] = {0},lock_user[1000] = {0};
bool lock_status[1000] = {false};
int n,m;
bool lock(int node_num,int uid)
{
	if(node_num >= n) return true;

	if(!lock_status[node_num])
	{
		


		bool flag = true; // assuming no child is locked priorly
		for(int i=1;i<m;i++)
		{
			if(m*node_num + i < n)
				flag = lock(m*node_num+i,uid);
			if(!flag)
				return false;
		}

		// all childs of this not locked are not locked and they are locked now with uid
		// so operation is success
		lock_status[node_num] = 1;
		lock_user[node_num] = uid;
		return true;
	}
	

	// only other case is that this node is locked by different user
	return false;

}


bool unlock(int node_num,int uid)
{
	// this can unlock only the called node
	// it cant touch its descendents or its parents
	// so just return true if it can be unlocked
	// it can be UNLOCKED only if the node is locked by the same user -> return TRUE
	// it cannot be UNLOCKED if the node is node locked in the first place -> return FALSE
	// if the uid of the locked node and the uid of unlocking user are different -> return FALSE
	if(lock_status[node_num])
	{
		if(lock_user[node_num] == uid)
		{
			lock_status[node_num] = false;
			lock_user[node_num] = 0;
			return true;
		}
		else 
			// node is locked with different uid
			return false;
	}

	// node is not locked
	return false;
	
}
//it helps for the user to upgrade their lock to an ancestor node
// and it can only be possible if all its descendents are locked by the same user
// it does not matter if a node is not locked
// but it does matter if a node is locked by different user
// also as inferred in the sample query case - 3 2 9 -> true and 2 5 9 -> false
// we draw that after upgrading the lock to ancestor all its child nodes are automatically unlocked
// so i need an helper_fuction to  -check whether they are locked by the same user
//								   -unlock all the child nodes of the upgrade
//and we cant unlock the child while we go because in the future nodes we encounter a node may 
//locked by different user. in that case the upgrade operation fails and no need to unlock the 
//child nodes anymore
bool check_unlock_for_upgradable(int node_num,int uid)
{
	// this is slighlty different from the unlock as
	//  it will return true even if the node is unlocked
	// it will return false only when a node is locked by a different user

	if(lock_status[node_num]==0) return true;
	if(lock_user[node_num]==uid) return true;
	return false;
}
bool check_upgradable(int node_num,int uid)
{
	if(node_num >= n) return true;

	if(check_unlock_for_upgradable(node_num,uid))
	{
		bool flag = true; // to ensure that all the childs of this nodes are locked by uid only
		for(int i=1;i<=m;i++)
		{
			check_upgradable(m*node_num + i, uid);
		}
		return true;
	}
	// this node is not upgradable sorry not sorry piss off
	return false;
}
void unlock_all_child_nodes(int node_num,int uid)
{
	if(node_num >= n) return;

	lock_status[node_num] = false;
	lock_user[node_num] = 0;

	// cout << node_num <<" " << lock_status[node_num] << endl;

	for(int i=1;i<=m;i++)
	{
		unlock_all_child_nodes(m*node_num+i,uid);
	}

	return;
}
bool upgrade(int node_num,int uid)
{
	if(check_upgradable(node_num,uid))
	{
		// since it is a good news for us that it is upgradable 
		// now we have to unlock all its child nodes before moving further
		for(int i=1;i<=m;i++)
		{
			unlock_all_child_nodes(m*node_num+i,uid);
		}
		lock(node_num,uid);
		return true;
	}
	return false;
}
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	cin >> n >> m;
	int q ;cin >> q;
	
	unordered_map<string,int> mp;
	for(int i=0;i<n;i++)
	{
		string t;
		cin >> t;
		mp.insert({t,i});
	}
	// cout << mp["World"] << endl;

	// for(auto i:mp)
	// {
	// 	cout << i.first << " " << i.second << endl;;
	// }

	// return;
	
	for(int i=0;i<q;i++)
	{
		//for each query 
		// query type
		string node;
		int q_type,  uid;


		cin >> q_type ;


		getline(cin,node);

		uid = node[node.length()-1] - '0' ;
		node =  node.substr(1, node.length()-3);
		// cout << q_type << "\n" << node << "\n" << uid << "\n"<<endl;;
		// cout << node << endl;
		
		
		switch(q_type)
		{
			case 1://lock the node with uid
					if(lock(mp[node],uid))
					{	
						cout << "true";
						// cout << mp[node] << " " << uid;
					}
					else cout << "false";
					break;
			case 2:// unlock the node with uid
					if(unlock(mp[node],uid))
						cout << "true";
					else cout << "false";
					break;
			case 3:// upgrade the node with uid
					if(upgrade(mp[node],uid))
						cout << "true";
					else cout << "false";
		}

		// 
		cout << endl;

		for(int i=0;i<n;i++)
		{
			// cout << lock_status[i] << " " << lock_user[i] << endl;
		}
	}
	
		
}

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

void find_pair(int *bag1,int *bag2,int n1,int n2,int x)
{
	int min_dif =100000;
	int value1=0,value2=0;
	for(int i=0;i<n1;i+=1)
	{	
		for(int j=0;j<n2;j+=1)
		{
			int current_dif = abs(x - (bag1[i]+bag2[j]));
			if(current_dif <= min_dif)
			{
				min_dif = current_dif;
				value1 = bag1[i];
				value2 = bag2[j];
			}
		}
	}
	cout << value1 <<" "<< value2;
}
void solve ()
{
	Dungeon_Master();
   	int n1,n2;
   	cin >> n1 >> n2;
   	int bag1[n1],bag2[n2];int i;
	for(int i=0;i<n1;i+=1) cin >> bag1[i];
	for(int i=0;i<n2;i+=1) cin >> bag2[i];
   	
   	int x;
   	cin >> x;
   
	find_pair(bag1,bag2,n1,n2,x);


}

/*intput.txt
output.txt*/
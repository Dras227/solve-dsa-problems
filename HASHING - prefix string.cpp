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
void solve ()
{
	Dungeon_Master();
	
	string s1,s2;

	getline(cin,s1);
	getline(cin,s2);

	int SL = s1.length();
	int PL = s2.length();
	//cout << s1 <<endl<< s2;
	
	//map the characters of pattern in a map
	int i;
	int s[256]={0},p[256]={0};
	rep(i,PL)
	{
		char ch = s2[i];
		p[ch]++;
	}
	int window = 100000;
	//for(auto i:p) cout << i << endl;
 	//track the count of matching characters
	int cnt =0;int start = 0; int start_idx = -1;
	for(int i=0;i<SL;i++)
	{
		char ch = s1[i];
	
		s[ch]++;
		// increase the count if characters are matching
		if(s[ch]!=0 and p[ch]>=s[ch]) 
			{
				//cout <<"hello!";
				cnt++;
			}

		//if all the charachter matched

		if(cnt == PL)
		{
			char temp = s1[start];

			while(p[temp]==0 or s[temp]>p[temp] )
			{
				s[temp]--;
				start++;
				temp = s1[start];
			}

			int window_len = i-start+1;

			if(window_len<window) 
			{
				window = window_len;
				start_idx = start;
			}
		}
	}

	if(start_idx!=-1)
	{
		string ans = s1.substr(start_idx,window);
		cout << ans;
	}
	else cout << "No String";



}






















































































/*intput.txt
output.txt*/
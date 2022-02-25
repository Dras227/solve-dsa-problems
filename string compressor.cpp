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
string sx[10] =  {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
bool check(string s3)
{
	//int last pos = 0;
	for(int i=0;i<10;i++)
	{
		if(s3==sx[i]) {
			//cout << "its a match"<< endl;
			return true;;}
	}
	cout << "its not a match" << endl;return false;
}

int compresss(string s,int n,int i)
{	int count=0;int last_pos=-1;
	for(int i=0;s[i]!='\0';i++)
	{
		char s1 = s[i];char s2 = s[i+1];
	    string s3 ={ s1,s2};
		if(check(s3) and last_pos!=i){

			cout << "its a match"<<endl;
			last_pos = i+1;
			count+=1;
		}
	}
	return n-count*2;
}

void solve ()
{
    string s;
    cin >> s;
    int n = s.length();
     cout <<compresss(s,n,0);
     
} 

/*intput.txt
output.txt*/
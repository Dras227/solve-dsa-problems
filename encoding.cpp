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
int ClosestEnemy(int a[],int n)
{
	int pos = -1;
	int last_pos_of_2 = 0;
	bool flag_1 = false,flag_2=false;
	int diff = 10000000;
	for(int i=0;i<n;i++)
	{	
		if(a[i]==2) 
		{
			last_pos_of_2 = i;
			flag_2 = true;
			if(flag_1) goto calc;
		}	
		if(a[i]==1)
		{
			 pos = i;
			 flag_1 = true;
			 if(flag_2) goto calc;
		}
		continue;
		calc:
		if(pos == -1)
		{
			cout << "0";
			return 0 ;
		}
		diff = min(abs(last_pos_of_2 - pos),diff);
	}
	return diff;
	
}
int RemoveBrackets(string str)
{
	int i=-1;
	int open_bracket = 0,close_bracket=0;
	while(str[++i]!='\0')
	{
		if(str[i]=='(') open_bracket++;
		if(str[i]==')') close_bracket++;
	}

	int total = open_bracket<=close_bracket?open_bracket:close_bracket;
	return total;
}

template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }
int PermutationStep(int num)
{	
	stringstream ss;
	ss << num;
	string hi = ss.str();
	next_permutation(hi.begin(),hi.end());
		
	int b = atoi(hi.c_str());
	return b;
}
void solve()
{
	int num;
	cin >> num;

	cout << PermutationStep(num);
}
/*void solve ()
{
	std::vector<int> v;

	int input;
	int n=0;
	while(cin >> input)
	{
		v.push_back(input);++n;
	}
	
	cout << diff;
} */

/*intput.txt
output.txt*/
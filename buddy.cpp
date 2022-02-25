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
#include<set>
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
int numDifferentIntegers(string word) {
        
        int count = 0;
        set<string> s1; 
        for(int i=0;i<word.length();i++)
        {
            //if(word[i] >='a' and word[i]<='z') continue;
            if(word[i] >='1' and word[i]<='9')
            {
                string s;
                
                while(word[i] >='0' and word[i]<='9' and word[i]!='\0')
                {
                    s+=word[i];         
                    i++;
                }
                if(s.length()==1 and s[0] == '0') s1.insert(s);
                if(s.length()!=1 and s[0] == '0')
                {
                	int j = 0;
                	while(s[j] == 0) j++;
                	s = s.substr(i,j);
                }
                cout << s << endl;
                s1.insert(s);
                i-=1;
            }
        }
            return s1.size();
    }
void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	string s,goal;

	cin >> s >> goal;

	cout  << numDifferentIntegers(s);
}
	
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
char pt[1000] ;std::vector<string> v;
void find(char *in,int i)
{
  if(in[i]=='\0')
  {
    if(strcmp(in,pt)==1) v.push_back(in);
    return;
  }
  for(int j=i;in[j]!='\0';j++)
  {
    swap(in[i],in[j]);
    find(in,i+1);
     swap(in[i],in[j]);
      }


  return;
}
void solve ()
{
    char in[1000];

    cin >> in ;
    //cout << in;
    strcpy(pt,in);
    //cout << pt;
    char out[1000];
    

    find(in,0);
    sort(v.begin(),v.end());
    for(auto i:v) cout << i << endl;
   // char t[] = {"cba"},f[]={"cab"};cout << strcmp(f,t);
} 

/*intput.txt
output.txt*/
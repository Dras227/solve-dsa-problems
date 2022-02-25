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
   cin.tie(NULL);int k=1;
    int t;cin >>t;while(t--){
        cout << "#"<<k++<<" : ";solve();}
    return 0;
}
int c;
void find_until(char *out,int i,int n)
{
  if(i==n)
  {
    out[i]='\0';
    //int k;rep(k,n) {if(out[k]=='0')cout << 'a';else if(out[k]=='1')cout << 'b';}
    c++;//cout <<out << endl;
    return;
  }

  if(out[i-1]=='0')
  {
    out[i] = '1';
    find_until(out,i+1,n);
    out[i] = '0';
    find_until(out,i+1,n);
  }
  if(out[i-1]=='1')
  {
    out[i] = '0';
    find_until(out,i+1,n);
  }

  
}
void solve ()
{
  c=0;
  int n;
  cin >> n;
  char out[1000];
  if(n==1) 
  {
    cout << '2'<< endl;
    return;
  }
  out[0] = '0';
  find_until(out,1,n);
  out[0] = '1';
  find_until(out,1,n); 
  cout << c << endl;//<<"\n\n\n\n\n\n\n\n";
} 

/*intput.txt
output.txt*/
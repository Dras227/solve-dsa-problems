#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i <n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
   /*IOS;
   cin.tie(NULL);*/
    //int t;cin >>t;while(t--)
        solve();
    return 0;
}
int flag = 0;
bool find(char in[1000][1000],int sol[10][10],int m,int n,int i,int j)
{                                                                         
  if(i==m and j == n)                                                                 
  {
      int k,l;
      if(in[m][n] == 'X') return false;

      sol[m][n] = 1;
      repr(k,0,m)
      {
        repr(l,0,n)
         cout << sol[k][l] << " ";

        if(m!=1) cout << endl;
      }
      //cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;
      flag = 1;
      exit(0);
      
  }

  if(i>m || j >n){

   return false;
}
  if(in[i][j]=='X'){

    return false;
}
  sol[i][j] = 1;

  bool right = find(in,sol,m,n,i,j+1);
  if(right ){

    return true;
}
  bool down = find(in,sol,m,n,i+1,j);if( down ){

    return true;
}

  sol[i][j] = 0;


  
  return false;
}
void solve ()
{
    char in[1000][1000];

    int i,j,n,m;

    cin >> m >> n;

    rep(i,m) rep(j,n) cin >> in[i][j];

    int sol[10][10] = {0};

    int k,l;
     // sol[m][n] = 1;
     /* rep(k,m)
      {
        rep(l,n)
         cout << in[k][l] << " ";

        cout << endl;
      }*/
    bool check= find(in,sol,m-1,n-1,0,0);if(!flag) cout << "-1"<< endl;
 } 

/*intput.txt
output.txt*/
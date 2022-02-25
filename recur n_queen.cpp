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
bool isSafe(int a[12][12],int n,int i,int j)
{
  
  if(a[i][j+1]== 1) return false;
  for(int x=0;x<=i;x++)
  {
     if(a[x][j] == 1 || a[i][x])
     {
      return false;
     }
  }


 int  x = i;
  int y = j;

  // check left diagonals
  while(x>=0 && y >=0)
  {
    if(a[x][y] == 1) return false;
    x--;y--;
  }

  //checking right diagonals
  x = i;
  y=j;
  while(x>=0 and y<n)
  {
    if(a[x][y] == 1) return false;
    x--; y+=1;
  }

  return true;
}
int c;
int n_queen(int a[12][12],int n,int i)
{
  if(i==n)
  {
    int l,k;

    /*rep(l,n)
    {
      rep(k,n)
      cout << a[l][k] << " ";
      cout << endl;
    }cout << endl << endl << endl << endl << endl << endl << endl;*/
    c++;
    return false;
  }
  

  //lets fill it with 1s
  int j;
rep(j,n){
  if(isSafe(a,n,i,j))
  {
    a[i][j] =1;
    bool bitch = n_queen(a,n,i+1);
    if(bitch) return true; a[i][j] =0;
  }
 
}

  
  return false;
}
void solve ()
{
  int n;
    cin >> n;
    int a[12][12] = {0};int i,j; 

//cout << c;
    n_queen(a,n,0); cout <<c;
} 

/*intput.txt
output.txt*/
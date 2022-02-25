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
bool shallWe(int board[][9],int n,int i,int j,int number)
{
    //we have to check along whether the number exists in column or row

      for(int x=0;x<n;x++)
      {
        if(board[x][j]==number || board[i][x] == number)
        {
          return false;
        }
      }

      //checking in the subgrid
      // for that we need to have positions of begining of the subgrid
      //that is given by the formula

      int rn = sqrt(n);

      int x = (i/rn)*rn; // formula to calculate row coordinate
      int y = (j/rn)*rn;// column coordinate

      for(int l = x;l<x+rn;++l)
      {
        for(int k=y;k<y+rn;++k)
        {
          if(board[l][k]==number) return false;
        }
      }

      return true;

}
bool sudoku_solver(int board[][9],int n,int i,int j)
{
  // when the the control coms out of the row thats when it completed 
 if(i==n)
    {
        for(int l=0;l<n;l++){
            for(int k=0;k<n;k++)
                cout << board[l][k] <<" ";

        cout << endl;
        }

        exit(0);
    }
 

    //when it completes the you got to move to the next row by incrementing i and starts from 0th column
  if(j==n)
  {
    return sudoku_solver(board,n,i+1,0);
  }



  //whem there is already a number is there no need to calculate a number to fill .so skip to next number
  if(board[i][j]!=0)
  {
   return sudoku_solver(board,n,i,j+1);
  }

  // have to iterate from 1 to 9 to get the correct number in the given pos
  //so..
  for(int number=1;number <=9;number++)
  {
    if(shallWe(board,n,i,j,number))
    {
      board[i][j] = number;
      bool canWePutNext = sudoku_solver(board,n,i,j+1);
      if(canWePutNext){
              
              return true;
                       
      }
     

    }
  }
  board[i][j] = 0; 
  return false; 

}
void solve ()
{
  int n;
  cin >> n;
    int in[9][9];

    int i,j;

    rep(i,9)
      rep(j,9) cin >> in[i][j];

    //  shallWe(in,0,0);

   
      sudoku_solver(in,9,0,0);
       rep(i,n){
      rep(j,n) cout <<  in[i][j] << " ";
      cout <<endl;
    }
      


  } 

/*intput.txt
output.txt*/
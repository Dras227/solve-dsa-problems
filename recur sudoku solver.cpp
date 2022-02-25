#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i) 
void solve();
void Dungeon_Master()
{
#ifndef Dungeon_Master
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void count_101()
{
    cout << "\n\n\n\n\n\n\nIts dras227 and its try no. ";
    ifstream in("count.txt");
    int n;
    in >> n;
    cout << n; // get int from the file
    ofstream myfile;
    myfile.open ("count.txt");
    n = n+1;
    myfile << n;
}
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
    Dungeon_Master();
    solve();
    count_101 ();
    return 0;
}
bool isSafe(int a[][9],int n,int i,int j,int num)
{
    //checking along the column for the existence of the number;

    for (int x = 0; x <n ; ++x)
    {
        if(a[x][j]==num)
            return false;
    }

    //chekcing along the row to ensure the existence of the number

    for(int y=0;y<n;y++)
    {
        if(a[i][y]==num)
            return false;
    }

    //checking in the current grid
    //to check in the current grid first we need the starting point of subgrid i.e is given by the formula

    int rn = sqrt(n);
    int row =(i/rn) *rn;
    int col=(j/rn)*rn;

    for (int x =row; x < row + sqrt(n); ++x)
    {
        for(int y = col;y< col + sqrt(n);++y)
        {
            if(a[x][y] == num)
            {
                return false;
            }
        }
    }

    return true;
}
bool sudoku_solver(int a[][9],int n,int i,int j){
    
    //base case 
    if(i==n)
    {
        for(int l=0;l<n;l++){
            for(int k=0;k<n;k++)
                cout << a[l][k] <<" ";

        cout << endl;
        }

        cout << endl <<endl << endl;
    }

    // if row ends
    if(j==n)
        return sudoku_solver(a,n,i+1,0);
    //skip if already contains a value
    if(a[i][j]!=0)
        return sudoku_solver(a,n,i,j+1);
    //recursive case
    for(int number=1;number<=n;number++)
    {
        if(isSafe(a,n,i,j,number))
        {
            a[i][j] = number;
//
            bool canweputagain = sudoku_solver(a,n,i,j+1); 
            if(canweputagain)
                return true;
            
        }    
    }
    //back track the wrong value to 0
    a[i][j] = 0;
    return false;
}
void solve ()
{
      int i,n,j;
    cin >> n;int a[9][9];
    rep(i,n)
      rep(j,n) cin >> a[i][j];
   // rep(i,n) rep(j,n) cin >> a[i][j];

    sudoku_solver(a,9,0,0);
} 

/*intput.txt
output.txt*/
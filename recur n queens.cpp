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
bool isSafe(int a[][4],int n,int x,int y)
{
    
    int i = x;
    int j = y;  
    //check the next square
    for(int row=0;row<i;row+=1)
    if(a[row][j] == 1)
        return false;

    //check the left diagonals

    while(j>=0 && i>=0)
    {
        if(a[i][j] == 1)
        {
            return false;
        }

        i--;
        j--;
    }

    //checking right diagonals
        i = x;
    j = y;  

    while(j<n && i>=0)
    {
        if(a[i][j] == 1)
        {
            return false;
        }

        i--;
        j++;
    }
   // cout << "hii" ;
    return true;


}

bool generate_board(int a[][4],int n,int x)
{
    if(x==n)
    {
        for (int l = 0; l < n; ++l)
        {
            for (int k = 0; k < n ; ++k)
            {
                if(a[l][k]) cout << "Q" <<" ";
                else cout << "_" << " ";
            }
            cout << endl;

        }
        cout << endl << endl;
        return false;
    }

    for(int j=0;j<n;j++){
        if(isSafe(a,n,x,j)){
             //cout << "hii" ;
            a[x][j] = 1;
            bool nextQueen = generate_board(a,n,x+1);
            if(nextQueen) return true;
            a[x][j]=0;
        }
        
    }
    return false;
}

void solve ()
{

      int i,n;
    int a[4][4] = {0};int j;
   // rep(i,10) rep(j,10)cout << a[i][j] << " ";
    generate_board(a,4,0);
} 

/*intput.txt
output.txt*/
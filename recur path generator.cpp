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


bool path_generator_op(int n,int m,char a[10][10],int out[10][10],int i,int j)
{
    
     if(i==m-1 && j==n-1)
    {
        int l,k;
       out[m-1][n-1 ] = 1;
        for (int l = 0; l <m; ++l)
        {
            for (int k = 0; k <n; ++k)
            {
                cout << out[l][k] <<" ";
            }
            cout << endl;

        }
        cout << endl << endl << endl << endl;
        return true;
    }




     if(a[i][j]=='x'){
        return false;
    }
    if(i>m or j>n){
        return false;
    }
    
	
   
    
   

     //assume soln exists

	out[i][j] = 1;


	bool right_path = path_generator_op(n,m,a,out,i+1,j);
	bool left_path = path_generator_op(n,m,a,out,i,j+1);

    //backtracking
    out[i][j] =0;

    if(right_path||left_path){
        return true;
    } 
        
    return false;
 }
void solve ()
{
    int i,j; int n=1000,m=1000;
    char a[10][10] ={
        "0000",
        "00x0",
        "000x",
        "0x00"
    };




 int out[10][10] = {0};
   path_generator_op(4,4,a,out,0,0);
} 

/*intput.txt
output.txt*/

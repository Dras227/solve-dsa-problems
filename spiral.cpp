#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
void solve();

void dras227()
{
#ifndef dras2272000
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

int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    int m,n;

    cin >> m >> n;

    int a[m][n];
    int val = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            val = val+1;
            a[i][j] = val;
        }
    }

    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j)
            cout << a[i][j] <<" ";
    cout << endl;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << endl;
    }
     int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    //printting Starting Row
    while(startRow <= endRow and startCol <= endCol){

        // Printing First Row

        for (int i = startCol; i <=endCol ; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;

        //printing Right most column

        for (int i = startRow; i <= endRow ; i++)
        {
            cout << a[i][endCol] << " ";
        }

        endCol--;
        // Printing Bottom Row
        if( endRow>startRow ){
        for (int i = endCol; i >=startCol ; i--)
        {
            cout << a[endRow][i]<< " ";
        }
        endRow-- ;
        }
    

    // Printing Starting Column
        if(endCol>startCol)
        {
            for(int i = endRow;i >= startRow; i--)
            {
                cout << a[i][startCol]<< " ";
            }
            startCol++;
        }

    }
}



/*intput.txt
output.txt*/
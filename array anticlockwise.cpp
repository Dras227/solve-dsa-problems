#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
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

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    // "printing "<<i<<
    int start_row = 1,end_row = m,start_col = 1,end_col = n;
    printf("hiiiii\n");
    while(start_row<=end_row and start_col <=end_col)
    {  
        for(int i = start_row ;i<end_col;i+=1)
        {
          cout << "\nprinting "<<start_row<<" "<<i<<" "<<a[start_row][i] << ", ";
        }
       cout << "\nEnding of upper row"<<endl;
        start_row+=1;end_col-=1;
        for(int i =start_row;i<end_row;i+=1)
        {
            cout << "\nprinting "<<i<<" "<<end_col<<" "<< a[i][end_col] << ", ";
        }
        cout << "\nEnding of left column "<<endl;
        end_col--;
        for(int i=end_col;i>=start_col;i--)
        {
            cout<< "\nprinting "<<end_row<<" "<<i<<" "<<a[end_row][i] <<", ";
            
        }
        cout << "\nEnding of bottom row"<<endl;
        end_row--;
        for(int i=end_row;i>=start_row;i--)
        {
            cout<< "\nprinting "<<i<<" "<<start_col<<" "<< a[i][start_col] <<", ";
            
        }
        cout << "\nEnding of right column"<<endl;
        cout<<"\n\n\n\n\nprinting a[1][0]"<<a[0][4];
        start_col++;
    }
}

/*intput.txt
output.txt*/
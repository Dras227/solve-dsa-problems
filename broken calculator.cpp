#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
#define max 500
void solve();
int multiply(int res_size,int res[],int item);
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
//                      TEMPLATE 
//                        ENDS
//                        HERE 
//                     MA BITCHES   
int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    int n;
    cin >> n;
    n=n+1;
    int res[max];

    res[0] =1;
    int res_size = 1;


    for(int i=2;i<n;i+=1)
    {
        res_size = multiply(res_size,res,i);
    }


    for (int i = res_size-1; i >= 0; --i)
    {
        cout << res[i];
    }


}

int multiply(int res_size,int res[],int item)
{
    int carry = 0;
    int i=0;
    for (i = 0; i <res_size; ++i)
    {
        int prod = (item * res[i])+carry;

        res[i] = prod%10;

        carry = prod /10;
    }

    while(carry) 
    {
        res[res_size] = carry%10;
        carry/=10;
        res_size++;
    }

    return res_size;


}

/*intput.txt
output.txt*/
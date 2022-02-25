#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
int max(int a, int b) { return (a > b) ? a : b; }
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
void printknapSack(int W, int wt[], int val[], int n ) // void printknapSack(int W, int wt[], int val[], int n, int pr[])
{

    int i, w;
    
    // int maxi=-1;

    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {

        for (w = 0; w <= W; w++) {

            if (i == 0 || w == 0)

                K[i][w] = 0;

            else if (wt[i - 1] <= w)

                K[i][w] = max(val[i - 1] +

                    K[i - 1][w - wt[i - 1]], K[i - 1][w]);

            else

                K[i][w] = K[i - 1][w];

        }

    }
 
    int res = K[n][W];

    cout<< "Maximum Revenue $"<<res << endl;

     

    w = W;

    for (i = n; i > 0 && res > 0; i--) {

        cout << K[i-1][w] << " ";
        if (res == K[i - 1][w])

            continue;    

        else {
            
/*    
            pr[i]=1;
            if(maxi==-1)
            {
                maxi=i;
            }    
            if(i>=maxi)
            {
                pr[i]=2;
                maxi=i;
            }    
*/

            res = res - val[i - 1];

            w = w - wt[i - 1];

        }

    }
}

int main()
{
    Dungeon_Master();

    int val[] = { 10, 40, 30, 50 };

    int wt[] = { 5, 4, 6, 3 };

    int W = 10;
    
    int n = sizeof(val) / sizeof(val[0]);
    
/*    
    int pr[1000];
    for(i=0;i<1000;i++)
    {
        pr[i]=0;
    }
*/    

    printknapSack(W, wt, val, n); // printknapSack(W, wt, val, n, pr);

/*    
    for(i=0;i<1000;i++)
    {
        if(pr[i]==1)
        {
            cout<<"Product"<<i<<", ";
        }
    }
    for(i=0;i<1000;i++)
    {
        if(pr[i]==2)
        {
            cout<<"Product"<<i<<" can be transported."<<endl;
        }
    }
*/
    return 0;
}
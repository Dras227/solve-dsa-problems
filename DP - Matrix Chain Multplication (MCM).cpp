#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE
int matrixChainBU(int matrix[],int n)
{
	int dp[100][100];
	int i;
	// cost of multiplying matrix itself is zero
	// the index along the diagonals indicates the matrix multiplying itself
	repr(i,1,n) dp[i][i] = 0;
	
	for(int L = 2;L<n;L++)
	{
		for(int i=1;i<=n-L;i++)
		{
			int j = i + (L-1);

			dp[i][j] = {INT_MAX};
			for(int k=i;k<j;k++)
			{	
				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+matrix[i-1]*matrix[k]*matrix[j]);
			}
		}
	}
	int j;	
	rep(i,n)
	{
		rep(j,n)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	//return dp[i][j];

    return dp[1][n-1];
	}
int matrixChain(int matrix[],int i,int j)
{
	// if there is only one matrix there cost of multiplying itself is 0
	// so when there is only one matrix i becomes equal to j
	if(i==j) return 0;

	// other cases

	int ans = 10000;
	for(int k=i;k<j;k++)
	{
		int cur_ans = matrixChain(matrix,i,k) + matrixChain(matrix,k+1,j) + matrix[i-1]*matrix[k]*matrix[j];
		ans = min(cur_ans,ans);
	}
	return ans;
}  
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int matrix[] = {1,2,3,4};

	int n = sizeof(matrix)/sizeof(int);
	cout << matrixChain(matrix,1,n-1 ) << endl << matrixChainBU(matrix,n);


}






















































































/*intput.txt
output.txt*/
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
#define bool int
#define R 6
#define C 5
void printMaxSubSquare(bool M[R][C]);
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";
	 = {{0, 1, 1, 0, 1},
					{1, 1, 0, 1, 0},
					{0, 1, 1, 1, 0},
					{1, 1, 1, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 0}};
					
	printMaxSubSquare(M);
}
// C++ code for Maximum size square
// sub-matrix with all 1s



void printMaxSubSquare(bool M[R][C])
{
	int i,j;
	int S[R][C];
	int max_of_s, max_i, max_j;
	
	/* Set first column of S[][]*/
	for(i = 0; i < R; i++)
		S[i][0] = M[i][0];
	
	/* Set first row of S[][]*/
	for(j = 0; j < C; j++)
		S[0][j] = M[0][j];
		
	/* Construct other entries of S[][]*/
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			if(M[i][j] == 1)
				S[i][j] = min(S[i][j-1],min( S[i-1][j],
								S[i-1][j-1])) + 1;
			else
				S[i][j] = 0;
		}
	}
	
	/* Find the maximum entry, and indexes of maximum entry
		in S[][] */
	max_of_s = S[0][0]; max_i = 0; max_j = 0;
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}			
	}

	cout<<"Maximum size sub-matrix is: \n";
	for(i = max_i; i > max_i - max_of_s; i--)
	{
		for(j = max_j; j > max_j - max_of_s; j--)
		{
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}
}


/* Driver code */


// This is code is contributed by rathbhupendra

int largestArea(vector<vector<int>> samples)
{
    int R = samples.size();
    int C = samples[0].size();
	int i,j;
	int S[R][C];
	int max_of_s, max_i, max_j;
	

	for(i = 0; i < R; i++)
		S[i][0] = samples[i][0];
	

	for(j = 0; j < C; j++)
		S[0][j] = samples[0][j];
		
	
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			if(samples[i][j] == 1)
				S[i][j] = min(S[i][j-1],min( S[i-1][j],
								S[i-1][j-1])) + 1;
			else
				S[i][j] = 0;
		}
	}
	
	
	max_of_s = S[0][0]; max_i = 0; max_j = 0;
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}			
	}

    return max_i+1;
}
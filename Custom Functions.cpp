void printDP(int s,int e)
{
	repr(i,s,e)
	{
		repr(j,s,e)
			cout << dp[i][j] << " ";
		cout << endl;
	}
}
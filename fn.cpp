vector<long long> geekAnd(int n, vector<int> &a, int qn, vector<vector<int>> &q)
	{
		// Your code goes here
		vector<long long> ans;
		for(int i=0;i<qn;i++)
		{
		    int fust = a[q[i][0]];
   	    	int sec = a[q[i][1]];int c = fust&sec;
   		    //cout << a[i] << " " << fust <<" "<< sec <<" "<<c<<" ";
   		  
   		if(c==0) ans.push_back(1); 
   		else ans.push_back(0); 
		}
		return ans;
	}

/* for the input:
7
1 2 4 24 13 48 139
7
5 2
3 4
5 6
1 2
4 4
4 1
2 3

other editors output:
1 0 1 1 0 1 1 
gfg output:
-4294967259 0 1 2 0 -4294967268 2 
*/
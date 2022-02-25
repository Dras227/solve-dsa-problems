// C++ program for the above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to calculate x raised 
// to the power y in O(logn) 
int power(int x, unsigned int y) 
{ 
	int temp; 
	if (y == 0) 
		return 1; 
	temp = power(x, y / 2); 
	if (y % 2 == 0) 
		return temp * temp; 
	else
		return x * temp * temp; 
} 

// Function to find the Kth 
// root of the number N using BS 
int nthRootSearch(int low, int high, 
				int N, int K) 
{ 

	// If the range is still valid 
	if (low <= high) { 

		// Find the mid-value of range 
		int mid = (low + high) / 2; 

		// Base Case 
		if ((power(mid, K) <= N) 
			&& (power(mid + 1, K) > N)) { 
			return mid; 
		} 

		// Condition to check if the 
		// left search space is useless 
		else if (power(mid, K) < N) { 
			return nthRootSearch(mid + 1, 
								high, N, K); 
		} 
		else { 
			return nthRootSearch(low, 
								mid - 1, 
								N, K); 
		} 
	} 
	return low; 
} 

// Driver Code 
int main() 
{ 

	// Given N and K 
	int N = 1000, K = 1; 

	// Function Call 
	cout << nthRootSearch(0, N, N, K) 
		<< endl; 
	return 0; 
} 

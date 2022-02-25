// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
// Function to find length of the
// longest substring with each element
// occurring even number of times
int lenOfLongestReqSubstr(string s, int N)
{
    // Initialize unordered_map
    unordered_map<int, int> ind;
 
    int mask = 0;
    
 
    // Stores the length of the
    // longest required substring
    int ans = 0;
    
    
    // Traverse the string
    for (int i = 0; i < N; i++) {
 
        // Stores the value of the
        // digit present at current index
        int val = s[i] - '0';
        
        // Bitwise XOR of the mask with
        // 1 left-shifted by val
        // why we are doing this man????
        mask ^= (val<<1);


        
        // Check if the value of mask is
        // already present in ind or not
        if (ind.find(mask) != ind.end()) {
 
            // Update the final answer

            cout << "match found form " << s[i] <<" which is " << i-ind[mask]  << endl;
            bitset<16> bs2(mask);
            cout << "match found for " <<s[i] << " now ind[" <<bs2<< "] = " << i <<endl;; 

            ans = max(ans, i - ind[mask]);
        }
 
        // Otherwise
        else
        {
            bitset<16> bs2(mask);
            cout << "match not found for " <<s[i] << " now ind[" <<bs2<< "] = " << i <<endl;; 
            ind[mask] = i;
        }

    
    }
 
    // Return the answer
    return ans;
}
 
// Driver Code
int main()
{
    // Given string
    Dungeon_Master();
    string s = "55656788";
 
    // Length of the given string
    int N = s.length();
 
    // Function Call
    cout << lenOfLongestReqSubstr(s, N);
 
    return 0;
}
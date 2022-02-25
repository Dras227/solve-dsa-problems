class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0)
            return 0;
        else if(n==1)
            return nums[n-1];
        else if(n==2)
            return max(nums[n-1],nums[n-2]);

        vector<int> sp(n-1);
        vector<int> dp(n-1);

        sp[0] = nums[0];
        sp[1] = max(nums[0],nums[1]);

        dp[0] = nums[1];
        dp[1] = max(nums[1],nums[2]);


        for(int i=2;i<n-1;i++)
        {
            sp[i] = max(sp[i-2]+nums[i],sp[i-1]);
            dp[i] = max(dp[i-2]+nums[i+1],dp[i-1]);
        }

        return max(dp[n-1],sp[n-1]);
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int flag=0;
        int dp[n];
        memset(dp,-1,sizeof(dp));
        dp[0]=nums[0];
        int ans=dp[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=max(nums[i],dp[i-1]+nums[i]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
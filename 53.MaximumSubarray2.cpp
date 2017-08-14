/*
53.Maximum Subarray
use DP
2017/8/14
*/

class Solution {
public:
    /*
	  recursive relation is:
	  maxSubArray(nums,i)=nums[i]+(maxSubArray(nums,i-1)>0?maxSubArray(nums,i-1):0)
	  In this way,we can easily find the subarray by fingding the largest dp[i] 
	  and tracing back to dp[j] which is less than 0 or j=0.
	*/
    int maxSubArray(vector<int>& nums) {
		int len = nums.size();
        int *dp = new int[len];
		dp[0] = nums[0];
        int ans = dp[0];
        for(int i = 0;i < len;i++){
			dp[i] = max(dp[i-1],0) + nums[i];
			ans = max(ans,dp[i]);
		}
        return ans;		
    }
};
/*
53.Maximum Subarray
Time complexity:O(n)
2017/8/14
*/

class Solution {
public:
    /*
	  Keep adding each element to ans 
	  until sum drops below 0.
	*/
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0],sum = 0;
		for(int i = 0;i < nums.size();i++){
			sum += nums[i];
			ans = max(ans,sum);
			sum = max(sum,0);
		}
		return ans;
    }
};


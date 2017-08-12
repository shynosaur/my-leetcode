/*
35.Search Insert Position
2017/8/12
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)	{
		int len = nums.size();
		for(int i = 0;i < len;i++){
			if(nums[i] >= target)
				return i;
		}
		return len;
    }
};
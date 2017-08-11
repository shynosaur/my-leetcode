/*
26.Remove Duplicates from Sorted Array
2017/8/11
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
		if(len < 2)
			return len;
		int i = 0;
		for(int j = 1;j < len;j++){
			if(nums[j] != nums[i]){
				nums[++i] = nums[j];
			}
		}
		return i + 1;
    }
};
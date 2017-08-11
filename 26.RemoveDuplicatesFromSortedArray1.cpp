/*
26.Remove Duplicates from Sorted Array
2017/8/11
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
		int i = 0;
		while(i < len){
			int first = nums[i];                    // first appearance
			int j = i + 1;
			while(j < len){
				if(nums[j] == first){
					len--;
					nums.erase(nums.begin() + j);
				}
				else
					break;
			}
			i = j;
		}
		return len;
    }
};
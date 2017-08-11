/*
27.Remove Element
more faster
2017/8/11
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
		if(len == 0)
			return 0;
		int tail = 0;
		for(int i = 0;i < len && i != len - tail;){
			if(nums[i] == val){                          
				tail = tail + 1;
				nums[i] =  nums[len - tail];               // remove the last element to pos i
			}
			else{
				i++;
			}
		}
		return len - tail;
    }
};
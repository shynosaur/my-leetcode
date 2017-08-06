/*
1.Two Sum
Brute Force
Time Complexity:O(n^2)
Space Complexity:O(1)
2017/8/4
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> ans;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};

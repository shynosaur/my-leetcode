/*
88.Merge Sorted Array
2017/8/15
*/

class Solution {
public:
    /*
	  from backward to forward
	  if nums2 has been placed correctly,
	  the rest elements of nums1 do not have to move.
	*/
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1,j = n - 1;
        int len = m + n - 1;
        while(j >= 0){
            nums1[len--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
    }
};

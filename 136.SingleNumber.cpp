/*
136.Single Number
2017/8/27
*/

/*
  method 1:merge sort 22ms
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        mergeSort(nums,0,n-1);
        for(int i = 0;i < n;){
            if(nums[i] != nums[i+1])
                return nums[i];
            else
                i+=2;
        }
    }
    
    void merge(vector<int>&nums,int l,int mid,int r){
        int len = r - l + 1;
        int *tmp = new int[len];
        int i = l,j = mid + 1,index = 0;
        while(i <= mid && j <= r){
            tmp[index++] = nums[i] <= nums[j] ? nums[i++] : nums[j++];
        }
        while(i <= mid)
            tmp[index++] = nums[i++];
        while(j <= r)
            tmp[index++] = nums[j++];
        for(int k = 0;k < len;)
            nums[l++] = tmp[k++];
    }
    void mergeSort(vector<int>& nums,int l,int r){
        if(l == r)
            return;
        int mid = (l + r) / 2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        merge(nums,l,mid,r);
    }
};

/*
  method 2:^= 13ms
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
		/*
		for(int &i : nums)
			res ^= i;
		*/
    }
};


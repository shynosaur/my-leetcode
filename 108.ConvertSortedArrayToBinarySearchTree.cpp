/*
108.Convert Sorted Array to Binary Search Tree
2017/8/19
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //if(nums.size() == 0)
           // return NULL;
        return ToBST(nums,0,nums.size() - 1);
    }
private:
    TreeNode* ToBST(vector<int>& nums,int l,int r){
        if(l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode* left = ToBST(nums,l,mid - 1);
        TreeNode* right = ToBST(nums,mid + 1,r);
        TreeNode* root = new TreeNode(nums[mid]);
        root -> left = left;
        root -> right = right;
        return root;
    }
    /*TreeNode* ToBST(vector<int>& nums,int l,int r){
        if(l > r)
            return NULL;
        int mid = (l + r) / 2;
		TreeNode* root = new TreeNode(nums[mid]);
        root -> left = ToBST(nums,l,mid - 1);
        root -> right = ToBST(nums,mid + 1,r);
        return root;
    }*/
};
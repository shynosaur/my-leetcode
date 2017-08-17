/*
101.Symmetric Tree
recursively 6ms
2017/8/17
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
    bool compare(TreeNode* rone,TreeNode* rtwo){
        if(rone == NULL && rtwo == NULL)
            return true;
        if(rone == NULL || rtwo == NULL)
            return false;
        if(rone -> val != rtwo -> val)
            return false;
        return compare(rone -> left,rtwo -> right) && compare(rone -> right,rtwo -> left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return compare(root -> left,root -> right);
    }
};
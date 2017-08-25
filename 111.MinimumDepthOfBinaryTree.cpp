/*
111.Minimum Depth of Binary Tree
2017/8/21
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
    int minDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = 0;
        while(!q.empty()){
            res++;
            for(int i = 0,n = q.size();i < n;i ++){
                TreeNode* node = q.front();
                q.pop();
                if(node -> left != nullptr && node -> right != nullptr){
                    q.push(node -> left);
                    q.push(node -> right);
                }
                else if(node -> left == nullptr && node -> right == nullptr){
                    return res;
                }
                else{
                    if(node -> left != nullptr)
                        q.push(node -> left);
                    else
                        q.push(node -> right);
                }
            }
        }
    }
};
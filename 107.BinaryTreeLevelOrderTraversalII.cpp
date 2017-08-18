/*
107.Binary Tree Level Order Traversal II
2017/8/18
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            vector<int> line;
            for(int i = 0,n = que.size();i < n;i++){
                TreeNode* node = que.front();
                line.push_back(node -> val);
                que.pop();
                if(node -> left != NULL)
                    que.push(node -> left);
                if(node -> right != NULL)
                    que.push(node -> right);
            }
            ans.push_back(line);
        }
        return vector<vector<int>>(ans.rbegin(),ans.rend());
    }
};
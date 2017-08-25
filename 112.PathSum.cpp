/*
112.Path Sum
2017/8/25
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
 
 /*
   method 1:use queue,and store the sum in the value of the node from root to leaf
   disadvantage:change the value of the node
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i = 0,n = q.size();i < n;i++){
                TreeNode *node = q.front();
                q.pop();
                if(node -> left == nullptr && node -> right == nullptr){
                    if(node -> val == sum)
                        return true;
                }
                else if(node -> left != nullptr && node -> right != nullptr){
                    node -> left -> val += node -> val;
                    q.push(node -> left);
                    node -> right -> val += node -> val;
                    q.push(node -> right);
                }
                else if(node -> left != nullptr){
                    node -> left -> val += node -> val;
                    q.push(node -> left);
                }
                else{
                    node -> right -> val += node -> val;
                    q.push(node -> right);
                }
            }
        }
        return false;
    }
};

/*
  method 2:DFS
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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) return false;
        sum -= root->val;
        if (root->left != nullptr && hasPathSum(root->left, sum))
            return true;
        if (root->right != nullptr && hasPathSum(root->right, sum))
            return true;
        if (root->right == root->left && sum == 0) return true;
        return false;
    }
};
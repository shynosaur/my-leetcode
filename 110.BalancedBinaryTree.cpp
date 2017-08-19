/*
110.Balanced Binary Tree
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
/*
  method1:calculate the height of each node,and then compare,9ms
  disadvantage:change the value of each node
*/
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        calculate(root);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i = 0,n = q.size();i < n;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node -> left != nullptr && node -> right != nullptr){
                    if(abs(node -> left -> val - node -> right -> val) > 1)
                        return false;
                    q.push(node -> left);
                    q.push(node -> right);
                }
                else if(node -> left != nullptr && node -> right == nullptr){
                    if(node -> left -> val > 1)
                        return false;
                }
                else if(node -> left == nullptr && node -> right != nullptr){
                    if(node -> right -> val > 1)
                        return false;
                }
            }
        }
        return true;
    }
private:
    int calculate(TreeNode* root){
        if(root == nullptr)
            return 0;
        root -> val = 1 + max(calculate(root -> left),calculate(root ->right));
        return root -> val;
    }
};

/*
  method2:compare two nodes when reach them,no need to truly calculate each height,6ms
*/
class Solution{
public:
    bool isBalanced(TreeNode* root){
		return (calculate(root) != -1);
	}
private:
	int calculate(TreeNode* node){
		if(node == nullptr)
			return 0;
		int l = calculate(node -> left);
		if(l == -1)
			return -1;
		int r = calculate(node -> right);
		if(r == -1)
			return -1;
		if(abs(l - r) > 1) return -1;
		return 1 + max(l,r);
	}
};
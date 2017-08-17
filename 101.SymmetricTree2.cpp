/*
101.Symmetric Tree
stack 3ms
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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        stack<TreeNode*> mystack;
		mystack.push(root -> left);
		mystack.push(root -> right);
		while(!mystack.empty()){
			TreeNode* p = mystack.top();
			mystack.pop();
			TreeNode* q = mystack.top();
			mystack.pop();
			if(!p && !q)
				continue;
			if(!p || !q)
				return false;
			if(p -> val != q -> val)
				return false;
			mystack.push(p -> left);
			mystack.push(q -> right);
			mystack.push(p -> right);
			mystack.push(q -> left);
		}
		return true;
    }
};
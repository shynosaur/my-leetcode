/*
104.Maximum Depth of Binary Tree
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
    // method 1:DFS
    int maxDepth(TreeNode* root) {
        if(root == NULL)
			return 0;
		return 1 + max(maxDepth(root -> left),maxDepth(root -> right));
    }
	
	// method 2:BFS
	int maxDepth(TreeNode* root){
		if(root == NULL)
			return 0;
		queue<TreeNode*> que;
		que.push(root);
		int ans = 0;
		while(!que.empty()){
			++ans;
			for(int i = 0,n = que.size();i < n;i++){
				TreeNode* node = que.front();
				que.pop();
				if(node -> left != NULL)
					que.push(node -> left);
				if(node -> right != NULL)
					que.push(node -> right);
			}
		}
		return ans;
	}
};
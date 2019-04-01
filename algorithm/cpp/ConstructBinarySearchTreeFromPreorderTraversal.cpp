// Source : https://leetcode-cn.com/problems/construct-binary-search-tree-from-preorder-traversal/
// Author : xiaomaofeng
// Date   : 2019-4-2

/**********************************************************************************
*
*Returns the root node of the binary search tree that matches the given preorder traversal preorder.
*(Recall that the binary search tree is a type of binary tree, each of which satisfies the following rules.
*For any descendants of node.left, the value is always <node.val, 
*and any descendants of node.right, total value> node In addition,
*the preorder traversal first displays the value of the node, then iterates through node.left and then traverses node.right.)
*
**********************************************************************************/

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
	TreeNode* bstFromPreorder(vector<int>& preorder) {
		if (preorder.size() == 0)
			return NULL;
		TreeNode* rt = new TreeNode(preorder[0]);
		vector<int>::iterator it;
		it = lower_bound(preorder.begin() + 1, preorder.end(), preorder[0]);
		vector<int>v1(preorder.begin() + 1, it);
		vector<int>v2(it, preorder.end());
		rt->left = bstFromPreorder(v1);
		rt->right = bstFromPreorder(v2);
		return rt;

	}
};
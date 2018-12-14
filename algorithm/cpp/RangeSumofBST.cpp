/*
938    :Range Sum of BST
Source :https://leetcode-cn.com/problems/range-sum-of-bst/comments/
Author :xiaomaofeng
Date   :2018-12-14

Problem Description:
Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.

Example 1:

Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32
Example 2:

Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23
*/

struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:


	int rangeSumBST(TreeNode* root, int L, int R) {
		int sum = 0;
		if (root == NULL)
		{
			return 0;
		}
		if (root->val >= L && root->val <= R)
		{
			sum = root->val;
		}
		return sum + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
	}
};
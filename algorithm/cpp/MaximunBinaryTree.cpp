/*
654   :Maximun Binary Tree
Source:https://leetcode-cn.com/problems/maximum-binary-tree/
Author:xiaomaofeng
Date  :2018-12-14

Problem Description:
Given an integer array with no duplicates. A maximum tree building on this array is defined as follow:

The root is the maximum number in the array.
The left subtree is the maximum tree constructed from left part subarray divided by the maximum number.
The right subtree is the maximum tree constructed from right part subarray divided by the maximum number.
Construct the maximum tree by the given array and output the root node of this tree.

Example 1:
Input: [3,2,1,6,0,5]
Output: return the tree root node representing the following tree:

  6
 /  \
3    5
 \   /
  2 0
   \
    1
*/




 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	TreeNode * constructMaximumBinaryTree(vector<int>& nums) {
		if (nums.size() == 0)
		{
			return NULL;
		}
		//TreeNode* root = new TreeNode(nums[0]);
		int maxIndex = 0;
		vector<int>leftNums;
		vector<int>rightNums;
		int val = nums[0];

		for (int i = 1; i<nums.size(); i++)
		{
			if (val<nums[i])
			{
				val = nums[i];
				maxIndex = i;
			}
		}
		TreeNode* root = new TreeNode(nums[maxIndex]);

		for (int j = 0; j<maxIndex; j++)
		{
			leftNums.push_back(nums[j]);

		}

		for (int k = maxIndex + 1; k<nums.size(); k++)
		{
			rightNums.push_back(nums[k]);
		}

		root->left = constructMaximumBinaryTree(leftNums);
		root->right = constructMaximumBinaryTree(rightNums);

		return root;

	}
};
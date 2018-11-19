//question number:107

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
    int maxDepth(TreeNode* root) 
    {
        if (root == NULL)
        return 0; 
        int LeftDepth  = maxDepth(root->left); 
        int RightDepth = maxDepth(root->right); 
        int ret = (LeftDepth>RightDepth?LeftDepth:RightDepth)+1;
            return ret;
    }
};
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x), left(NULL), right(NULL){}
};
class Solution
{
public:
	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> v;
		vector<TreeNode*>stack;
		if (!root)
		{
			stack.push_back(root);
		}
		while (stack.size() > 0)
		{
			TreeNode* n = stack.back();
			v.push_back(n->val);
			stack.pop_back();
			if (n->right)
			{
				stack.push_back(n->right);
			}
			if (n->left)
			{
				stack.push_back(n->left);
			}
		}
		return v;
	}
};
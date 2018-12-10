#include "stdafx.h"
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x)
		:val(x), left(NULL), right(NULL)
	{

	}
};

bool isSameTree(TreeNode* p, TreeNode* q)
{
	if (!p && !q)
		return true;
	if (p == nullptr || q == nullptr)
		return false;
	queue<TreeNode*>q1, q2;
	q1.push(p);
	q2.push(q);
	while (q1.size() > 0 && q2.size() > 0)
	{
		TreeNode* p1 = q1.front();
		q1.pop();
		TreeNode* p2 = q2.front();
		q2.pop();
		if (!p1 && !p2)
			continue;
		if (!p1 || !p2)
			return false;
		if (p1->val != p2->val)
			return false;
		q1.push(p1->left);
		q2.push(p2->left);
		q1.push(p1->right);
		q2.push(p2->right);
	}

	return true;
}

bool isSameTree1(TreeNode* p, TreeNode* q) {
	if (!p && !q)
		return true;
	if (p == nullptr || q == nullptr)
		return false;
	if (p->val != q->val)
		return false;
	return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}

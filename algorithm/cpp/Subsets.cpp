//78    :Subsets
//Source : https://leetcode-cn.com/problems/subsets/
//Author:xiaomaofeng
//	Data : 2018 - 12 - 20
//
//	Problem Description :
//	   Given a set of distinct integers, nums, return all possible subsets(the power set).
//
//		   Note : The solution set must not contain duplicate subsets.
//
//		   Example :
//
//		   Input : nums = [1, 2, 3]
//		   Output :
//		   [
//			   [3],
//			   [1],
//			   [2],
//			   [1, 2, 3],
//			   [1, 3],
//			   [2, 3],
//			   [1, 2],
//			   []
//		   ]
//
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> ret;
		ret.push_back({});
		int size = nums.size();
		int subsize = pow(2, size);
		int hash = 1;
		while (hash < subsize) {
			vector<int> temp;
			for (int k = 0; k < size; k++) {
				int a = 1 << k;
				if (a&hash) {
					temp.push_back(nums[k]);
				}
			}
			ret.push_back(temp);
			hash++;
		}
		return ret;
	}
};
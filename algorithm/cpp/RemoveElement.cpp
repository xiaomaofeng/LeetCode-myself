// Source : https://oj.leetcode.com/problems/remove-element/
// Author : xiaomaofeng
// Date   : 2019-4-1

/**********************************************************************************
*
* Given an array and a value, remove all instances of that value in place and return the new length.
*
* The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*
*
**********************************************************************************/
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.size() == 0)
			return 0;
		int i = 0;
		int j = 0;
		while (j < nums.size())
		{
			if (nums[j] == val)
			{
				j++;

			}
			else
			{
				nums[i++] = nums[j++];
			}
		}
		return i;
	}
};
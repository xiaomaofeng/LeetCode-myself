"""
78    :Subsets
Source:https://leetcode-cn.com/problems/subsets/
Author:xiaomaofeng
Data  :2018-12-20

Problem Description:
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
"""


class Solution:
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res=[[]]
        for i in nums:
            nres=res.copy()
            for j in nres:
                res.append([i]+j)
        return res
"""
905    :Sort Array By Parity
Source :https://leetcode-cn.com/problems/sort-array-by-parity/
Author :xiaomaofeng
Date   :2018-12-14

Problem Description:
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

Example 1:

Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
"""

class Solution:
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        p = 0
        for i in range(len(A)):
            if (A[i] % 2 == 0):
                A[i], A[p] = A[p], A[i]
                p += 1

        return A

"""
709   :To Lower Case
Source:https://leetcode-cn.com/problems/to-lower-case/
Author:xiaomaofeng
Date  :2018-12-14

Problem Description:
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

Example 1:

Input: "Hello"
Output: "hello"
Example 2:

Input: "here"
Output: "here"
Example 3:

Input: "LOVELY"
Output: "lovely"
"""

class Solution:
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """
        Str1 = ""
        for val in str:
            if val >= 'A' and val <= 'Z':
                Str1 += chr(ord(val) + ord('a') - ord('A'))
            else:
                Str1 += val
        return Str1


class Solution1:
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """

        for val in str:
            if val >= 'A' and val <= 'Z':
                str = str.replace(val, chr(ord(val) + ord('a') - ord('A')))
        return str

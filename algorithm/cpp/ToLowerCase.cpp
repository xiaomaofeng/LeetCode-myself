/*
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
*/

class Solution {
public:
	string toLowerCase(string str) {
		for (int i = 0; i<str.length(); i++)
		{
			if (str[i]>64 && str[i]<91)
			{
				str[i] += 32;
			}
		}

		return str;

	}
};
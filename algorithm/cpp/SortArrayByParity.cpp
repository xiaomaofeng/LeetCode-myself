/*
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
*/



class Solution {
public:
vector<int> sortArrayByParity(vector<int>& A) {

vector<int>odd;
vector<int>even;
for(int i=0;i<A.size();i++)
{
if(A[i]%2==0)
{
even.push_back(A[i]);
}
else
{
odd.push_back(A[i]);

}
}

for(int j=0;j<odd.size();j++)
{
even.push_back(odd[j]);
}
return even;

}
};

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		int pos = 0, temp;
		for (int i = 0; i<A.size(); i++)
		{
			if (A[i] % 2 == 0)
			{
				temp = A[i];
				A[i] = A[pos];
				A[pos++] = temp;
			}
		}
		return A;
	}
};
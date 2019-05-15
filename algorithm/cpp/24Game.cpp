/*
679:24 Game
Source:https://leetcode-cn.com/problems/24-game/
Author:xiaomaofeng
Date:2019-3-26

Problem Description:
You have 4 cards each containing a number from 1 to 9. You need to judge whether they could operated through *, /, +, -, (, ) to get the value of 24.

Example 1:
Input: [4, 1, 8, 7]
Output: True
Explanation: (8-4) * (7-1) = 24
Example 2:
Input: [1, 2, 1, 2]
Output: False
*/
class Solution {
public:
    bool judgePoint24(vector<int>& nums) {
        vector<double>res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[i]);
        }
        return solve(res);
    }
    
    bool solve(vector<double>nums)
    {
        if(nums.size() == 0)
            return false;
        if(nums.size() == 1)
            return abs(nums[0] - 24) < 1e-6;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i != j)
                {
                    vector<double>nums2;
                    for(int k=0;k<nums.size();k++)
                    {
                        if(k != i && k != j)
                        {
                            nums2.push_back(nums[k]);
                        }
                    }
                    for(int x=0;x<4;x++)
                    {
                        if(x < 2 && j>i)
                            continue;
                        if(x==0)
                            nums2.push_back(nums[i] + nums[j]);
                        if(x==1)
                            nums2.push_back(nums[i] * nums[j]);
                        if(x==2)
                            nums2.push_back(nums[i] - nums[j]);
                        if(x==3)
                        {
                            if(nums[j] != 0)
                            {
                                nums2.push_back(nums[i]/nums[j]);
                            }
                            else
                            {
                                continue;
                            }
                        }
                        if(solve(nums2))
                            return true;
                        nums2.pop_back();                           
                    }

                    
                }
            }
            
        }
        return false;
    }
};
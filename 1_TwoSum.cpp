//question number:1
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>res;
		vector<int>n(nums);
		int adda, addb;
		sort(nums.begin(), nums.end());
		for (int i = 0; i<nums.size(); i++)
		{
			int flag = 0;
			for (int j = i + 1; j<nums.size(); j++)
				if (nums[i] + nums[j] == target)
				{
					adda = nums[i];
					addb = nums[j];
					flag = 1;
					break;
				}
			if (flag)break;
		}
		for (int i = 0; i<n.size(); i++)
			if (n[i] == adda)
			{
				res.push_back(i);
				break;
			}
		res.push_back(0);
		for (int i = 0; i<n.size(); i++)
			if (n[i] == addb)
			{
				res.pop_back();
				res.push_back(i);
			}
		return res;
	}
};
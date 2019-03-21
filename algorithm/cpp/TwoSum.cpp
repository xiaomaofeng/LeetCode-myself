//question number:1
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>res;
		vector<int>n(nums);
		int adda, addb;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			int flag = 0;
			for (int j = i + 1; j < nums.size(); j++)
				if (nums[i] + nums[j] == target)
				{
					adda = nums[i];
					addb = nums[j];
					flag = 1;
					break;
				}
			if (flag)break;
		}
		for (int i = 0; i < n.size(); i++)
			if (n[i] == adda)
			{
				res.push_back(i);
				break;
			}
		res.push_back(0);
		for (int i = 0; i < n.size(); i++)
			if (n[i] == addb)
			{
				res.pop_back();
				res.push_back(i);
			}
		return res;
	}
};

class Solution
{
public:
	vector<int>twoSum(vector<int>&numbers, int target)
	{
		unordered_map<int, int>m;
		vector<int>result;
		for (int i = 0; i < numbers.size(); i++)
		{
			//not found the second one
			if (m.find(numbers[i]) == m.end())
			{
				//store the first one position into the second one's key
				m[target - numbers[i]] = i;
			}
			else
			{
				//found the second one
				result.push_back(m[numbers[i] + 1]);
				result.push_back(i + 1);
				break;
			}
		}
		return result;

	}
};

int main()
{
	vector<int, 10>vec;
	vec.push_back(1);
	std::cout << vec.size() << endl;
	getchar();
}
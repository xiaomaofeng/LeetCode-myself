// Source : https://leetcode.com/problems/jewels-and-stones/description

/***************************************************************************************
*
* You're given strings J representing the types of stones that are jewels, and S
* representing the stones you have.  Each character in S is a type of stone you have.
* You want to know how many of the stones you have are also jewels.
*
* The letters in J are guaranteed distinct, and all characters in J and S are letters.
* Letters are case sensitive, so "a" is considered a different type of stone from "A".
*
* Example 1:
*
*
* Input: J = "aA", S = "aAAbbbb"
* Output: 3
*
*
* Example 2:
*
*
* Input: J = "z", S = "ZZ"
* Output: 0
*
*
* Note:
*
*
* 	S and J will consist of letters and have length at most 50.
* 	The characters in J are distinct.
***************************************************************************************/

//Edition 1
//Author : xiaomaofeng
//Date   : 2018-12-13
class Solution {
public:
	int numJewelsInStones(string J, string S) {
		vector<int>vctAscii1;
		vector<int>vctAscii2;
		int num;
		int num1;
		int count = 0;
		for (int i = 0; i<J.length(); i++)
		{
			num = (int)(J[i]);
			vctAscii1.push_back(num);
		}

		for (int k = 0; k<S.length(); k++)
		{
			num1 = (int)(S[k]);
			vctAscii2.push_back(num1);
		}

		for (int x = 0; x<vctAscii1.size(); x++)
		{
			for (int y = 0; y<vctAscii2.size(); y++)
			{
				if (vctAscii1[x] == vctAscii2[y])
					count += 1;


			}
		}
		return count;
	}
};


//-------------------------

//Edition 2:
// Author : Hao Chen
// Date   : 2018-06-23



class Solution {
public:
	int numJewelsInStones(string J, string S) {
		bool map[256] = { false };
		for (auto c : J) {
			map[c] = true;
		}
		int cnt = 0;
		for (auto c : S) {
			if (map[c])  cnt++;
		}
		return cnt;
	}
};
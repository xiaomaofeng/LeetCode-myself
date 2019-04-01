class Solution {
public:
	int mySqrt(int x) {
		if (x == 0)
			return 0;
		int low = 0;
		int high = x / 2 + 1;

		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			long long res = (long)mid * (long)mid;
			if (res == x)
				return mid;
			if (res < x)
			{
				low = mid + 1;

			}
			else
			{
				high = mid - 1;

			}
		}
		return high;

	}
};

class Solution
{
public:
	int mySqrt(int x)
	{
		if (x <= 1)
		{
			return x;
		}
		long r = (long)x;
		while (r > x / r)
		{
			r = (r + x / r) / 2;
		}
		return r;
	}
};
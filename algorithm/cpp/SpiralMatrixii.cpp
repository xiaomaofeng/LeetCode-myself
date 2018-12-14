class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {

		int val = 1;
		int j = 0;
		vector< vector <int> > matrix(n);
		if (n <= 0) return matrix;
		for (int i = 0; i<n; i++) {
			vector<int> v(n);
			matrix[i] = v;
		}

		if (n == 2)
		{
			for (int i = 0; i<2; i++)
			{
				matrix[j][i] = val++;
				j++;
			}
			for (int i = 1; i<2; i--)
			{
				matrix[j][i] = val++;
			}
		}
		while (val <= n * n)
		{

			for (int i = j; i<n - j; i++)
			{
				matrix[j][i] = val++;
			}

			for (int i = j + 1; i<n - j; i++)
			{
				matrix[i][n - 1 - j] = val++;
			}
			for (int i = n - j - 2; i>j; i--)
			{
				matrix[n - j - 1][i] = val++;
			}
			for (int i = n - j - 2; i>j; i--)
			{
				matrix[i][j] = val++;

			}

			j++;
		}

		return matrix;
	}
};
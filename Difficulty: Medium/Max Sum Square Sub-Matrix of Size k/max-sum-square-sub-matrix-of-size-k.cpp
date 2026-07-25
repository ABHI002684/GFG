class Solution {
	public:
	int maximumSum(vector<vector<int>> & mat, int k) {
		// code here
		int n = mat.size();
		vector<vector<int>> v(n, vector<int>(n));
		for (int i = 0; i<n; i++) {
			int sum = 0;
			for (int j = 0; j<n; j++) {
				sum += mat[j][i];
				v[j][i] = sum;
			}
		}
		int maxi = INT_MIN;
		for (int i = 0; i<n; i++) {
			if (i + k - 1 >= n) {
				continue;
			}
			int sum = 0;
			int l = 0;
			if (i == 0) {
				for (int j = 0; j<k; j++) {
					sum += (v[i + k - 1][j]);
				}
				maxi = max(maxi, sum);
				for (int j = k; j<n; j++) {
					sum += (v[i + k - 1][j]);
					sum -= (v[i + k - 1][l]);
					maxi = max(maxi, sum);
					l++;
				}
				continue;
			}
			for (int j = 0; j<k; j++) {
				sum += (v[i + k - 1][j]-v[i - 1][j]);
			}
			maxi = max(maxi, sum);
			for (int j = k; j<n; j++) {
				sum += (v[i + k - 1][j]-v[i - 1][j]);
				sum -= (v[i + k - 1][l]-v[i - 1][l]);
				maxi = max(maxi, sum);
				l++;
			}
		}
		return maxi;
	}
};

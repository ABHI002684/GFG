class Solution {
	public:
	int largestSubsquare(vector<vector<char>> &mat) {
		// code here
		int n = mat.size();
		
		vector<vector<int>> right(n, vector<int>(n, 0)); // store max consicutive x right to left
		vector<vector<int>> down(n, vector<int>(n, 0)); // store max consicutive X  down to top
		
		for (int i = n - 1; i >= 0; --i) {
			for (int j = n - 1; j >= 0; --j) {
				
				if (mat[i][j] == 'X') {
					
					right[i][j] = 1;
					down[i][j] = 1;
					
					if (j + 1 < n) {
						right[i][j] += right[i][j + 1];
					}
					if (i + 1 < n) {
						down[i][j] += down[i + 1][j];
					}
				}
			}
		}
		
		// check every length pick greedily so start max first
		for (int len = n; len >= 1; len--) {
			
			for (int i = 0; i + len <= n; ++i) {
				
				for (int j = 0; j + len <= n; ++j) {
					
					// check every direction if i can make curr length of squre
					
					// check top left to right  bar
					if (right[i][j] < len)
						continue;
					
					// check  left top to down bar
					if (down[i][j] < len)
						continue;
					
					// check bottom left to right bar
					if (right[i + len - 1][j] < len)
						continue;
					
					// check right top to down bar
					if (down[i][j + len - 1] < len)
						continue;
					
					return len;
				}
			}
		}
		
		return 0;
	}
};

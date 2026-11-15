class Solution {
	public:
	int subsequenceSum(string &s) {
		// code here
		int MOD = 1e9 + 7;
		long long sum = 0;
		int n = s.size();
		for (char c : s) {
			sum = (sum + (c - '0')) % MOD;
		}
		long long pow2 = 1;
		for (int i = 0; i < n - 1; i++) {
			pow2 = (pow2 * 2) % MOD;
		}
		return (sum * pow2) % MOD;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
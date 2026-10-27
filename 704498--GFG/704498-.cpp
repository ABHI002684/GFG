class Solution {
  public:
    int getMaxWeight(string &s) {
        int n = s.size();
        if (n == 0) return 0;
        int m = n - 1;
        vector<int> gain(m);
        for (int i = 0; i < m; i++) {
            gain[i] = (s[i] == s[i + 1] ? 1 : 2);
        }
        vector<int> dp(m + 1, 0);
        for (int i = 1; i <= m; i++) {
            dp[i] = max(dp[i - 1], (i >= 2 ? dp[i - 2] : 0) + gain[i - 1]);
        }
        return n + dp[m];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
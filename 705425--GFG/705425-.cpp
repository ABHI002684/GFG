class Solution {
  public:
    unordered_map<int, int> mp;
    int minimumCost(int x, int s, int m, int l, int cs, int cm, int cl) {
        // code here
        
        
        if (x <= 0)
          return 0;
		
		if (mp.find(x) != mp.end())
			return mp[x];
				
		return mp[x] = min({
			minimumCost(x - s, s, m, l, cs, cm, cl) + cs,
			minimumCost(x - m, s, m, l, cs, cm, cl) + cm,
			minimumCost(x - l, s, m, l, cs, cm, cl) + cl
		});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
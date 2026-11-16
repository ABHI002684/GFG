class Solution {
	public:
	int findKthSmall(vector<int>& arr, int k) {
		// code here
		int st = k, en = k + arr.size();
		
		while (st<en) {
			int mid = st + (en - st)/2;
			int miss = mid;
			for (int v:arr) {
				if (v <= mid) {
					miss--;
				}
			}
			if (miss<k) {
				st = mid + 1;
			} else {
				en = mid;
			}
		}
		
		return st;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
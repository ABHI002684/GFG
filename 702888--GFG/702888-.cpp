class Solution {
	public:
	int maxPackages(vector<int>& arr, int totalTime) {
		// code here
		int currsum = 0;
		
		int i = 0;
		for (; i<totalTime && i<arr.size(); i++) {
			currsum += arr[i];
		}
		int maxi = currsum;
		for (int j = totalTime; j<arr.size(); j++) {
			currsum -= arr[j - totalTime];
			currsum += arr[j];
			maxi = max(currsum, maxi);
		}
		return maxi;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
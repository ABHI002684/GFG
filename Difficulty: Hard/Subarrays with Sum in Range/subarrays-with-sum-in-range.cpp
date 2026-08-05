class Solution {
	public:
	long long subarray_sum(vector<int>& arr, int l) {
		int curSum = 0;
		int st = 0, n = arr.size();
		long long ans = 0;
		
		for (int en = 0; en<n; en++) {
			curSum += arr[en];
			while (curSum>l) {
				curSum -= arr[st++];
			}
			ans += (en - st + 1);
		}
		
		return ans;
	}
	int countSubarray(vector<int>& arr, int l, int r) {
		// code here
		return (int)(subarray_sum(arr, r) - subarray_sum(arr, l - 1));
	}
};

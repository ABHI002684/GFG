class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int mini=1e9;
        int sum=0;

        for(int i=0; i<n; i++){
            sum+=arr[i];
            mini=min(mini, sum);
            if(sum>0) sum=0;
        }

        return mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
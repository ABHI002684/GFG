class Solution {
  public:
    int minOperation(int n) {
        // code here
        int operations = 0;
        while (n > 1) {
            operations += 1 + (n%2);
            n /= 2;
        }

        return (operations + 1);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
  public:
    int minimumStep(int n) {
        // code here
        int ans=0;
        
        while(n){
            if(n%3){
                n--;
            }else{
                n/=3;
            }
            
            ans++;
        }
        
        return ans-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
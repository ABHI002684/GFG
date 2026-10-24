class Solution {
  public:
    bool isPossible(int n, int m, string& s) {
        // code here
        int lowr=0, lowc=0, highr=0, highc=0, r=0,c=0;
        
        for(auto it:s){
            
            if(it=='L'){
                c--;
            }else if(it=='R'){
                c++;
            }else if(it=='D'){
                r--;
            }else{
                r++;
            }
            
            lowr=min(lowr,r);
            lowc=min(lowc,c);
            highr=max(highr,r);
            highc=max(highc,c);
        }
        
        
        if(highr-lowr<n && highc-lowc<m){
            return true;
        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
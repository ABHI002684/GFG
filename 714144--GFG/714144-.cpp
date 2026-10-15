class Solution {
  public:
    int maxValue(int n) {
        int i=31;
        int c=0;
        
        while(i>=0){
            if(n&(1<<i)){
                c++; //set bit found
            }else{
                c=0; //unset bit found
            }
            
            if(c==3){
                n=(n&(~(1<<i))); //clearing the current bit
                c=0;
            }
            i--;
        }
        
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
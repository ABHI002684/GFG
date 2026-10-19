class Solution {
  public:
    bool func(int i, vector<int> &arr, vector<int> &vis, vector<int> &good){
        int n=arr.size();
        
        //out of bound check
        if(i<0 || i>=n){
            return true;
        }
        
        // current path
        if(vis[i]==1){
            return false;
        }
        
        
        //Already cover in some other path
        if(vis[i]==2){
            return good[i];
        }
        
        vis[i]=1;
        
        int next=i+arr[i];
        
        bool ans=func(next,arr,vis,good);
        vis[i]=2;
        good[i]=ans;
        
        return ans;
    }
    int goodIndices(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        vector<int> vis(n,0);
        vector<int> good(n,0);
        
        for(int i=0;i<n;i++){
            if(vis[i]==2){
                continue;
            }
            
            func(i,arr,vis,good);
        }
        
        int c=0;
        
        for(int i:good){
            if(i){
                c++;
            }
        }
        
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
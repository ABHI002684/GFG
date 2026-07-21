class Solution {
  public:
    int maxIndexDifference(string &s) {
        // code here
        int n=s.size();
        vector<int> reach(26,-1);
        
        int ans=-1;
        
        for(int i=n-1;i>=0;i--){
            int ch=s[i]-'a';
            int curReach;
            
            if(ch==25){
                curReach=i;
            }else if(reach[ch+1]!=-1){
                curReach=reach[ch+1];
            }else{
                curReach=i;
            }
            
            reach[ch]=max(reach[ch],curReach);
            
            if(ch==0){
                ans=max(ans,curReach-i);
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=0;
        vector<bool> seen(nums.size(),false);
        for(int i=0;i<nums.size();i++){
          if(seen[i]) continue;
    int k=nums[i];
    int cur=0;
            while(!seen[k]){
                seen[k]=true;
                k=nums[k];
              cur++;
              ans=max(cur,ans);
            }
        }
        return ans;
    }
};

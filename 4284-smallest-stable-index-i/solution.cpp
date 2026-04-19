class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int cur=INT_MIN;
        vector<int> premax;
        vector<int> postmin(nums.size(),0);
       
        for(int i=0;i<nums.size();i++){
            cur=max(cur,nums[i]);
            premax.push_back(cur);
        }
        cur=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            cur=min(nums[i],cur);
            postmin[i]=cur;
        }
       
        for(int i=0;i<premax.size();i++){
            if(premax[i]-postmin[i]<=k){
                return i; }
        }
        return -1;
    }
};

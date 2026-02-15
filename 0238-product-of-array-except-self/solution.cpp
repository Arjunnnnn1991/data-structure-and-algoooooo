class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mut1=1,mut2=1;
        int zero=0;
        int zsx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){ zero++;
            zsx=i;}
        }
        if(zero>1){
            vector<int> ans(nums.size(),0);
            return ans;
        }
        else if(zero==1){
            int mut=1;
            for(int i=0;i<nums.size();i++){
                if(i==zsx) continue;
                else mut*=nums[i];
            }
            vector<int> ans(nums.size(),0);
            ans[zsx]=mut;
            return ans;
        }
        vector<int> pre;
        vector<int> suf(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            mut1*=nums[i];
            pre.push_back(mut1);
        }
        for(int i=0;i<nums.size();i++){
            mut2*=nums[nums.size()-1-i];
            suf[suf.size()-1-i]=mut2;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i==0) ans.push_back(suf[1]);
            else if(i==nums.size()-1) ans.push_back(pre[nums.size()-2]);
            else ans.push_back(pre[i-1]*suf[i+1]);
        }
        return ans;
    }
};

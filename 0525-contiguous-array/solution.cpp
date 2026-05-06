class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cur=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cur--;
            else cur++;
            nums[i]=cur;
        }
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) ans=i+1;
            else if(m.count(nums[i])) ans=max(ans,i-m[nums[i]]);
            else m[nums[i]]=i;
        }
        return ans;
    }
};

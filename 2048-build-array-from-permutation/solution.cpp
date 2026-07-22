class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int i=0;
        for(auto x:nums){
            ans[i]=nums[x];
            i++;
        }
        return ans;
    }
};

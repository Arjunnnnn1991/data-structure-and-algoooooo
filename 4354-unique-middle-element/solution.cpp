class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums)m[x]++;
        return m[nums[nums.size()/2]]==1;
    }
};

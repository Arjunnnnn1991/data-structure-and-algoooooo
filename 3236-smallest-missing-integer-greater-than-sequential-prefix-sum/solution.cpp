class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        int have=nums[0];
        int i=1;
        while(i<nums.size()&&nums[i]==nums[i-1]+1){
            have+=nums[i];
            i++;
        }
        while(true){
            if(s.find(have)==s.end()) return have;
            else have++;
        }
        return 0;
    }
};

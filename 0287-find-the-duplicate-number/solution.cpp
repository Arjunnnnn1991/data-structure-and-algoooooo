class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int i=0;
        while(i<n){
            
            int correctindx=nums[i];
            if(nums[correctindx]==nums[i]) return nums[i];
            else {swap(nums[i],nums[correctindx]);
            if(nums[i]==i+1){
                i++;
            }
            else{ continue;}
            }
        }
        return 0;
    }
};

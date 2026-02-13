class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        while(i<n){
            int ryt=nums[i]-1;
            
             if(nums[i]==nums[ryt]||nums[i]==i+1) {
                i++;
            }
            else{
                swap(nums[i],nums[ryt]);
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                ans.push_back(j+1);
            }
        }
        return ans;
    }
};

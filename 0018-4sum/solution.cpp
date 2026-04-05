class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int x=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int y=nums[j];
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long total=(long long)x+y+nums[left]+nums[right];
                    if(total==target){
                        vector<int> t={x,y,nums[left],nums[right]};
                        ans.push_back(t);
                        while(left<right&&nums[left]==nums[left+1])left++;
                        while(left<right&&nums[right]==nums[right-1]) right--;
                        right--;
                        left++;
                    }
                    else if(total>target) right--;
                    else left++;


                }
            }
        }
        return ans;
    }
};

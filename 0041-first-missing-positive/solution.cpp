class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==1){
            if(nums[0]==1){
                return 2;
            }
            else return 1;
        }
        int i=0,n=nums.size(),ans=1;
        while(i<n){
            if(nums[i]<0) i++;
            
            else if(nums[i]-1<0||nums[i]-1>=n||nums[i]==i+1||nums[nums[i]-1]==nums[i]){
                i++;
            }
            
            else swap(nums[i],nums[nums[i]-1]);
        }
       for(int i=0;i<n;i++){
        if(nums[i]!=i+1) return i+1;
        else if(nums[i]==i+1) ans++;
       }
       return ans;
    }
};

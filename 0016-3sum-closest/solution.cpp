class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long long ans=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int total=x+nums[left]+nums[right];
                  if(abs(ans-target)>(abs(total-target))) {ans=total;
                  }
                if(total>target) right--;
                else if(total<target) left++;
                else return target;
              
            }
        }
        return ans;
    }
};

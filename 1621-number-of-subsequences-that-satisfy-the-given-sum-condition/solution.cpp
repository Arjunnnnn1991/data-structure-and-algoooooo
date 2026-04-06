class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mod=1e9+7;
        vector<int> p(nums.size()+1,1);
        for(int i=1;i<p.size();i++){
            p[i]=(p[i-1]*2)%mod;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int pivot=-1;
            int low=i,high=nums.size()-1,mid;
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[i]+nums[mid]<=target){
                    pivot=mid;
                    low=mid+1;
                }
                else high=mid-1;
            }
            if(pivot>=i) ans=(ans+p[pivot-i])%mod;
        }
        return ans;
    }
};
